#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	int a, b, c;
	double p, cV, dT;
	cout << "Nhap vao ba canh cua tam giac: " << endl;
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;
	if (a > 0 && b > 0 && c > 0 && a+b > c && a + c > b)
	{	
		cV = a + b + c;
		cout << "Chu vi tam giac: " << cV << endl;
		p = (double)cV/2;
		dT =  sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "Dien tich cua tam giac: " << dT;
	}
	else
	{
		cout << "Ban nhap khong dung, cac canh tam giac phai lon hon khong (>0) va a+b > c va a + c > b";
	}
	return 0;
}
