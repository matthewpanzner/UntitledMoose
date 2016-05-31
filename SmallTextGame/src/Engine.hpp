#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "InputHandler.hpp"

#include <iostream>

class Engine{
    public:
      Engine(){}
      ~Engine();
      
      void allSystemsGo();
      
    private:
      void initialize();
      void loop();
      void processInput();
      void update();
      void render();
      
      bool running;
    
    private:
      InputHandler* inHandler;
};
#endif