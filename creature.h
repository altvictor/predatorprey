#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "constants.h"
class grid;
using namespace std;

class creature{

public:
    creature(int row, int col);

    virtual void move(creature* world[][ho_const::MAX]);
    virtual void breed();
    virtual void starve();

    void settime(int time);
    int gettime();
    void settype(char type);
    char gettype();
    void setturn(bool turn);
    bool getturn();

    void setrow(int row);
    int getrow();
    void setcol(int col);
    int getcol();

private:
    int _time;

    char _type;

    bool _turn;

    int _row;
    int _col;

};

#endif // CREATURE_H
