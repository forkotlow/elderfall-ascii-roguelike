#include "Tile.h"


char Tile::getTopSymbol(){ 
    if( !entities.empty() ){ 
    return entities.back()->getSymbol(); 
    }else {
        return '.'; //ground symbol (placeholder)
    } 
}

void Tile::addEntityOnTile(Entity* entity){
    entities.push_back(entity);
    isWalkable = entity->isBlocking();
}

void Tile::removeEntityOnTile(){ 
    entities.pop_back(); 
    if( !entities.empty() ){ isWalkable = entities.back()->isBlocking(); }
    else{ isWalkable = true; } //is default ground 
}