#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int row, col;
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;
	int M[row][col];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{	
			M[i][j] = rand()%100;
		}
	}
	cout << "Mang sau khi nhap: " << endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{	
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
