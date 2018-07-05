#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cout<< "Nhap so phan tu: ";
	cin >> n;
	int M[n];
	for(int i=0; i<n; i++)
	{
		M[i] = rand()%100;
	}
	cout << "\nPhan tu trong mang: " << endl;
	for(int i=0; i<n; i++)
	{
		cout << M[i] << "\t";
	}
	
	cout << "\nSo phan tu chan: " << endl;
	for(int i=0; i<n; i++)
	{
		if(M[i]%2==0 && M[i]!=0)
		{
			cout << M[i] << "\t";
		}
	}
	cout << "\nSo phan tu le: " << endl;
	for(int i=0; i<n; i++)
	{
		if(M[i]%2!=0 && M[i]!=0)
		{
			cout << M[i] << "\t";
		}
	}
	
	cout << "\nCac so nguyen to trong mang: " << endl;
	
	for(int i=0; i<n; i++)
	{	
		int dem=0;
		for(int j=1; j<=M[i]; j++)
		{
			if(M[i]%j==0)
			{
				dem++;
			}
		}
		if(dem == 2)
		{
			cout << M[i] << "\t";
		}
	}

	return 0;
}
