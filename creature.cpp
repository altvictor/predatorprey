#include "creature.h"

creature::creature(int row, int col){
    _row = row;
    _col = col;
    _turn = true;
}

void creature::move(creature* world[][ho_const::MAX]){
    cout << "step creature" << endl;
}

void creature::breed(){
    cout << "breed creature" << endl;
}

void creature::starve(){
    cout << "die creature" << endl;
}
//-----------------------------------------------------------
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

void creature::setturn(bool turn){
    _turn = turn;
}

bool creature::getturn(){
    return _turn;
}

//----------------------------------------------------------
void creature::setrow(int row){
    _row = row;
}

int creature::getrow(){
    return _row;
}

void creature::setcol(int col){
    _col = col;
}

int creature::getcol(){
    return _col;
}
