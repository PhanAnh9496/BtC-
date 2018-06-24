#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int sum = 0;
	cout << "Nhap mot so: ";
	cin >> n;
	do
	{
		int soDu = n % 10;
		n /= 10;
		sum = sum + soDu; 
	}
	while(n>0);
	cout << "Tong cua day so: " << sum;
	return 0;
}
