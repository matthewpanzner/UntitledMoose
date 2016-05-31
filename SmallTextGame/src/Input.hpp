#ifndef INPUT_HPP
#define INPUT_HPP

#include <string>

class Input{
  public:
    Input(){}
    ~Input(){}
    
    inline std::string getInput() { return this->msg; }
    inline void setInput(std::string input) { this->msg = input; }
  private:
    std::string msg;
};

#endif