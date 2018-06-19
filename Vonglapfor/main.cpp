#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n, sum = 0;
	cout << "Nhap so: ";
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		sum += i;
		cout << sum << endl;
	}
	
	return 0;
}
