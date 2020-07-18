#include "../include/Perceptron.h"

Perceptron::Perceptron(int weight1){
    w1 = weight1;
}

int Perceptron::receive_input(int grey_lvl){

    return Perceptron::process(grey_lvl, w1);

}

int Perceptron::process(int grey_lvl, int weight){

    int result = grey_lvl * weight;

    return Perceptron::step_function(result);

}

int Perceptron::step_function(int grey_lvl_calc){

    grey_lvl_calc > 125 ? grey_lvl_calc = 255 : grey_lvl_calc = 0;
    
    return Perceptron::output(grey_lvl_calc);
}

int Perceptron::output(int final_value){

    return final_value;
}
