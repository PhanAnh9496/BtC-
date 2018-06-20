#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char** argv) {
	int n;
	double S=0;
	double x;
	int mau = 1;
	cout << "Nhap vao x: ";
	cin >> x;
	cout << "Nhap vao n: ";
	cin >> n;
	
	for(int i =1; i<=n; i++)
	{
		double tu = pow(x,i);
		mau *= i;
		S = S + tu/mau;
	}
	cout << S;
	
	return 0;
}
