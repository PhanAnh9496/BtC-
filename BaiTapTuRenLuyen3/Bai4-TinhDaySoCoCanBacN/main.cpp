#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	double S;
	cout << "Nhap n: ";
	cin >> n;
	S = sqrt(n);
	for(int i=n-1; i>=1; i--) 
	{
		S = sqrt(i + S);
	}
	cout << S;
	return 0;
}
