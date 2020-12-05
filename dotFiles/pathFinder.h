#include <iostream>
#include "position.h"
#include "cell.h"
using namespace std;

class pathFinder {
    private: 
        cell *map;
        position currentPosition;
        void display();
    public:
        void search();
        pathFinder(cell *pmap, int initialColumn, int initialRow);
};