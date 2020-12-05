#include "position.h"

void position::setColumn(int aColumn) {
    column = aColumn;
}

void position::setRow(int aRow) {
    row = aRow;
}

int position::getColumn() {
    return column;
}

int position::getRow() {
    return row;
}

position::position() {
    row = 0;
    column = 0;
}

position::position(int aRow, int aColumn) {
    row = aRow;
    column = aColumn;
}