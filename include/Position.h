#pragma once

class Position{
private:
    int x;
    int y;

public:
    int getX(){ return x; }
    int getY(){ return y; }

    void setPosition(int _x = 0, int _y = 0){ x = _x; y = _y; }

};