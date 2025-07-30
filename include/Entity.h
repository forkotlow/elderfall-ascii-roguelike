#pragma once
//Base Class of Every Character/Items in Game

#include "Position.h"
#include <string>

class Entity{
protected:
    Position position;
    std::string name;
    char symbol;

public:
    std::string getName(){ return name; }
    char getSymbol(){ return symbol; }

    void setName(std::string _name) { name = _name; }
    void setSymbol(char _sym){ symbol = _sym; }

};


