#pragma once
//Contains 2d grid(vector) of tiles

#include "Tile.h"
#include <vector>

class Map{
private:
    int grid_Width; //cols (x-axis)
    int grid_Height; //rows (y-axis)

    std::vector< std::vector<Tile> > grid;

public:
// getters
    int getHeight(){ return grid_Height; }
    int getWidth(){return grid_Width; }

    const std::vector< std::vector<Tile> >& getGrid() const { return grid; } //Read-only grid
    std::vector< std::vector<Tile> >& getGridRef() { return grid; } //Read-write grid elements



// Constructor with height(y), width(x) parameters, also initializes grid
    Map( int width = 6, int height = 6) 
    :  grid_Width(width), grid_Height(height), grid(grid_Height, std::vector<Tile>(grid_Width)) {}

};