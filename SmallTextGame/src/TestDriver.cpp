#include "InputHandler.hpp"
#include <iostream>

int main(){
    InputHandler* ih = new InputHandler();
    Input* input = ih->poll();
    std::cout << input->getInput();
    return 0;
}