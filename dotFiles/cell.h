#pragma once
#include <iostream>
#include <vector>
using namespace std;

class cell {
    private:
        int cellType;

    public:
        void setCellType(int aCellType);
        int getCellType();
        cell(int x = 0);
};