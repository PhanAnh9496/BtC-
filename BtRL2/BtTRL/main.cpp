#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a, b, c, max;
	cout << "Nhap a:";
	cin >> a;
	cout << "Nhap b:";
	cin >> b;
	cout << "Nhap c:";
	cin >> c;
	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	cout << "So lon nhat: " << max;
	
	return 0;
}
