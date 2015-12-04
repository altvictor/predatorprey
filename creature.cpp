#include "creature.h"

creature::creature(int row, int col, char type){
    _time = 0;
    _row = row;
    _col = col;
    _turn = true;
    _type = type;
}

void creature::move(creature* world[][ho_const::MAX]){
    cout << "step creature" << endl;
}

void creature::breed(creature* world[][ho_const::MAX]){
    cout << "breed creature" << endl;
}

void creature::starve(creature* world[][ho_const::MAX]){
    cout << "die creature" << endl;
}
//-----------------------------------------------------------
int creature::findblank(creature* world[][ho_const::MAX]){
    int choice[5], count = 0;
    if(_row > 0 && world[_row-1][_col] == NULL){
        choice[count] = 1;
        count++;
    }
    if(_col > 0 && world[_row][_col-1] == NULL){
        choice[count] = 2;
        count++;
    }
    if(_col < ho_const::MAX-1 && world[_row][_col+1] == NULL){
        choice[count] = 3;
        count++;
    }
    if(_row < ho_const::MAX-1 && world[_row+1][_col] == NULL){
        choice[count] = 4;
        count++;
    }
    choice[count] = '\0';
    randoms ran;
    if(count == 1){
        return choice[0];
    }
    else if(count != 0){
        return choice[ran(0, count-1)];
    }
    else{
        return 0;
    }
}

int creature::findother(creature* world[][ho_const::MAX], char type){
    int choice[5], count = 0;
    if(_row > 0 && world[_row-1][_col] == NULL){}
    else if(_row > 0 && world[_row-1][_col]->gettype() == type){
        choice[count] = 1;
        count++;
    }
    if(_col > 0 && world[_row][_col-1] == NULL){}
    else if(_col > 0 && world[_row][_col-1]->gettype() == type){
        choice[count] = 2;
        count++;
    }
    if(_col < ho_const::MAX-1 && world[_row][_col+1] == NULL){}
    else if(_col < ho_const::MAX-1 && world[_row][_col+1]->gettype() == type){
        choice[count] = 3;
        count++;
    }
    if(_row < ho_const::MAX-1 && world[_row+1][_col] == NULL){}
    else if(_row < ho_const::MAX-1 && world[_row+1][_col]->gettype() == type){
        choice[count] = 4;
        count++;
    }
    choice[count] = '\0';
    randoms ran;
    if(count == 1){
        return choice[0];
    }
    else if(count != 0){
        return choice[ran(0, count-1)];
    }
    else{
        return 0;
    }
}

void creature::moveto(creature* world[][ho_const::MAX], int place){
    if(_turn == true && place > 0){
        switch(place){
            case 1:
                world[_row-1][_col] = world[_row][_col];
                world[_row][_col] = NULL;
                _row--;
                break;
            case 2:
                world[_row][_col-1] = world[_row][_col];
                world[_row][_col] = NULL;
                _col--;
                break;
            case 3:
                world[_row][_col+1] = world[_row][_col];
                world[_row][_col] = NULL;
                _col++;
                break;
            case 4:
                world[_row+1][_col] = world[_row][_col];
                world[_row][_col] = NULL;
                _row++;
                break;
            default:
                break;
        }
    }
    _turn = false;
    return;
}

void creature::kill(creature* world[][ho_const::MAX], int place){
    switch(place){
        case 0:
            delete world[_row][_col];
            break;
        case 1:
            delete world[_row-1][_col];
            break;
        case 2:
            delete world[_row][_col-1];
            break;
        case 3:
            delete world[_row][_col+1];
            break;
        case 4:
            delete world[_row+1][_col];
            break;
        default:
            break;
    }
    return;
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
