#include "cell.h"
#include "pathFinder.h"
#include "position.h"
#include <iostream>
using namespace std;

int main() {
    


	cell cells[5][6];


	for (int i = 0; i < 5; i++) {
	
		for (int f = 0; f < 6; f++) {
			if (i == 0) {

				cells[i][f].setCellType(0);

			}
			else if (i == 1 && f == 5) {

				cells[i][f].setCellType(2)

			}

			else cells[i][f].setCellType(1);

		}
	
	}

	cell** Pmap = cells;

	pathFinder path(Pmap, 6, 5);

	path.search();
	path.display();






}
