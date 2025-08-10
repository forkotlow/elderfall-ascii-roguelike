#pragma once

//Tile object for Map class

#include "Position.h"
#include "Entity.h"
#include <vector>

class Tile{
private:
    Position position;
    bool hasCollision;
    std::vector<Entity*> entities; //(aka. Tile Layer) Entity* vector storing entity on tile's location

public:

    bool getTileCollision() { return hasCollision; }
    void setTileCollision(bool colValue) { hasCollision = colValue; }
    
    //Returns symbol(char) of top most entity of tile layer (entities vector)
    const char getTopEntitySymbol() const;
    void addEntityOnTile(Entity* entity); 
    void removeEntityOnTile();
    void removeEntityOnTile(Entity* entity); //overload fnc.

};
