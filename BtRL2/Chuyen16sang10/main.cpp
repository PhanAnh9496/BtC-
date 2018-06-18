#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	char n;
	int n1;
	cout<< "nhap n: ";
	cin >> n;
	switch(n)
	{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			cout << n;
			break;
		case 'A': cout << 10; break;
		case 'B': cout << 11; break;
		case 'C': cout << 12; break;
		case 'D': cout << 13; break;
		case 'E': cout << 14; break;
		case 'F': cout << 15; break;
		default: cout <<"Ko co ky tu nay";
	}
	return 0;
}
