#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include "constants.h"
class grid;
using namespace std;

class creature{

public:
    creature(int row, int col);

    virtual void step(creature* world[][ho_const::MAX]);
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
