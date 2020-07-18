#ifndef PERCEPTRON_H
#define PERCEPTRON_H

class Perceptron{

    public:
        int w1;   
    
    Perceptron(int weight);
    int receive_input(int grey_lvl);
    int process(int grey_lvl, int weight);
    int step_function(int grey_lvl_calc);
    int output(int final_value);

};

#endif