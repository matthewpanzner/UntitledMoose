#include "InputHandler.hpp"

Input* InputHandler::poll(){

  std::string response;
  std::cout << ">";
  std::cin >> response;
  
  this->input->setInput(response);
  
  return this->input;
}