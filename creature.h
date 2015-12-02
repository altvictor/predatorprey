#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
using namespace std;

class creature{

public:
    creature(int row, int col);

    virtual void step();
    virtual void die();

    void settime(int time);
    int gettime();
    void settype(char type);
    char gettype();

private:
    int _time;

    char _type;

    int _row;
    int _col;

};

#endif // CREATURE_H
