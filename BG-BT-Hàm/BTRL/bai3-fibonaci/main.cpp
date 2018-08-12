#include <iostream>
using namespace std;

int fib(int n);
void Xuat_fib(int n);

int main(int argc, char** argv) {
	
	int n;
	cout << "Nhap vi tri can tim: ";
	cin >> n;
	int kq = fib(n);
	cout << "Day fibonaci: " << kq;	
	cout << endl;
	cout << "Day so so fibnaci: " << endl;
	Xuat_fib(n);
	return 0;
}

int fib(int n)
{
	if(n <= 2)
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}

void Xuat_fib(int n)
{
	for(int i=1; i<=n; i++)
	{
		cout << fib(i) << "\t";
	}
}







