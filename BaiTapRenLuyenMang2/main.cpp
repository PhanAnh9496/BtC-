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
	cout << "\nCac phan tu trong mang: " << endl;
	for(int i=0; i<n; i++)
	{
		cout << M[i] << "\t";
	}
	
	
	cout << "\nPhan tu lon nhat trong mang: " << endl;
	int max = M[0];
	for(int i=0; i<n; i++)
	{		
		if(M[i] > max)
		{	
			max = M[i];
		}
		
	}
	cout << max << "\t";
	
	cout << "\nPhan tu nho nhat trong mang: " << endl;
	int min = M[0];
	for(int i=0; i<n; i++)
	{		
		if(M[i] < min)
		{	
			min = M[i];
		}
		
	}
	cout << min << "\t";
	
	cout << "\nTong cac phan tu trong mang: " << endl;
	int sum = 0;
	for(int i=0; i<n; i++)
	{		
		sum += M[i];
	}
	cout << sum << "\t";
	return 0;
}
