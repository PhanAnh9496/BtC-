#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	float x;
	double A;
	cout << "Nhap so x = " ;
	cin >> x;
	cout << "Nhap so mu n = ";
	cin >> n;
	A = (double)(pow((x*x + x + 1),n) - pow((x*x - x + 1),n));
	cout << "Ket Qua Cua Bieu Thuc A = (x^2+x+1)^n - (x^2-x+1)^n = " << A;
	
	return 0;
}
