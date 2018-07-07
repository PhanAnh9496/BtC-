#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	int row1, col1, row2, col2;
	int i, j, k;
	//Ma tran 1
	cout <<"Nhap so hang ma tran 1: ";
	cin >> row1;
	cout <<"Nhap so cot ma tran 1: ";
	cin >> col1;
	int M1[row1][col1];
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			M1[i][j] = rand()%100;
		}
	}
	cout << "\nMa tran 1: " << endl;
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cout << M1[i][j] << "\t";
		}
		cout << endl;
	}
	cout<<endl;
	//Ma tran 2
	cout <<"Nhap so hang ma tran 2: ";
	cin >> row2;
	cout <<"Nhap so cot ma tran 2: ";
	cin >> col2;
	int M2[row2][col2];
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			M2[i][j] = rand()%100;
		}
	}
	cout << "\nMa tran 2: " << endl;
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cout << M2[i][j] << "\t";
		}
		cout << endl;
	}
	//Nhan hai ma tran
	int M3[row1][col2];
	if(col1==row2)
	{
		for(int i=0; i<row1; i++)
		{
			for(int j=0; j<col2; j++)
			{
				M3[i][j] = 0;	
				for(int k=0; k<row2; k++)
				{
					M3[i][j] += M1[i][k] * M2[k][j];
				}
			
			}
		}
	}
	cout << "\nTich cua hai ma tran: " << endl;
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cout << M3[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
