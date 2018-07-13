#include <iostream>
using namespace std;

int TongHaiSo(int a, int b);
void XuatDulieu(int x);
void Output();
int main(int argc, char** argv) {
	
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int kq = TongHaiSo(a,b);
	cout << "Tong hai so: " << kq;
	int kq2 = TongHaiSo(9,6);
	cout << "\nKq 2: " << kq2 << endl;
	int kq3 = TongHaiSo(5,4);
	XuatDulieu(kq3);
	cout << "Ham goi ham: ";
	Output();
	return 0;
}

int TongHaiSo(int a, int b) 
{
	return a+b;
}

void XuatDulieu(int x)
{
	cout << "Xuat du lieu: " << x << endl;
}

void Output()
{
	int kq = TongHaiSo(4,6);
	XuatDulieu(kq);
}






