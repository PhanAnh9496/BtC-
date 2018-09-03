#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void NhapMang(int *&a, int n);
void XuatMang(int *a, int n);
void SapXepGiam(int *&a, int n);
void Swap(int *&pa, int *&pb);
int main(int argc, char** argv) {
	int *a;
	int n;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	NhapMang(a,n);
	cout << "Mang nhap: " << endl; 
	XuatMang(a,n);
	SapXepGiam(a,n);
	cout << "\nSap xep mang: " << endl; 
	XuatMang(a,n);
	return 0;
}

void NhapMang(int *&a, int n)
{
	srand(time(NULL));
	a = new int[n];
	for(int i=0; i<n; i++)
	{
		a[i]=rand()%100;
	}
}
void XuatMang(int *a, int n)
{
	for(int i=0; i<n; i++)
	{
		cout << a[i] << "\t";
	}
}
void Swap(int *&pa, int *&pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void SapXepGiam(int *&a, int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] < a[j])
			{
				int *a1=(a+i);
				int *a2=(a+j);
				Swap(a1, a2);
			}		
		}
	}
}
