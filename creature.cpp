#include "creature.h"

creature::creature(int row, int col){
    _row = row;
    _col = col;
}

void creature::step(){
    cout << "step creature" << endl;
}

void creature::die(){
    cout << "die creature" << endl;
}

void creature::settime(int time){
    _time = time;
    return;
}

int creature::gettime(){
    return _time;
}

void creature::settype(char type){
    _type = type;
}

char creature::gettype(){
    return _type;
}
