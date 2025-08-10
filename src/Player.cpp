#include "Player.h"

#include <iostream>
#include <string>



// set/updates player's current position 
void Player::updatePosition(int x, int y){ 
    position.setPosition(x,y); 
}


// Constructor with default name and symbol 
Player::Player(std::string name, char symbol){
    setName(name);
    setSymbol(symbol);
    setCollision(true);

    position.setPosition(2,2);
}

