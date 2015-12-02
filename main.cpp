


#include <iostream>
#include "creature.h"
#include "predator.h"
#include "prey.h"
#include "grid.h"
using namespace std;

int main(){

    grid world;
    world.initialize();
    world.print();

    char ans = cin.get();
    while(ans == '\n'){
        world.step();
        world.print();
        ans = cin.get();
    }


    cout << "--------------------END--------------------" << endl << endl;
    return 0;
}

