#ifndef PREY_H
#define PREY_H

#include <iostream>
#include "creature.h"
using namespace std;

class prey: public creature{

public:

    prey(int row, int col);

    void step();
    void die();

    void move();
    void breed();

private:

};

#endif // PREY_H
