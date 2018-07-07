#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, j, row1, col1, row2, col2, row3, col3;
	//Ma tran 1
	cout << "Nhap so hang ma tran 1: ";
	cin >> row1;
	cout << "Nhap so cot ma tran 1: ";
	cin >> col1;
	int M1[row1][col1];
	cout << "\nNhap vao cac phan tu cua mang: " << endl;
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cout << "M1["<<i<<"]"<< "["<<j<<"]= ";
			cin >> M1[i][j]; 
		}
	}
	cout << "\nCac phan tu cua ma tran 1: " << endl;
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col1; j++)
		{
			cout << M1[i][j] << "\t"; 
		}
		cout << endl;
	}
	
	//Ma tran 2
	cout << "Nhap so hang ma tran 2: ";
	cin >> row2;
	cout << "Nhap so cot ma tran 2: ";
	cin >> col2;
	int M2[row2][col2];
	cout << "\nNhap vao cac phan tu cua ma tran 2: " << endl;
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cout << "M2["<<i<<"]"<< "["<<j<<"]= ";
			cin >> M2[i][j]; 
		}
	}
	cout << "\nCac phan tu cua ma tran 2: " << endl;
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<col2; j++)
		{
			cout << M2[i][j] << "\t"; 
		}
		cout << endl;
	}
	//Cong hai ma tran
	int M3[row1][col2];
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<col2; j++)
		{
			M3[i][j] = M1[i][j]+M2[i][j];
		}
	}
	cout << "\nTong cua 2 ma tran: "<< endl;
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
