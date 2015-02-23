#include"Find.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>


Find::Find(){
}
Find::~Find(){
}

Find::Find(vector< vector<int> > P1, vector< vector<int> > D){
	

}

int Find::floyd(vector< vector<int> > array, int size)
{
	/* initialize array2D[][] to D[][] */
	
	vector< vector<int> > P;
	int i, j, k, path, mid;
	int m = 0;
	int S[m];

	D.resize(size);
	for(int i = 0; i< size; i++)
		D[i].resize(size);

	P.resize(size);
	for(int i = 0; i< size; i++)
		P[i].resize(size);

	P1.resize(size);
	for(int i = 0; i< size; i++)
		P1[i].resize(size);

	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){

			D[i][j] = array[i][j];
			
		}
	}

	/* initialize P[][], which is used for counting states that
		make a change */
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){

			P[i][j] = 0;
		}
	}

	/* i is the row of the array, and j is the column of the array*/
	for(k = 0; k < size; k++){
		
		for(i = 0; i < size; i++){
			
			for(j = 0; j < size; j++){
				
				if(D[i][j] < D[i][k] + D[k][j]){
					D[i][j] = D[i][j];										
				}else{
					D[i][j] = D[i][k] + D[k][j];
					P[i][j] = k;

				}
			}//end_of_for
		}//end_of_for
	
	}//end_of_for

	path = D[0][size - 1];

	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			P1[i][j] = P[i][j];
		
		}
	}

	
	return path;

}

void Find::path(int q, int r)
{	
	
	if(D[q][r] != 9999999){

		if(P1[q][r] != 0){		
			path(q, P1[q][r]);

			cout<<"v"<<P1[q][r]<<": ";
			if(P1[q][r] == 0){
				cout<<"New York City"<<endl;
			}
			if(P1[q][r] == 0){
				cout<<"New York City"<<endl;
			}
			if(P1[q][r] == 0){
				cout<<"New York City"<<endl;
			}
			if(P1[q][r] == 1){
				cout<<"Albany"<<endl;
			}
			if(P1[q][r] == 2){
				cout<<"Montreal"<<endl;
			}
			if(P1[q][r] == 3){
				cout<<"Allentown"<<endl;
			}
			if(P1[q][r] == 4){
				cout<<"Scranton"<<endl;
			}
			if(P1[q][r] == 5){
				cout<<"Binghamton"<<endl;
			}
			if(P1[q][r] == 6){
				cout<<"Syracuse"<<endl;
			}
			if(P1[q][r] == 7){
				cout<<"Kinston"<<endl;
			}
			if(P1[q][r] == 8){
				cout<<"Rochester"<<endl;
			}
			if(P1[q][r] == 9){
				cout<<"Buffalo"<<endl;
			}
			if(P1[q][r] == 10){
				cout<<"Tronto"<<endl;
			}
			path(P1[q][r], r);
			return;
		}else return;

	}else return;

	




}
