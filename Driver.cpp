#include "Find.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string.h>

using std::vector;
using namespace std;

#define HEIGHT 11
#define WIDTH 11

int main()
{
	Find test;
	
	/* get the ArrayList */
	vector< vector<int> > array2D;
	string name[11];
	int i, j;	//i & j are the pointer to the HEIGHT and WIDTH
	
	/* initialize name*/
	name[0] = "New York City";
	name[1] = "Albany";
	name[2] = "Montreal";
	name[3] = "ALlentown";
	name[4] = "Scranton";
	name[5] = "Binghamton";
	name[6] = "Syracause";
	name[7] = "Kingston";
	name[8] = "Rochester";
	name[9] = "Buffalo";
	name[10] = "Toronto";	

	/* set up sizes to array2D */
	array2D.resize(HEIGHT);
	for(int i = 0; i< HEIGHT; i++)
		array2D[i].resize(WIDTH);

	/* put values into array2D */
	array2D[0][0] = 9999999;
	array2D[0][1] = 140;
	array2D[0][2] = 9999999;
	array2D[0][3] = 70;
	array2D[0][4] = 100;
	array2D[0][5] = 180;
	array2D[0][6] = 9999999;
	array2D[0][7] = 9999999;
	array2D[0][8] = 9999999;
	array2D[0][9] = 9999999;
	array2D[0][10] = 9999999;
	
	array2D[1][0] = 140;
	array2D[1][1] = 9999999;
	array2D[1][2] = 130;
	array2D[1][3] = 9999999;
	array2D[1][4] = 9999999;
	array2D[1][5] = 9999999;
	array2D[1][6] = 100;
	array2D[1][7] = 9999999;
	array2D[1][8] = 9999999;
	array2D[1][9] = 9999999;
	array2D[1][10] = 9999999;

	array2D[2][0] = 9999999;
	array2D[2][1] = 130;
	array2D[2][2] = 9999999;
	array2D[2][3] = 9999999;
	array2D[2][4] = 9999999;
	array2D[2][5] = 9999999;
	array2D[2][6] = 9999999;
	array2D[2][7] = 160;
	array2D[2][8] = 9999999;
	array2D[2][9] = 9999999;
	array2D[2][10] = 9999999;

	array2D[3][0] = 70;
	array2D[3][1] = 9999999;
	array2D[3][2] = 9999999;
	array2D[3][3] = 9999999;
	array2D[3][4] = 65;
	array2D[3][5] = 9999999;
	array2D[3][6] = 9999999;
	array2D[3][7] = 9999999;
	array2D[3][8] = 9999999;
	array2D[3][9] = 9999999;
	array2D[3][10] = 9999999;

	array2D[4][0] = 100;
	array2D[4][1] = 9999999;
	array2D[4][2] = 9999999;
	array2D[4][3] = 65;
	array2D[4][4] = 9999999;
	array2D[4][5] = 60;
	array2D[4][6] = 9999999;
	array2D[4][7] = 9999999;
	array2D[4][8] = 9999999;
	array2D[4][9] = 9999999;
	array2D[4][10] = 9999999;

	array2D[5][0] = 180;
	array2D[5][1] = 9999999;
	array2D[5][2] = 9999999;
	array2D[5][3] = 9999999;
	array2D[5][4] = 60;
	array2D[5][5] = 9999999;
	array2D[5][6] = 70;
	array2D[5][7] = 9999999;
	array2D[5][8] = 9999999;
	array2D[5][9] = 9999999;
	array2D[5][10] = 9999999;

	array2D[6][0] = 9999999;
	array2D[6][1] = 100;
	array2D[6][2] = 9999999;
	array2D[6][3] = 9999999;
	array2D[6][4] = 9999999;
	array2D[6][5] = 70;
	array2D[6][6] = 9999999;
	array2D[6][7] = 65;
	array2D[6][8] = 70;
	array2D[6][9] = 9999999;
	array2D[6][10] = 9999999;

	array2D[7][0] = 9999999;
	array2D[7][1] = 9999999;
	array2D[7][2] = 160;
	array2D[7][3] = 9999999;
	array2D[7][4] = 9999999;
	array2D[7][5] = 9999999;
	array2D[7][6] = 65;
	array2D[7][7] = 9999999;
	array2D[7][8] = 9999999;
	array2D[7][9] = 9999999;
	array2D[7][10] = 180;

	array2D[8][0] = 9999999;
	array2D[8][1] = 9999999;
	array2D[8][2] = 9999999;
	array2D[8][3] = 9999999;
	array2D[8][4] = 9999999;
	array2D[8][5] = 9999999;
	array2D[8][6] = 70;
	array2D[8][7] = 9999999;
	array2D[8][8] = 9999999;
	array2D[8][9] = 60;
	array2D[8][10] = 9999999;

	array2D[9][0] = 9999999;
	array2D[9][1] = 9999999;
	array2D[9][2] = 9999999;
	array2D[9][3] = 9999999;
	array2D[9][4] = 9999999;
	array2D[9][5] = 9999999;
	array2D[9][6] = 9999999;
	array2D[9][7] = 9999999;
	array2D[9][8] = 60;
	array2D[9][9] = 9999999;
	array2D[9][10] = 100;

	array2D[10][0] = 9999999;
	array2D[10][1] = 9999999;
	array2D[10][2] = 9999999;
	array2D[10][3] = 9999999;
	array2D[10][4] = 9999999;
	array2D[10][5] = 9999999;
	array2D[10][6] = 9999999;
	array2D[10][7] = 180;
	array2D[10][8] = 9999999;
	array2D[10][9] = 100;
	array2D[10][10] = 9999999;

/*
	for(i = 0; i < 11; i++){

		for(j = 0; j < 11; j++){

			if(array2D[i][j] != 9999999){
				cout << "array2D[" <<i<<"]["<<j<<"]= "<< array2D[i][j]
						<<endl;
			}
		}
	}

*/




cout<<"The shortest path from NYC to Toronto is: "<<test.floyd(array2D, HEIGHT)<<endl;

cout<<"The route is: "<<endl;
cout<<"New York City"<<endl;
test.path(0,10);
cout<<"Toronto"<<endl;










return 0;
}
