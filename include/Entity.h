#ifndef _ENTITY
#define _ENTITY

#include <string>

class Position{
private:
    int x;
    int y;

public:
    int getX(){ return x; }
    int getY(){ return y; }

    void setPosition(int _x = 0, int _y = 0){ x = _x; y = _y; }

};

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



#endif