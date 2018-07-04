#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	int n;
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	int M[n];
	for(int i=0; i<n; i++)
	{
		M[i] = rand()%100;
	}
	int i=0;
	cout << "Cac phan tu cua mang: " << endl;
	do
	{	
		cout << M[i] << "\t";
		i++; 
	}
	while(i<n);
	
	//xap sep mang
	i=0;
	do
	{
		int j=i+1;
		do
		{
			if(M[i]<M[j])
			{
				int tam = M[i];
				M[i] = M[j];
				M[j] = tam;
			}
			j++;
		}
		while(j<n);
		i++;
	}
	while(i<n-1);
	// in mang 
	cout << "\nMang duoc sap theo thu tu tang dan: " << endl;
	i=0;
	do
	{
		cout << M[i] << "\t";
		i++;
	}
	while(i<n);
	
	return 0;
}
