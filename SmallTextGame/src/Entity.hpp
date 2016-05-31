#ifndef ENTITY_HPP
#define ENTITY_HPP

class Entity{
  public:
    Entity();
    ~Entity();
    
    void setId(int id) { this->id = id; }
    int getId() const { return this->id; }
    
    virtual void processInput() = 0;
    virtual void update() = 0;
    virtual void render() = 0;
    
  private:
    int id;
}

#endif