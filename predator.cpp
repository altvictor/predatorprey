#include "predator.h"

predator::predator(int row, int col):creature(row, col, 'X'){

}

void predator::move(creature* world[][ho_const::MAX]){
    int place = findother(world, 'O');
    if(place != 0){
        kill(world, place);
        _starve = 0;
    }
    else{
        place = findblank(world);
        if(place != 0){
            moveto(world, place);
        }
        _starve++;
    }
    return;
}

void predator::breed(creature* world[][ho_const::MAX]){
    int row = getrow();
    int col = getcol();
    int place = findblank(world);
    if(place > 0 && gettime() > 7 && gettime() % 8 == 0){
        switch(place){
        case 1:
            world[row-1][col] = new predator(row-1, col);
            break;
        case 2:
            world[row][col-1] = new predator(row, col-1);
            break;
        case 3:
            world[row][col+1] = new predator(row, col+1);
            break;
        case 4:
            world[row+1][col] = new predator(row+1, col);
            break;
        default:
            break;
        }
    }
    return;
}

void predator::starve(creature* world[][ho_const::MAX]){
    if(_starve >= 3){
        kill(world, 0);
    }
    return;
}
