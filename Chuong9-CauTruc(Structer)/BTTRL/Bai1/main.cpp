#include <iostream>
#include <string.h>
using namespace std;

struct NhanVien 
{
	char Ma[50];
	char Ten[255];
	int NamSinh;	
};

void NhapNhanVien(NhanVien arrNVien[], int n);
void XuatNhanVien(NhanVien arrNVien[], int n);
void LocNhanVien(NhanVien arrNVien[], int n);

int main(int argc, char** argv) {
	int n;
	cout << "Nhap so nhan vien: ";
	cin >> n;
	NhanVien arrNVien[n];
	NhapNhanVien(arrNVien,n);
	cout <<"\n------------------------------ \n";
	cout << "Danh sach nhan vien: " << endl;
	XuatNhanVien(arrNVien,n);	
	LocNhanVien(arrNVien,n);
	
	return 0;
}

void NhapNhanVien(NhanVien arrNVien[], int n)
{
	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		cout <<"\n+++++++++++++++++++++++ \n";
		cout << "Nhan vien thu " << i+1 << ": " << endl;
		cout << "Ma nhan vien: ";
		gets(arrNVien[i].Ma);
		cout << "Ten nhan vien: ";
		gets(arrNVien[i].Ten);
		cout << "Nam sinh: ";
		cin >> arrNVien[i].NamSinh;
		cout <<"\n+++++++++++++++++++++++ \n";	
	}
}
void XuatNhanVien(NhanVien arrNVien[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout <<"\n************* \n";
		cout << "Nhan vien thu " << i+1 << ": " << endl;
		cout << "Ma nhan vien: " << arrNVien[i].Ma << endl;
		cout << "Ten nhan vien: " << arrNVien[i].Ten << endl;
		cout << "Nam sinh: " << arrNVien[i].NamSinh;
		cout <<"\n************* \n";
	}
}

void LocNhanVien(NhanVien arrNVien[], int n)
{
	int Tim;
	cout << "\n++++++++++++++++++\nNhap nam sinh can tim: ";
	cin >> Tim;
	for(int i=0; i<n; i++)
	{
		if(arrNVien[i].NamSinh == Tim)
		{
			cout <<"\n************* \n";
			cout << "Nhan vien thu " << i+1 << ": " << endl;
			cout << "Ma nhan vien: " << arrNVien[i].Ma << endl;
			cout << "Ten nhan vien: " << arrNVien[i].Ten << endl;
			cout << "Nam sinh: " << arrNVien[i].NamSinh;
			cout <<"\n************* \n";	
		}
	}
}



