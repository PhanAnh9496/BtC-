#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int i=1, n, sum = 0;
	cout << "Nhap mot so nguyen: ";
	cin >> n;
	while(i <= n)
	{
		sum += i;
		i++;
		cout << sum << endl;
	}
	
	return 0;
}
