#include "prey.h"

prey::prey(int row, int col):creature(row, col, 'O'){

}

void prey::move(creature* world[][ho_const::MAX]){
    int place = findblank(world);
    if(place != 0){
        moveto(world, place);
    }
    return;
}

void prey::breed(creature* world[][ho_const::MAX]){
    int row = getrow();
    int col = getcol();
    int place = findblank(world);
    if(place > 0 && gettime() > 2 && gettime() % 3 == 0){
        switch(place){
        case 1:
            world[row-1][col] = new prey(row-1, col);
            break;
        case 2:
            world[row][col-1] = new prey(row, col-1);
            break;
        case 3:
            world[row][col+1] = new prey(row, col+1);
            break;
        case 4:
            world[row+1][col] = new prey(row+1, col);
            break;
        default:
            break;
        }
    }
    return;
}
