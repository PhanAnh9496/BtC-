#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int M[n];
	cout << "Nhap cac phan tu cua mang: " << endl;
	for(int i=0; i<n; i++)
	{
		M[i] = rand()%100;
	}
	cout << "Mang sau khi nhap ngau nhien: " << endl;
	for(int i=0; i<n; i++)
	{
		cout << "M[" << i << "]= " << M[i] << endl;
	}
	
	for(int i=0; i<n-1; i++)
	{	
		for(int j=i+1; j<n; j++)
		{
			if(M[i]>M[j])
			{
				int tam = M[i];
				M[i] = M[j];
				M[j] = tam;
			}			
		}
	}
	cout << "\nMang sau khi sap xep: ";
	for(int i=0; i<n; i++)
	{
		cout << "M[" << i << "]= " << M[i] << endl;
	}
	return 0;
}
