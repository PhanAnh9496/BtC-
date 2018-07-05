#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int row, col;
	cout << "Nhap so hang: ";
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
	cout << "\nCac phan tu trong mang: " << endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout << M[i][j] <<"\t";
		}
		cout << endl;
	}
	
	int MT[col][row];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			MT[j][i] = M[i][j];
		}
		cout << endl;
	}
	cout << "\nMa tran hoan vi: " << endl;
	for(int i=0; i<col; i++)
	{
		for(int j=0; j<row; j++)
		{
			cout << MT[i][j] <<"\t";
		}
		cout << endl;
	}
	return 0;
}
