#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double x;
	double S = 0;
	int n;
	int mau = 1;
	int mauphu = 1;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{	
		int temp = (2*i)+1;
		double tu = pow(x, temp);
		mau = temp;
		if(i == 0)
		{	
			S = S + tu/mau;
			continue;		
		}
		mauphu = mauphu*mau*(mau-1);
		S = S + tu/mauphu;	
	}
	cout << S;
	return 0;
}
