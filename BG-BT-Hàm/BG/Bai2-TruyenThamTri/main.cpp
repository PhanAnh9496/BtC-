#include <iostream>
using namespace std;
void HoanVi(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
int main(int argc, char** argv) {
	
	int x = 1; 
	int y = 2;
	HoanVi(x,y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
