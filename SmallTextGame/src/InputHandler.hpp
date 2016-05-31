#ifndef INPUTHANDLER_HPP
#define INPUTHANDLER_HPP

#include "Input.hpp"

#include <string>
#include <iostream>

class InputHandler{
  public:
    InputHandler(){ std::cout << "Test"; this->input = new Input(); }
    
    Input* poll();
    Input* getInput() const { return this->input; }
    
  private:
    Input* input;
};

#endif