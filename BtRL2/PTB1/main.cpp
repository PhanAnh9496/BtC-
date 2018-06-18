#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a, b, c;
	double x;
	cout << "Nhap cac so a, b, c cua phuong trinh a*x + b = c " << endl ;
	cin >> a;
	cin >> b;
	cin >> c;
	x = (double)(c-b)/a;
	if(a == 0)
	{
		if(b == c)
		{
			cout << "Phuong trinh co vo so nghiem.";	
		}
		else
		{
			cout << "Phuong trinh vo nghiem";	
		}	
	}
	else if(a != 0)
	{
		cout << "Phuong trinh co nghiem: x= " << x;
	}
	return 0;
}
