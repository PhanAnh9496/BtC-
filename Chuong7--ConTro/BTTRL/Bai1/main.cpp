#include <iostream>
using namespace std;
void NhapDaThuc(int *&a, int &n);
void XuatDaThuc(int *a, int &n);
int main(int argc, char** argv) {
	
	int *a;
	int n;
	NhapDaThuc(a,n);
	cout<<"\nXuat da thuc: "<< endl;
	XuatDaThuc(a,n);
	
	return 0;
}

void NhapDaThuc(int *&a, int &n)
{
	cout << "Nhap vao so bac cua da thuc: ";
	cin >> n;
	a = new int[n];
	for(int i=0; i<=n; i++)
	{
		cout << "He so thu " << i << " = ";
		cin >> a[i];
	}
}
void XuatDaThuc(int *a, int &n)
{
	for(int i=n; i>=0; i--)
	{
		if(i==n)
		{
			cout << "(" << a[0] << ")*(x^" << i << ") + "; 
		}
		else if(i==1)
		{
			cout << "(" << a[n-1] << ")*x + ";
		}
		else if(i==0)
		{
			cout << a[n] ;
		}
		else
		{
			cout << "(" << a[n-i] << ")*(x^" << i << ") + ";
		}
	}
	cout << endl;
}
