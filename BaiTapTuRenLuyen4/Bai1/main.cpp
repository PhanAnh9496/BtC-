#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char** argv) {
	srand(time(NULL));
	int n;
	cout << "Nhap vao so phan tu: ";
	cin>> n;
	int M[n];
	for(int i=0; i<n; i++)
	{
		M[i] = rand()%100;
	}
	cout << "\nCac phan tu trong mang: "<< endl;
	for(int i=0; i<n; i++)
	{
		cout << M[i] << "\t";
	}
	cout << "\nDao nguoc mang: "<< endl;
	for(int i=n-1; i>=0 ; i--)
	{
		cout << M[i] << "\t";
	}
	
	return 0;
}
