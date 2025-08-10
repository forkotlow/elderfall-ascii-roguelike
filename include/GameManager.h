#pragma once

#include "Player.h"
#include "Renderer.h"
#include "LevelManager.h"


class GameManager{
private:
    
    LevelManager levelManager;
    Renderer renderer;
    Player player;

    bool isPlaying; //Check for gamestate 

    char userInput; //Holds Key Pressed 

public:
    bool getGameState() { return isPlaying; }
    void setGameState(bool value) { isPlaying = value; }

    void load();
    void run();

    void inputHandler(char& input);
    void getTileInDirection(const char& inputKey, int& tileX, int& tileY);
    void playerMovement(int& newTilePosX, int& newTilePosY);


    int MIN(const int& minValue, const int& originalVal ){ if(originalVal < minValue){return minValue;} return originalVal; }
    int MAX(const int& maxValue, const int& originalVal){ if(originalVal > maxValue){return maxValue;} return originalVal; }


// Constructor
    GameManager(){
        load();
    }

};