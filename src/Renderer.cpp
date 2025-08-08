#include "Renderer.h"

#include <iostream>

void Renderer::displayWholeMap(Map& map){

    for(int i = 0; i < map.getHeight(); ++i ){
        for( int j = 0; j < map.getWidth(); ++j){
            std::cout << map.getGrid()[i][j].getTopEntitySymbol(); 
        }
        std::cout << std::endl;
    }

}
