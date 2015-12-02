#ifndef PREDATOR_H
#define PREDATOR_H

#include <iostream>
#include "creature.h"
using namespace std;

class predator: public creature{

public:

    predator(int row, int col);

    void step();
    void die();

    void move();
    void breed();
    void starve();

private:

};

#endif // PREDATOR_H
