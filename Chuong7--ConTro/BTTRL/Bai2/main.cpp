#include <iostream>
#include <math.h>
using namespace std;
void NhapVecto(int *&M, int n);
void XuatVecto(int *M, int n);
double *TinhKhoangCach(int *&M1, int *&M2, int n);

int main(int argc, char** argv) {
    int n;
    cout << "Nhap so chieu cua 2 vector: ";
	cin >> n;
    int *M1, *M2;
    //vector<1>
    cout << "\nNhap chieu Vecto1: " << endl;
    NhapVecto(M1,n);
    cout << "\nVecto1: " << endl;
	XuatVecto(M1,n);
	//vector<2>
	cout << "\nNhap chieu Vecto2: " << endl;
	NhapVecto(M2,n);
    cout << "\nVecto2: " << endl;
	XuatVecto(M2,n);
	double *KqKhoangCach = TinhKhoangCach(M1,M2,n);
	cout << "\n\nKhoang Cach giua 2 vecto: " << *KqKhoangCach;
	return 0;
}


void NhapVecto(int *&M, int n)
{
    M = new int[n];
    for(int i=0; i<n; i++)
	{
		cout << "Phan tu thu " << i << ": ";
		cin >> M[i];
	}
}
void XuatVecto(int *M, int n)
{
    cout << "(";
    for(int i=0; i<n; i++)
	{
		if(i==n-1)
		{
			cout << M[i];
		}
		else
		{
			cout << M[i] << "\t";
		}
	}
	cout << ")";
}
double *TinhKhoangCach(int *&M1, int *&M2, int n)
{
    double *Kq = new double[n], sum;
    for(int i=0; i<n; i++)
	{
		double Distance = pow(M2[i]-M1[i],2);
		sum += Distance;
		*Kq = (double)sqrt(sum);
	}
	return Kq;
}

