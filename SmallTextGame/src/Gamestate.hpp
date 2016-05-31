#include "../Input.hpp"
#include "../Engine.hpp"

class GameState{
   public:
        virtual ~GameState();
        virtual void processInput(Engine& engine, Input input);
        virtual void update(Engine& engine);
        virtual void render();
   
};