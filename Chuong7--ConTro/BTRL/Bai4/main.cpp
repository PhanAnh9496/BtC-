#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMatrix(int **&M, int n);
void XuatMatrix(int **M, int n);
int **CongHaiMatrix(int **&M1, int **&M2, int n);
int main(int argc, char** argv) {
	int **M1, **M2;
	int n;
	cout << "Nhap vao cap cua Matrix: ";
	cin >> n;
	srand(time(NULL));
	NhapMatrix(M1,n);
	cout << "\nMa tran 1: " << endl;
	XuatMatrix(M1,n);
	NhapMatrix(M2,n);
	cout << "\nMa tran 2: " << endl;
	XuatMatrix(M2,n);
	int **M3 = CongHaiMatrix(M1,M2,n);
	cout << "\nCong 2 ma tran: " << endl;
	XuatMatrix(M3,n);
	return 0;
}
void NhapMatrix(int **&M, int n)
{
	M = new int*[n];
	for(int i=0; i<n; i++)
	{
		M[i] = new int[n];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			M[i][j] = rand()%101;
		}
	}
}
void XuatMatrix(int **M, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << M[i][j] << "\t";
		}
		cout << endl;
	}
}
int **CongHaiMatrix(int **&M1, int **&M2, int n)
{
	int **M3 = new int*[n];
	for(int i=0; i<n; i++)
	{
		M3[i] = new int[n];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			M3[i][j] = M1[i][j] + M2[i][j];
		}
	}
	return M3;
}











