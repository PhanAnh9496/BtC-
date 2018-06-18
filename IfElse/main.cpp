#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int a;
	cout << "Nhap a: ";
	cin >> a;
	if(a >= 0) 
	{
		cout << a << " la so duong";
	}
	else
	{
		cout << a << " la so am";
	}
	
	return 0;
}
