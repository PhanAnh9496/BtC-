#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cout << "Nhap n: ";
	cin >> n;
	/*if(n % 2 == 0)
	{
		cout << "n la so chan";
	}
	else
	{
		cout << "n la so le";
	}*/
	cout << ((n%2==0) ? "so chan" : "so le");
	
	return 0;
}
