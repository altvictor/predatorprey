#ifndef GRID_H
#define GRID_H

#include <iostream>

#include "constants.h"
#include "creature.h"
#include "predator.h"
#include "prey.h"

using namespace std;

class grid{

public:
    grid();
    ~grid();

    void initialize();
    void step();
    void print();

private:
    creature* _world[ho_const::MAX][ho_const::MAX];

};

#endif // GRID_H
