#pragma once
//Contains 2d grid(vector) of tiles

#include "Tile.h"
#include <vector>

class Map{
private:
    int grid_Height; //rows (y-axis)
    int grid_Width; //cols (x-axis)

    std::vector< std::vector<Tile> > grid;

public:
// getters

    int getHeight(){ return grid_Height; }
    int getWidth(){return grid_Width; }

    const std::vector< std::vector<Tile> >& getMap() const { return grid; } //Read-only grid
    std::vector< std::vector<Tile> >& getMapRef() { return grid; } //Read-write grid elements

// setters

    void setHeight( int height ) { grid_Height = height; }
    void setWidth( int width ) { grid_Width = width; }


// Constructor with height(y) , width(x) parameters also, initializes grid
    Map(int height = 6, int width = 6) 
    : grid_Height(height), grid_Width(width), grid(grid_Height, std::vector<Tile>(grid_Width)) {}

};