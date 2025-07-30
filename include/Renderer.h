#pragma once
//Display map, player stats, other elements on terminal

#include "Map.h"
#include "Tile.h"

#include <iostream>

class Renderer{

    Map map;

public:
    void displayWholeMap();


// Constructor
    Renderer() : map(10,10) {}

};
