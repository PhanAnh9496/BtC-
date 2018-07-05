#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int M[n];
	int i=0;
	cout << "\nNhap so phan tu cua mang: "<<endl;
	while(i<n)
	{
		cout << "M[" <<i <<"]= ";
		cin >> M[i];
		if(i>0 && M[i] <= M[i-1])
		{
			continue;
		}
		i++;
	}
	i=0;
	cout << "\nSo phan tu cua mang: "<< endl;
	while(i<n)
	{
		cout << "M[" <<i <<"]= " << M[i] << "\t" ;	
		i++;
	}
	
	return 0;
}
