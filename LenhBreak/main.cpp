#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n, sum = 0;
	cout << "Nhap mot so: ";
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		sum += i;
		if (sum >= 9)
		{
			break;
		}
		cout << sum << endl;
	}
	
	return 0;
}
