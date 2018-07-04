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
	cout << "Cac phan tu trong mang: " << endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
	
	if(row == col)
	{	
		cout << "Duong cheo chinh: " << endl;
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<col; j++)
			{
				if(i == j)
				{
					cout << M[i][j] << "\t";	
				}		
			}
			cout << endl;
		}
		
		cout << "Duong cheo phu: " << endl;
		for(int i=0; i<row; i++)
		{
			cout << M[i][row-i-1];
			cout << endl;
		}
	}
	
	cout << "Nhap mot hang ban muon chon: ";
	int r;
	cin >> r;
	if (r < row)
	{
		for (int j=0; j<col; j++)
		{
			cout << M[r][j] << "\t";
		}
	}
	else
	{
		cout << "Nhap sai so hang ban can tim";
	}
	
	cout << "\nNhap mot cot ban muon chon: ";
	int c;
	cin >> c;
	if (c < col)
	{
		for (int i=0; i<row; i++)
		{
			cout << M[i][c] << endl;
		}
	}
	else
	{
		cout << "Nhap sai so cot ban can tim";
	}
	return 0;
}
