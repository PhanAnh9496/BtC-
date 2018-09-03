#include <iostream>
#include <string.h>
using namespace std;
struct DiaChi
{
	char Duong[150];
	char Quan[100];
	char Tinh[200];
};
struct NhanVien 
{
	char Ma[50];
	char Ten[255];
	int NamSinh;
	DiaChi CongViec;	
	DiaChi NhaRieng;
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
	cout <<"\n----------------*******---------------- \n";
	cout << "DANH SACH NHAN VIEN: " << endl;
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
		//Co quan
		fflush(stdin);
		cout <<"\n---------------- \n";
		cout << "Nhap dia chi co quan: " << endl;
		cout << "Ten Duong: ";
		gets(arrNVien[i].CongViec.Duong);
		cout << "Ten Quan: ";
		gets(arrNVien[i].CongViec.Quan);
		cout << "Ten Tinh/TP: ";
		gets(arrNVien[i].CongViec.Tinh);
		cout <<"\n----------------";
		//Nha Rieng
		cout <<"\n---------------- \n";
		cout << "Nhap dia chi nha rieng: " << endl;
		cout << "Ten Duong: ";
		gets(arrNVien[i].NhaRieng.Duong);
		cout << "Ten Quan: ";
		gets(arrNVien[i].NhaRieng.Quan);
		cout << "Ten Tinh/TP: ";
		gets(arrNVien[i].NhaRieng.Tinh);
		cout <<"\n----------------";
		cout <<"\n+++++++++++++++++++++++ \n";	
	}
}
void XuatNhanVien(NhanVien arrNVien[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout <<"\n++++***********************************++++ \n";
		cout << "Nhan vien thu " << i+1 << ": " << endl;
		cout << "Ma nhan vien: " << arrNVien[i].Ma << endl;
		cout << "Ten nhan vien: " << arrNVien[i].Ten << endl;
		cout << "Nam sinh: " << arrNVien[i].NamSinh;
		cout <<"\n---------------- \n";
		cout <<"Dia chi co quan \n";
		cout << "Duong: " << arrNVien[i].CongViec.Duong << ","<< arrNVien[i].CongViec.Quan<<","<< arrNVien[i].CongViec.Tinh<<endl;
		cout <<"\n----------------";
		cout <<"\n---------------- \n";
		cout <<"Dia chi Nha Rieng \n";
		cout << "Duong: " << arrNVien[i].NhaRieng.Duong << ","<< arrNVien[i].NhaRieng.Quan<<","<< arrNVien[i].NhaRieng.Tinh<<endl;
		cout <<"\n----------------";
		cout <<"\n++++***********************************++++ \n";
	}
}

void LocNhanVien(NhanVien arrNVien[], int n)
{
	char Tim[150];
	cout << "\n++++++++++++++++++\nNHAP DIA CHI (Ten Tinh) NHA RIENG CAN TIM: ";
	gets(Tim);
	for(int i=0; i<n; i++)
	{
		if(strstr(arrNVien[i].NhaRieng.Tinh,Tim))
		{
			cout <<"\n++++***********************************++++ \n";
			cout << "Nhan vien thu " << i+1 << ": " << endl;
			cout << "Ma nhan vien: " << arrNVien[i].Ma << endl;
			cout << "Ten nhan vien: " << arrNVien[i].Ten << endl;
			cout << "Nam sinh: " << arrNVien[i].NamSinh;
			cout <<"\n---------------- \n";
			cout <<"Dia chi co quan \n";
			cout << "Duong: " << arrNVien[i].CongViec.Duong << ","<< arrNVien[i].CongViec.Quan<<","<< arrNVien[i].CongViec.Tinh<<endl;
			cout <<"\n----------------";
			cout <<"\n---------------- \n";
			cout <<"Dia chi Nha Rieng \n";
			cout << "Duong: " << arrNVien[i].NhaRieng.Duong << ","<< arrNVien[i].NhaRieng.Quan<<","<< arrNVien[i].NhaRieng.Tinh<<endl;
			cout <<"\n----------------";
			cout <<"\n++++***********************************++++ \n";	
		}
	}
}
