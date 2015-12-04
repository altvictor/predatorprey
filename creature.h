#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>

#include "constants.h"
#include "../../../includes/random/randoms.h"
class grid;
class spots;

using namespace std;

class creature{

public:
    creature(int row, int col, char type);

    virtual void move(creature* world[][ho_const::MAX]);
    virtual void breed(creature* world[][ho_const::MAX]);
    virtual void starve(creature* world[][ho_const::MAX]);

    int findblank(creature* world[][ho_const::MAX]);
    int findother(creature* world[][ho_const::MAX], char type);

    void moveto(creature* world[][ho_const::MAX], int place);
    void kill(creature* world[][ho_const::MAX], int place);

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
