#include "Engine.hpp"

Engine::~Engine(){
  if(inHandler != NULL){
    delete inHandler;
  }  
}

void Engine::initialize(){
    inHandler = new InputHandler();
    
    std::cout << "Welcome! To start press 's'" << std::endl;
    
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
    if(this->inHandler->poll()->getInput() == "exit")
      this->running = false;
}

void Engine::update(){
    std::cout << "updating..." << std::endl;
}

void Engine::render(){
    std::cout <<"rendering..." << std::endl;
}