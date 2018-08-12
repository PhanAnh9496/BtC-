#include <iostream>
#include <math.h>
using namespace std;
int ChuVi(int a, int b, int c);
double DienTich(int a, int b, int c);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c;
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;
	int Cvi = ChuVi(a, b, c);
	double Dtich = DienTich(a, b, c);
	if(a<=0 || b<=0 || c<=0 || (a+b<=c) || (a+c<=b) || (b+c<=a))
	{
		cout << "Nhap sai cac do dai cac canh!!! Hay nhap lai.";
	}
	else
	{
		cout << "Chu vi cua tam giac: " << Cvi << endl;
		cout << "Dine tich cua tam giac: " << Dtich << endl;
	}
	return 0;
}

int ChuVi(int a, int b, int c)
{
	int Cv = a + b + c;
	return Cv;
}
double DienTich(int a, int b, int c)
{
	double p = ChuVi(a, b, c)/2.0;
	double Dt = sqrt(p*(p-a)*(p-b)*(p-c));
	return Dt;
}
