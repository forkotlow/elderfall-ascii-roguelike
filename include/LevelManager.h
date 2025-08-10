#pragma once
// handles Various Map data , currently rendering map index, handles placement of entities on map's grid

#include "Map.h"
#include "Tile.h"
#include "Entity.h"

#include <vector>

class LevelManager{
private:
    unsigned int index;
    std::vector< Map > maps;

    
public:
    
//main function to load map data into the maps vector/list
    void loadMap() { maps = { Map(12,10), Map(), Map(10,6) }; /* Placeholder map data */ }

    Map& getCurrentMap() { return maps[index]; }
    void changeCurrentMap( unsigned int newMapIndex );
    char getTileSymbol(const int& tileX, const int& tileY) { return getCurrentMap().getGrid()[tileY][tileX].getTopEntitySymbol(); }


    void movePlayerOnTile(Entity* entity, int newPosX, int newPosY);
    void removePlayerFromTile(int currentPosX, int currentPosY);


    bool isWalkableTile(const int& tilePosX = 0, const int& tilePosY = 0 );


    void placeEntity(Entity* entity, int newPosX, int newPosY);
    void removeSpecificEntity(Entity* entity);



// Constructor 
    LevelManager() : index(0) {}

};