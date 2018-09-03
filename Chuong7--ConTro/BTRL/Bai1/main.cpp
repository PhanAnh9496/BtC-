#include <iostream>
using namespace std;

void swap(double *&pa, double *&pb);

int main(int argc, char** argv) {
	
	double a;
	cout << "Nhap a: " ;
	cin >> a;
	double b;
	cout << "Nhap b: ";
	cin >> b;
	swap(a,b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

void swap(double *&pa, double *&pb)
{
	double temp = *pa;
	*pa = *pb;
	*pb = temp;
}
