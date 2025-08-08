#include "GameManager.h"

#include <iostream>


void GameManager::load(){
    levelManager.loadMap();
    player.updatePosition(3,3); //player's starting position setup
    levelManager.placeEntity(&player, player.getPosX(), player.getPosY());//player placement on map
    renderer.displayWholeMap(levelManager.getCurrentMap());
}