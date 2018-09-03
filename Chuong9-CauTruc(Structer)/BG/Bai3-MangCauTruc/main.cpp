#include <iostream>
#include <string.h>
using namespace std;

struct SinhVien
{
	int ma;
	char ten[255];	
};

void NhapMang(SinhVien dsSV[], int siso);
void XuatMang(SinhVien dsSV[], int siso);

int main(int argc, char** argv) {
	
	int siso = 3;
	SinhVien dsSV[siso];
	NhapMang(dsSV,siso);
	XuatMang(dsSV,siso);

	return 0;
}

void NhapMang(SinhVien dsSV[], int siso)
{
	for(int i=0; i<siso; i++)
	{
		cout << "Nhap sinh vien thu " << i+1 << ": ";
		cout << "Nhap maSV: ";
		cin >> dsSV[i].ma;
		cin.ignore();
		cout << "Nhap ten: ";
		gets(dsSV[i].ten);
	}
}
void XuatMang(SinhVien dsSV[], int siso)
{
	for(int i=0; i<siso; i++)
	{
		cout << "Sinh vien thu " << i+1 << ": ";
		cout << "Ma SV: ";
		cout << dsSV[i].ma;
		cout << "Ten SV: ";
		puts(dsSV[i].ten);
	}
}










