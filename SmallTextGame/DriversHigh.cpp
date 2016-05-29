#include "Engine.hpp"
#include <iostream>

int main(){
    try{
      Engine* e = new Engine();        
      e->allSystemsGo();
    }
    catch(char* errMsg){
        std::cout << errMsg << std::endl;
    }
    
    return 0;
}