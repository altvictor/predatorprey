#include "grid.h"
using namespace std;

grid::grid(){
    srand(time(NULL));
}

grid::~grid(){
    cout << "deleting grid" << endl;
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(_world[i][j] != NULL){
                delete _world[i][j];
            }
        }
    }
}

void grid::initialize(){
    //nothing
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            _world[i][j] = NULL;
        }
    }
    //predator
    for(int i = 0; i < 5; i++){
        int r = rand() % MAX;
        int c = rand() % MAX;
        if(_world[r][c] == NULL){
            _world[r][c] = new predator(r, c);
        }
        else{
            i--;
        }
    }
    //prey
    for(int i = 0; i < 100; i++){
        int r = rand() % MAX;
        int c = rand() % MAX;
        if(_world[r][c] == NULL){
            _world[r][c] = new prey(r, c);
        }
        else{
            i--;
        }
    }
    return;
}

void grid::step(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(_world[i][j] == NULL){}//do nothing
            else if(_world[i][j]->gettype() == 'X'){
                _world[i][j]->step();
            }
        }
    }
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(_world[i][j] == NULL){}//do nothing
            else if(_world[i][j]->gettype() == 'O'){
                _world[i][j]->step();
            }
        }
    }
}

void grid::print(){
    cout << "-----------------------------GRID-----------------------------" << endl;
    for(int i = 0; i < MAX; i++){
        cout << "|";
        for(int j = 0; j < MAX; j++){
            if(_world[i][j] == NULL){
                cout << " . ";
            }
            else if(_world[i][j]->gettype() == 'X'){
                cout << " X ";
            }
            else if(_world[i][j]->gettype() == 'O'){
                cout << " O ";
            }
            else{
                cout << " ? ";
            }
        }
        cout << "|" << endl;
    }
    cout << "--------------------------------------------------------------" << endl;
    cout << endl;
    return;
}
