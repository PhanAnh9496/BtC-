#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n, sum;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Uoc chung cua " << n << " : " << endl;
	for(int i=1; i<=n; i++)
	{
		if(n%i == 0 && n/i != 1)
		{
			cout << i << "\t";
			sum += i;	
		}
	}
	if(sum == n)
	{
		cout <<"\nSo " << n << " la so hoan hao";
	}
	else
	{
		cout <<"\nSo " << n << " khong la so hoan hao";
	}
	return 0;
}
