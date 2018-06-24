#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	double x;
	double S;
	int i = 1;
	int mau = 1;
	cout << "Nhap vao x: ";
	cin >> x;
	cout << "Nhap vao n: ";
	cin >> n;
	do
	{
		double tu = pow(x,i);
		mau *= i;
		S = S + tu/mau;
		i++;
	}
	while(i <= n);
	cout << "S = " << S;
	return 0;
}
