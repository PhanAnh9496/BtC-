#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
void NhapMatrix(int **&M, int n);
void XuatMatrix(int **M, int n);
int MaxMatrix(int **&M, int n);
int main(int argc, char** argv) {
	
	int **M;
	int n;
	cout << "Nhap vao so phan tu: ";
	cin >> n;
	NhapMatrix(M,n);
	cout << "Mang da nhap: " << endl;
	XuatMatrix(M,n);
	int maxMatrix = MaxMatrix(M,n);
	cout << "Gia tri lon nhat cua mang: " << maxMatrix << endl;
	return 0;
}


void NhapMatrix(int **&M, int n)
{	
	srand(time(NULL));
	M = new int*[n];
	for(int i=0; i<n; i++)
	{
		M[i]= new int[n];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			M[i][j]=-50+ rand()%151;
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
		cout<< endl;
	}
}
int MaxMatrix(int **&M, int n)
{
	int max = M[0][0];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(max < M[i][j])
			{
				max = M[i][j];
			}
		}
	}
	return max;
}






