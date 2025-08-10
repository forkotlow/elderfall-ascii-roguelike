#include "GameManager.h"

#include <iostream>

//Handles intializing/loading Maps, Player stats, other related data required to be load at start 
void GameManager::load(){

    levelManager.loadMap();
    player.updatePosition(3,3); //player's starting position setup
    levelManager.placeEntity(&player, player.getPosX(), player.getPosY());//player placement on map

}

//Handles main Game Loop (rendering game elements, player input logic, enemy AI logic, etc.)
void GameManager::run(){

    renderer.displayWholeMap(levelManager.getCurrentMap());
    
    std::cout << "\nw/a/s/d to move, q to quit\n >> ";
    std::cin >> userInput;

    inputHandler(userInput);

}

void GameManager::inputHandler(char& input){
    input = input | 0x20; //to lowercase

    if(input == 'q') { setGameState(false); std::cout << "\n...QUIT...\n"; return; }
    
    int tileX = player.getPosX();
    int tileY = player.getPosY();

    getTileInDirection(input, tileX, tileY); //sets the Target Tile's (posX,posY) according to input keys (w,s,a,d)

    //Collision check
    if( levelManager.isWalkableTile(tileX, tileY) ){

        if(levelManager.getTileSymbol(tileX,tileY) != 'X') { /*Placeholder for wall symbol (X) */
            playerMovement(tileX, tileY);
        }else{
            std::cout << "\nWall Ahead!!!\n"; 
        }
        
    }
    
}

// Sets (and Clamps) tileX / tileY to coordinates one step in input direction from player position.
void GameManager::getTileInDirection(const char& inputKey, int& tileX, int& tileY){

    auto currentMap = levelManager.getCurrentMap();

    if(inputKey == 'w') { 
        tileY = MIN(0, tileY); //--> Clamping target tile position so player doesnt goes outside of map's boundary
        if(tileY > 0) {tileY--;} //points to tile at north from player
    } 
    else if(inputKey == 's') { 
        tileY = MAX((currentMap.getHeight() -1), tileY);
        if(tileY < (currentMap.getHeight() -1) ) {tileY++;} //points to tile at south from player
    }
    else if(inputKey == 'a') { 
        tileX = MIN(0, tileX); 
        if(tileX > 0) {tileX--;}  //points to tile at west from player
    }
    else if(inputKey == 'd') { 
        tileX = MAX((currentMap.getWidth() -1), tileX);
        if(tileX < (currentMap.getWidth() -1) ) {tileX++;} //points to tile at east from player
    }

}

//Updates Player Position and Symbol from TileA onto TileB
void GameManager::playerMovement(int& newTilePosX, int& newTilePosY){

    levelManager.removePlayerFromTile(player.getPosX(), player.getPosY());
    player.updatePosition(newTilePosX,newTilePosY);
    levelManager.movePlayerOnTile( &player, player.getPosX(), player.getPosY() );

}



