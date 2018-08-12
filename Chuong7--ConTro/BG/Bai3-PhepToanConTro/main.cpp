#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a=20, b=15;
	int *pa, *pb, temp;
	pa = &a;
	pb = &b;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	cout << "Gia tri a = " << a << endl;
	cout << "Gia tri b = " << b << endl;
	cout << "Dia chi cua pa = " << pa << endl;
	pa++;
	cout << "Gia tri pa++ = " << pa << endl;
	return 0;
}
