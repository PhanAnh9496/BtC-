#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double x;
	int n;
	double S;
	int i = 1;
	int mau = 1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	while(i <= n)
	{
		int tu = pow(x,i);
		mau *= i;
		S = S + (double)tu/mau;
		i++;
	}
	cout << "S = " << S;
	return 0;
}
