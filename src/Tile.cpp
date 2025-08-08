#include "Tile.h"


const char Tile::getTopEntitySymbol() const{ 
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

//future me: make an loop to remove an specific entity from the entities list 
void Tile::removeEntityOnTile(){ 
    entities.pop_back(); 
    if( !entities.empty() ){ 
        isWalkable = entities.back()->isBlocking(); 
    }else {
         isWalkable = true; //is default ground 
    }  
}