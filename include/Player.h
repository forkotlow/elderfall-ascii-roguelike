#pragma once

#include "Entity.h"
#include "Map.h"

class Player: public Entity{

public:

    int getPosX() { return position.getX(); }
    int getPosY() { return position.getY(); }


    void updatePosition(int x, int y);


// Constructor with default name and symbol 
    Player(std::string name = "Ron", char symbol = '@');

    
};

