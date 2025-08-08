#pragma once

class Position{
private:
    int x;
    int y;

public:
    int getX(){ return x; }
    int getY(){ return y; }

    void setPosition(int dx = 0, int dy = 0){ x = dx; y = dy; }

};