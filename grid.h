#ifndef GRID_H
#define GRID_H

#include <iostream>
#include <stdlib.h>
#include <ctime>

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

    static const int MAX = 20;
private:
    creature* _world[MAX][MAX];

};

#endif // GRID_H
