#include "Renderer.h"

#include <iostream>

void Renderer::displayWholeMap(){
    std::vector< std::vector<Tile> > grid = map.getMap();

    for(int i = 0; i < map.getHeight(); ++i ){
        for( int j = 0; j < map.getWidth(); ++j){
            std::cout << grid[i][j].getTopSymbol(); 
        }
        std::cout << std::endl;
    }

}
