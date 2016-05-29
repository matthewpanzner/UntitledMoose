#include "Engine.hpp"

void Engine::initialize(){
    std::cout << "Initialize" << std::endl;
    this->running = true;
}

void Engine::allSystemsGo(){
  this->initialize();  
  
  while(this->running){
    this->loop();
  }
}

void Engine::loop(){
  this->processInput();
  this->update();
  this->render();
}

void Engine::processInput(){
    std::cout<< "processing input..." << std::endl;
}

void Engine::update(){
    std::cout << "updating..." << std::endl;
}

void Engine::render(){
    std::cout <<"rendering..." << std::endl;
    this->running = false;
}