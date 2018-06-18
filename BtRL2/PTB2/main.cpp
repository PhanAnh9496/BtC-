#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	int a, b, c;
	double x, x1, x2, delta;
	cout << "Giai Phuong trinh a*x^2 + b*x + c = 0" << endl;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a == 0)
	{
		x = (double)(-c)/b;
		cout << "Phuong trinh co nghiem x = " << x;
	}
	else if(a != 0)
	{
		delta = b*b - 4*a*c;
		if (delta > 0)
		{
			x1 = (double)((-b + sqrt(delta))/(2*a));
			x2 = (double)((-b - sqrt(delta))/(2*a));
			cout << "Phuong trinh co 2 nghiem: " << x1 << " va " << x2;
		}
		else if (delta == 0)
		{
			x = (double)(-b/(2*a));
			cout << "Phuong trinh co nghiem kep x = " << x;
		}
		else if(delta < 0)
		{
			cout << "Phuong trinh vo nghiem.";
		}
	}
	
	
	return 0;
}
