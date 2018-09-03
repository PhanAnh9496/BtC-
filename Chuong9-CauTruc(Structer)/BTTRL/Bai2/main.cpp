#include <iostream>
#include <string.h>
using namespace std;
struct PhongBan
{
	char MaBan[50];
	char TenBan[100];
};
struct NhanVien 
{
	char Ma[50];
	char Ten[255];
	int NamSinh;
	PhongBan CongViec;	
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
		fflush(stdin);
		cout <<"\n---------------- \n";
		cout << "Ma phong ban: ";
		gets(arrNVien[i].CongViec.MaBan);
		cout << "Ten phong ban: ";
		gets(arrNVien[i].CongViec.TenBan);
		cout <<"\n----------------";
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
		cout <<"\n---------------- \n";
		cout << "Ma phong ban: " << arrNVien[i].CongViec.MaBan << endl;
		cout << "Ten phong ban: " << arrNVien[i].CongViec.TenBan;
		cout <<"\n----------------";
		cout <<"\n************* \n";
	}
}

void LocNhanVien(NhanVien arrNVien[], int n)
{
	char Tim[150];
	cout << "\n++++++++++++++++++\nNhap phong ban can tim: ";
	gets(Tim);
	for(int i=0; i<n; i++)
	{
		if(strstr(arrNVien[i].CongViec.TenBan,Tim))
		{
			cout <<"\n************* \n";
			cout << "Nhan vien thu " << i+1 << ": " << endl;
			cout << "Ma nhan vien: " << arrNVien[i].Ma << endl;
			cout << "Ten nhan vien: " << arrNVien[i].Ten << endl;
			cout << "Nam sinh: " << arrNVien[i].NamSinh;
			cout <<"\n++++++++++ \n";
			cout << "Ma phong ban: " << arrNVien[i].CongViec.MaBan << endl;
			cout << "Ten phong ban: " << arrNVien[i].CongViec.TenBan;
			cout <<"\n++++++++++";
			cout <<"\n************* \n";	
		}
	}
}
















