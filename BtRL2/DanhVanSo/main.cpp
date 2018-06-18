#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n;
	int chuc, dv;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	
	chuc = n/10;
	dv = (n%10)%10;
	
	switch(chuc)
	{
		case 1: cout << "Muoi "; break;
		case 2: cout << "Hai muoi "; break;
		case 3: cout << "Ba muoi "; break;
		case 4: cout << "Bon muoi "; break;
		case 5: cout << "Nam muoi "; break;
		case 6: cout << "Sau muoi "; break;
		case 7: cout << "Bay muoi "; break;
		case 8: cout << "Tam muoi "; break;
		case 9: cout << "Chin muoi "; break;
	}
	switch(dv)
	{
		case 1: cout << "Mot "; break;
		case 2: cout << "Hai  "; break;
		case 3: cout << "Ba  "; break;
		case 4: cout << "Bon  "; break;
		case 5: cout << "Nam  "; break;
		case 6: cout << "Sau  "; break;
		case 7: cout << "Bay  "; break;
		case 8: cout << "Tam  "; break;
		case 9: cout << "Chin  "; break;
	}
	cout << endl;
	return 0;
}
