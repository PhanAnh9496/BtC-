#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	/*int x = 5, y = 3;
	int z = x-- - --y + 2;
	cout << "z = " << z <<endl;
	cout << "y = " << y <<endl;
	cout << "x = " << x <<endl;*/
	
	int x = 5, y = 10;
	int z = ++x - y-- + 2;
	cout << "z = " << z <<endl;
	cout << "y = " << y <<endl;
	cout << "x = " << x <<endl;
	
	return 0;
}
