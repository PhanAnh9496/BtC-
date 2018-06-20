#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n, sum = 0, i = 0;
	cout << "Nhap mot so: ";
	cin >> n;
	do
	{	i++;
		if(i==2 || i==4)
		{
			continue;
		}
		sum = sum + i;
		cout << sum << endl;
	}
	while(i < n);
	
	return 0;
}
