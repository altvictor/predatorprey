#ifndef PREY_H
#define PREY_H

#include <iostream>
#include "creature.h"
using namespace std;

class prey: public creature{

public:

    prey(int row, int col);

    void move(creature* world[][ho_const::MAX]);
    void breed(creature* world[][ho_const::MAX]);

private:

};

#endif // PREY_H
