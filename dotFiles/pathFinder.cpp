#include "pathfinder.h"
#include <iostream>
using namespace std; 

void pathfinder::display() {
   
   cout << "(" << currentPosition.getRow() << ",";
   cout << currentPosition.getColumn() << ")";
}

bool pathfinder::search(int row, int column) {
   
   if (row < 0 || column < 0 || row >= 5 || column >= 6) {
      
       return false;
   }
   else if (map[row][column].getCellType() == 1) {
      
       return false;
   }
   else if (map[row][column].getCellType() == 3) {
      
       return false;
   }
  
   else if (map[row][column].getCellType() == 2) {
       currentPosition.setRow(row);
       currentPosition.setColumn(column);
       display(); 
       return true;
   }
   
   map[row][column].setCellType(3);
  
   if (search(row - 1, column)) {
       cout << " -> ";
       
       currentPosition.setRow(row);
       currentPosition.setColumn(column);
       display(); 
       return true;
   }
  
   if (search(row + 1, column)) {
       cout << " -> ";
       currentPosition.setRow(row);
       currentPosition.setColumn(column);
       display(); 
       return true;
   }
 
   if (search(row, column - 1)) {
       cout << " -> ";
       currentPosition.setRow(row);
       currentPosition.setColumn(column);
       display();
       return true;
   }
   
   if (search(row, column + 1)) {
       cout << " -> ";
      
       currentPosition.setRow(row);
       currentPosition.setColumn(column);
       display(); 
       return true;
   }
   
   map[row][column].setCellType(0);
   return false;
}

void pathfinder::search() {
   
   for (int i = 0; i < 5; i++) {
       for (int j = 0; j < 6; j++) {
           cout << map[i][j].getCellType() << " ";
       }
       cout << "\n";
   }
   
   cout << "Initial position row=" << currentPosition.getRow();
   cout << ", column=" << currentPosition.getColumn() << "\nSolution:\n";

   search(currentPosition.getRow(), currentPosition.getColumn());
}

pathfinder::pathfinder(cell** pmap, int initialColumn, int initialRow) {
   currentPosition.setColumn(initialColumn);
   currentPosition.setRow(initialRow);
   map = pmap;
}
