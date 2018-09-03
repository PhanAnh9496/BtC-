#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

struct Diem 
{
	double x; double y;	
};

double KhoangCach(Diem a, Diem b);
double DoDaiCacDiem(Diem arrDiem[], int n);
void NhapToaDo(Diem arrDiem[], int n);
void XuatToaDo(Diem arrDiem[], int n);

int main(int argc, char** argv) {
	
	Diem a;
//	a.x=1;
//	a.y=1;
//	Diem b;
//	b.x=0;
//	b.y=1;
//	double kc = KhoangCach(a,b);
//	cout << "Khoang cach tu A den B: " << kc;
//	
	Diem arrDiem[3];
	NhapToaDo(arrDiem,3);
	cout <<"Danh sach cac diem vua nhap: " << endl;
	XuatToaDo(arrDiem,3);
	cout <<"\nTong do dai cac diem: " << DoDaiCacDiem(arrDiem,3);
	return 0;
}

double KhoangCach(Diem a, Diem b)
{
	float Distance = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
	return Distance;
}

double DoDaiCacDiem(Diem arrDiem[], int n)
{
	double tongKc=0;
	for(int i=0; i<n-1; i++)
	{
		double kc = KhoangCach(arrDiem[i],arrDiem[i+1]);
		tongKc += kc;
	}
	return tongKc;
}

void NhapToaDo(Diem arrDiem[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << "NhapDiemThu " << i+1 <<endl;
		cout << "Nhap toa do x = ";
		cin >>arrDiem[i].x;
		cin.ignore();
		cout << "Nhap toa do y = ";
		cin >>arrDiem[i].y;
		cin.ignore();
	}
}
void XuatToaDo(Diem arrDiem[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout << "(" << arrDiem[i].x << "," << arrDiem[i].y << ")" <<endl;
		
	}
}









