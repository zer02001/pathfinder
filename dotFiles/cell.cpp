#include "cell.h"

int cell::getCellType() {
    return cellType;
}

void cell::setCellType(int aCellType) {
    cellType = aCellType;
}

cell::cell(int x = 0) {
    cellType = x;
}