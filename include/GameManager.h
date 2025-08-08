#pragma once

#include "Player.h"
#include "Renderer.h"
#include "LevelManager.h"


class GameManager{
private:
    
    LevelManager levelManager;
    Renderer renderer;
    Player player;

public:

    void load();


    
// Constructor
    GameManager(){
        load();
    }

};