#include "prey.h"

prey::prey(int row, int col):creature(row, col){
    settype('O');
}

void prey::step(){
    cout << "step prey" << endl;
}

void prey::die(){
    cout << "die prey" << endl;
}

void prey::move(){
    cout << "move prey" << endl;
}

void prey::breed(){
    cout << "breed prey" << endl;
}
