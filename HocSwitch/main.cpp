#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cout << "Nhap mot so: ";
	cin >> n;
	switch(n)
	{
		case 1:
		case 2:
		case 3: 
			cout << "okay!!! 1 2 3";
			break;
		case 4:
		case 5:
		case 6:
			cout << "okay!!! 4 5 6";
			break;
		case 7:
		case 8:
		case 9: 
			cout << "okay!!! 7 8 9";
			break;
		default:
			cout << "Chua ho tro.";
	}
	
	
	return 0;
}
