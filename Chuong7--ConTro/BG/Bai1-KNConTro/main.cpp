#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int *p;
	p = new int;
	*p = 100;
	cout << "Dia chi cua con tro p: " << p << endl;
	cout << "Gia tri cua con tro p: " << *p ;
	delete p;
	return 0;
}
