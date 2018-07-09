#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	int n1, n2, n3=0;
	int i1, i2, j1, j2, i3, j3;
	//Mang 1:
	cout << "Nhap so phan tu cua mang 1: ";
	cin >> n1;
	int M1[n1];
	for(int i1=0; i1<n1; i1++)
	{
		M1[i1] = rand()%100;
	}
	
	for(int i1=0; i1<n1-1; i1++)
	{	
		for(int j1=i1+1; j1<n1; j1++)
		{
			if(M1[i1]>M1[j1])
			{
				int tam1 = M1[i1];
				M1[i1] = M1[j1];
				M1[j1] = tam1;
			}			
		}
	}
	
	cout << "\nMang 1:" << endl;
	for(int i1=0; i1<n1; i1++)
	{
		cout << M1[i1] << "\t";
	}
	cout << endl;
	
	//Mang 2:
	cout << "\nNhap so phan tu cua mang 2: " ;
	cin >> n2;
	int M2[n2];
	for(int i2=0; i2<n2; i2++)
	{
		M2[i2] = rand()%100;
	}
	for(int i2=0; i2<n2-1; i2++)
	{	
		for(int j2=i2+1; j2<n2; j2++)
		{
			if(M2[i2]>M2[j2])
			{
				int tam2 = M2[i2];
				M2[i2] = M2[j2];
				M2[j2] = tam2;
			}			
		}
	}
	cout << "\nMang 2: " << endl;
	for(int i2=0; i2<n2; i2++)
	{
		cout << M2[i2] << "\t";
	}
	
	//Gop Mang
	int M3[n3];
	for(int i3 = 0; i3 < n1; i3++)
    {
        M3[n3] = M1[i3];
        n3++;
    }
    n3 = n1;
    for(int j3 = 0; j3 < n2; j3++)
    {
        M3[n3] = M2[j3];
        n3++;
    }
   
	cout << "\nMang sau khi tron: " << endl;
	for(int i3=0; i3<n3; i3++)
	{
		cout << M3[i3] << "\t";
	}
	
	
	
	return 0;
}
