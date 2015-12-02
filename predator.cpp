#include "predator.h"

predator::predator(int row, int col):creature(row, col){
    settype('X');
}

void predator::move(creature* world[][ho_const::MAX]){
    int row = getrow();
    int col = getcol();
//    cout << "predator (" << row << "," << col << ")  ";

    //eating
    int choice[5], count = 0;
    if(getturn() == true){
        if(row > 0 && world[row-1][col] != NULL && world[row-1][col]->gettype() == 'O'){
            choice[count] = 1;
            count++;
        }
        if(col > 0 && world[row][col-1] != NULL && world[row][col-1]->gettype() == 'O'){
            choice[count] = 2;
            count++;
        }
        if(col < ho_const::MAX-1 && world[row][col+1] != NULL && world[row][col+1]->gettype() == 'O'){
            choice[count] = 3;
            count++;
        }
        if(row < ho_const::MAX-1 && world[row+1][col] != NULL && world[row+1][col]->gettype() == 'O'){
            choice[count] = 4;
            count++;
        }
        srand(time(NULL));
        if(count != 0){
            int place = rand() % count;
            switch(choice[place]){
                case 1:
    //                cout << "eat up" << endl;
                    delete world[row-1][col];
                    world[row-1][col] = this;
                    setrow(row-1);
                    break;
                case 2:
    //                cout << "eat left" << endl;
                    delete world[row][col-1];
                    world[row][col-1] = this;
                    setcol(col-1);
                    break;
                case 3:
    //                cout << "eat right" << endl;
                    delete world[row][col+1];
                    world[row][col+1] = this;
                    setcol(col+1);
                    break;
                case 4:
    //                cout << "eat down" << endl;
                    delete world[row+1][col];
                    world[row+1][col] = this;
                    setrow(row+1);
                    break;
                default:
                    break;
            }
            world[row][col] = NULL;
            setturn(false);
        }
        else{
    //        cout << "stuck" << endl;
        }
    }
    //----------------------------------------------------------------
    //moving
    count = 0;
    if(getturn() == true){
        if(row > 0 && world[row-1][col] == NULL){
            choice[count] = 1;
            count++;
        }
        if(col > 0 && world[row][col-1] == NULL){
            choice[count] = 2;
            count++;
        }
        if(col < ho_const::MAX-1 && world[row][col+1] == NULL){
            choice[count] = 3;
            count++;
        }
        if(row < ho_const::MAX-1 && world[row+1][col] == NULL){
            choice[count] = 4;
            count++;
        }
        srand(time(NULL));
        if(count != 0){
            int place = rand() % count;
            switch(choice[place]){
                case 1:
    //                cout << "move up" << endl;
                    world[row-1][col] = this;
                    setrow(row-1);
                    break;
                case 2:
    //                cout << "move left" << endl;
                    world[row][col-1] = this;
                    setcol(col-1);
                    break;
                case 3:
    //                cout << "move right" << endl;
                    world[row][col+1] = this;
                    setcol(col+1);
                    break;
                case 4:
    //                cout << "move down" << endl;
                    world[row+1][col] = this;
                    setrow(row+1);
                    break;
                default:
                    break;
            }
            world[row][col] = NULL;
        }
        else{
    //        cout << "stuck" << endl;
        }
        setturn(false);
    }
}

void predator::breed(){
    cout << "breed predator" << endl;
}

void predator::starve(){
    cout << "starve predator" << endl;
}
