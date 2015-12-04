#ifndef PREDATOR_H
#define PREDATOR_H

#include <iostream>
#include "creature.h"
using namespace std;

class predator: public creature{

public:

    predator(int row, int col);

    void move(creature* world[][ho_const::MAX]);
    void breed(creature* world[][ho_const::MAX]);
    void starve(creature* world[][ho_const::MAX]);

private:
    int _starve;
};

#endif // PREDATOR_H
