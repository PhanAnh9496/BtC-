#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int n, i=0;
	cout << "Nhap so phan tu: ";
	cin>> n;
	int M[n];
	//Nhap mang
	for(int i=0; i<n; i++)
	{
		M[i] = rand()%100;
	}
	cout << "\nCac phan tu cua mang: " << endl;
	for(int i=0; i<n; i++)
	{
		cout << M[i] << "\t";
	}
	//So nguyen to
	cout << "\nSo nguyen to trong mang: " << endl;
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
		if(dem==2)
		{
			cout << M[i] << "\t";	
		}	
	}
	
	cout << "\nCac so chan trong mang: " << endl;
	for(int m=0; m<n; m++)
	{	
		if(M[m]%2==0)
		{		
			for(int k=m+1; k<n; k++)
			{
				if(M[m]>M[k] && M[m]%2==0 && M[k]%2==0)
				{
					int tam = M[m];
					M[m] = M[k];
					M[k] = tam;
				}			
			}
			cout << M[m] << "\t";
		}
	}
	return 0;
}
