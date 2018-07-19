#include <iostream>
#include <math.h>
using namespace std;

void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
int TimK(int M[], int n, int k);
void SapXepMang(int M[], int n);

int main(int argc, char** argv) {
	int n;
	int k;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	int M[n];
	NhapMang(M,n);
	cout << "So phan tu mang: " << endl;
	XuatMang(M,n);
	cout << "\nNhap phan tu can tim: ";
	cin >> k;
	int kq = TimK(M,n,k);
	if(kq == -1)
	{
		cout << "\nKhong tim thay " << k << " trong mang";
	}
	else 
	{
		cout << "\nSo can tim: " << k << " o vi tri thu " << kq;
	}
	SapXepMang(M,n);
	cout << "\nMang sap xep tang dan: " << endl;
	XuatMang(M,n);
	return 0;
}

void NhapMang(int M[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << "M["<<i<<"] = ";
		cin >> M[i];
	}
}
void XuatMang(int M[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << M[i] << "\t";
	}
}
int TimK(int M[], int n, int k)
{
	for(int i=0; i<n; i++)
	{
		if(M[i] == k)
		{ 
			return i;
		}
	}
	return -1;
}
void SapXepMang(int M[], int n)
{
	for(int i=0; i<n; i++)
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
}


