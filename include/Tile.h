#pragma once

//Tile object for Map class

#include "Position.h"
#include "Entity.h"
#include <vector>

class Tile{
public:
    Position position;
    bool isWalkable;

    std::vector<Entity*> entities; //Vector storing entity on tile's location

    //Returns symbol of entity on toppest layer of tile (entities vector)
    char getTopSymbol();
    void addEntityOnTile(Entity* entity); 
    void removeEntityOnTile();

};
