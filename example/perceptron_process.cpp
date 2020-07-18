#include "../include/Perceptron.h"

#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char* argv[]){
    Mat imagem, imagem_processada;
    imagem = imread(argv[1], IMREAD_GRAYSCALE);
    imagem_processada = Mat(imagem.rows, imagem.cols, CV_8U);

    for (int i = 0; i < imagem.rows; i++){
        for (int j = 0; j < imagem.cols; j++){
            int pix_grey_val = int(imagem.at<uchar>(i,j));

            Perceptron new_perceptron(1);
            int new_pix_grey_val = new_perceptron.receive_input(pix_grey_val);

            imagem_processada.at<uchar>(i,j) = uchar(new_pix_grey_val);
        }
    }
    namedWindow("Minha Imagem", WINDOW_NORMAL);
    resizeWindow("Minha Imagem", 600,600);
    imshow("Minha Imagem", imagem_processada);
    waitKey(0);

    imwrite("saida.jpg", imagem_processada);
}
