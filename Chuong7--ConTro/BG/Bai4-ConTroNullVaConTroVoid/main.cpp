#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a = 5;
	float b = 5.6;
	int *pa = &a;
	float *pb = &b;
	
	void *p;
	p = &a;
	(*(int*)p) = 10;
	cout << "a = " << a << endl;
	p = &b;
	(*(float*)p) = 10.8;
	cout << "b = " << b << endl;
	
	int *y = new int;
	*y = 96;
	cout << "*y = " << *y << endl;
	return 0;
}
