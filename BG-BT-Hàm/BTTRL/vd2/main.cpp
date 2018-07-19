#include <iostream>
#include <math.h>
using namespace std;

int KiemTra(int n);

int main(int argc, char** argv) {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	KiemTra(n);
	if(KiemTra(n)%3==0)
	{	
		cout << n << " chia het cho 3.";
	}
	else
	{
		cout << n << " khong chia het cho 3.";
	}
	return 0;
}

int KiemTra(int n)
{
	int a, s=0;
	bool temp = true;
	while(n!=0)
	{
		a=n%10;
		s += a;
		n /= 10;
	}
	return s;
}






