#include <iostream>
using namespace std;

void Ham1(int x);
void Ham2(int &x);
int main(int argc, char** argv) {
	
	int x = 5;
	cout << "X trc khi vao Ham 1: " << x;
	Ham1(x);
	cout << "\nX sau khi vao Ham 1: "<< x;
	x = 6;
	cout << "\nX trc khi vao Ham 2: " << x;
	Ham2(x);
	cout << "\nX sau khi vao Ham 2: "<< x;
	return 0;
}

void Ham1(int x)
{
	x = 10;
	cout << "\nGia tri trong Ham 1 cua x = " << x;
}
void Ham2(int &x)
{
	x = 20;
	cout << "\nGia tri trong Ham 2 cua x = " << x;
}
