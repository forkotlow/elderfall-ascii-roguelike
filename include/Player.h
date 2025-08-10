#pragma once

#include "Entity.h"
#include "Map.h"

class Player: public Entity{
/* Player Stats */

public:

    void updatePosition(int x, int y);


    
// Constructor with default name and symbol 
    Player(std::string name = "Ron", char symbol = '@');

};

