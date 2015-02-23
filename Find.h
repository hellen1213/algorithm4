#include<fstream>
#include<sstream>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include <vector>
using namespace std;
class Find{
public:
Find();
~Find();
Find(vector< vector<int> > P1, vector< vector<int> > D);
int floyd(vector< vector<int> > array, int size);
void path(int q, int r);
vector< vector<int> > P1;
vector< vector<int> > D;
private:
char testString[256];
stringstream ss;
int arg1;

};
