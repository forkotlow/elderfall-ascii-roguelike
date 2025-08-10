#include "GameManager.h"

#include <iostream>

int main(){

    GameManager gameManager;

    while(gameManager.getGameState()){
        system("clear");
        gameManager.run();
    }

    return 0;       
}

