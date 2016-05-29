#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <iostream>

class Engine{
    public:
      Engine(){}
      
      void allSystemsGo();
      
    private:
      void initialize();
      void loop();
      void processInput();
      void update();
      void render();
      
      bool running;
};
#endif