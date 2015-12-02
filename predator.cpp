#include "predator.h"

predator::predator(int row, int col):creature(row, col){
    settype('X');
}

void predator::step(creature* world[][ho_const::MAX]){
    cout << "step predator" << endl;
}

void predator::die(){
    cout << "die predator" << endl;
}

void predator::move(){
    cout << "move predator" << endl;
}

void predator::breed(){
    cout << "breed predator" << endl;
}

void predator::starve(){
    cout << "starve predator" << endl;
}
