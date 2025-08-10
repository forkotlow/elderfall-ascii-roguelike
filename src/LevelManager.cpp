
#include "LevelManager.h"
#include <iostream>


//changes current-Index value for maps(vector)
void LevelManager::changeCurrentMap( unsigned int newMapIndex ) {
     if( newMapIndex >= maps.size() ) { 
        index = (maps.size() -1 ); 
    } else { 
        index = newMapIndex;
    } 
}

//== Tile Attributes Check ==

// returns false if tile has collider
bool LevelManager::isWalkableTile(const int& tilePosX, const int& tilePosY){
    return !( getCurrentMap().getGridRef()[ tilePosY ][ tilePosX ].getTileCollision() );
}


//== Functions For Player == 


// adds player onto tile layer
void LevelManager::movePlayerOnTile(Entity* entity, int newPosX, int newPosY){
    getCurrentMap().getGridRef()[newPosY][newPosX].addEntityOnTile(entity);
}

// removes player from tile layer 
void LevelManager::removePlayerFromTile(int currentPosX, int currentPosY){
    getCurrentMap().getGridRef()[currentPosY][currentPosX].removeEntityOnTile();
}



//== Entity/Items Related Functions == 

// place any entity on tile
    void LevelManager::placeEntity(Entity* entity, int newPosX, int newPosY){
        getCurrentMap().getGridRef()[newPosY][newPosX].addEntityOnTile(entity);
    }

// remove an entity from tile
    void LevelManager::removeSpecificEntity(Entity* entity){
        getCurrentMap().getGridRef()[entity->getPosY()][entity->getPosX()].removeEntityOnTile(entity);
    }


