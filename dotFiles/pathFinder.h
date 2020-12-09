#pragma once
#include <iostream>
#include "position.h"
#include "cell.h"
using namespace std;

class pathFinder {
    private: 
        cell **map;
        position currentPosition;
        void display();
        bool search(int row, int column);
    public:
        void search();
        pathFinder(cell **pmap, int initialColumn, int initialRow);
};
