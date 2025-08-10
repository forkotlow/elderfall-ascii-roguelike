#include "Tile.h"


const char Tile::getTopEntitySymbol() const{ 
    if( !entities.empty() ){ 
    return entities.back()->getSymbol(); 
    }else {
        return '.'; //ground symbol (placeholder)
    } 
}

// pushback a entity into tile layer(entities vector)
void Tile::addEntityOnTile(Entity* entity){
    entities.push_back(entity);
    setTileCollision( entity->isBlocking() );
}

//Removes the top most entity from entities list of tile layer
void Tile::removeEntityOnTile(){ 
    entities.pop_back(); 

    if( !entities.empty() ){ 
        setTileCollision( entities.back()->isBlocking() ) ;
    }else {
        setTileCollision(false); //is default ground collision value(false)
    }  
}

//Removes a specific Entity from entities list of tile layer
void Tile::removeEntityOnTile(Entity* entity){ 
    
    for(int i = 0; i < entities.size(); ++i){
        if( entity->getSymbol() == entities[i]->getSymbol() ){
            entities.erase( (entities.begin() + i) ); 
        }
    }
    
    if( !entities.empty() ){ 
        setTileCollision( entities.back()->isBlocking() ) ;
    }else {
        setTileCollision(false); //this is default ground collision value(false)
    }  

}