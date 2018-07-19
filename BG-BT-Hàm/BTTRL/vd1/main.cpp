#include <iostream>
#include <math.h>
using namespace std;
double tinhS(int x, int n);
int main()
{	
    int x, n;
    cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
    double S = tinhS(x,n);
    cout << S;
	return 0;
}
double tinhS(int x, int n)
{
    int i;
	double S, M, T;
    i = 1;
	S = 0;
	T = 0;
    while(i <= n)
	{
		M = M + i;
		T = pow(x,i);
		S = S + T/M;
		i++;
	}
	return S;
}








