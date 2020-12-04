#include <iostream>
#include <vector>
using namespace std;

class position {
    private:
        int column;
        int row;

    public:
        void setColumn(int aColumn);
        void setRow(int aRow);
        int getColumn();
        int getRow();
        position();
        position(int aRow, int aColumn);
};