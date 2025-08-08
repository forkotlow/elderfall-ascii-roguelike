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

// main function to load map data into the maps list/vector
    void loadMap(){
        maps = { Map(12,10), Map(), Map(10,6) };//placeholder data
    }

    Map& getCurrentMap(){
        return maps[index]; 
    }


//place an entity on tile
    void placeEntity(Entity* entity, int newPosX, int newPosY){
        getCurrentMap().getGridRef()[newPosY][newPosX].addEntityOnTile(entity);
    }

    LevelManager() : index(0) {}

};