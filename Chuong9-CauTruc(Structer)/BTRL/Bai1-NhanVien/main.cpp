#include <iostream>
#include <string.h>
using namespace std;

struct DiaChi 
{
	char Duong[50];
	char Quan[50];
	char Tinh[50];	
};

struct NhanVien 
{
	int MaNV;
	char TenNV[45];
	int Tuoi;
	DiaChi CoQuan;
//	DiaChi NhaRieng;
};

void NhapNhanVien(NhanVien dsNV[], int SoNV);
void XuatNhanVien(NhanVien dsNV[], int SoNV);

int main(int argc, char** argv) {
	
	int SoNV;
	cout << "Nhap vao so nhan vien: ";
	cin >> SoNV;
	NhanVien dsNV[SoNV];
	NhapNhanVien(dsNV,SoNV);
	XuatNhanVien(dsNV,SoNV);
	return 0;
}

void NhapNhanVien(NhanVien dsNV[], int SoNV)
{
	for(int i=0; i<SoNV; i++)
	{
		fflush(stdin);
		cout << "Nhap nhan vien thu " << i+1 << ": \n";
		cout << "Ma Nv: ";
		cin >> dsNV[i].MaNV;
		cin.ignore();
		cout << "Nhap ten: ";
		gets(dsNV[i].TenNV);
		cout << "Tuoi: ";
		cin >> dsNV[i].Tuoi;
		cout << "\nDia Chi Co Quan: \n";
		fflush(stdin);
		cout << "Ten Duong: ";
		gets(dsNV[i].CoQuan.Duong);
		cout << "Ten Quan: ";
		gets(dsNV[i].CoQuan.Quan);	
		cout << "Ten Tinh: ";
		gets(dsNV[i].CoQuan.Tinh); 
	}
}
void XuatNhanVien(NhanVien dsNV[], int SoNV)
{
	for(int i=0; i<SoNV; i++)
	{
		cout << "Nhan vien thu " << i+1 << ": \n";
		cout << "Ma Nv: " << dsNV[i].MaNV << endl;
		cout << "Ten Nv: " << dsNV[i].TenNV <<endl;
		cout << "Tuoi: " << dsNV[i].Tuoi <<endl;
		cout << "\nDia Chi Co Quan: \n";
		puts(dsNV[i].CoQuan.Duong);
		puts(dsNV[i].CoQuan.Quan);
		puts(dsNV[i].CoQuan.Tinh); 
	}
}





