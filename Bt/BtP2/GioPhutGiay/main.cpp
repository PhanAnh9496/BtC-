#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int hour, minute, second, t;
	cout << "Nhap so giay can tinh: ";
	cin >> t;
	hour = (t/3600)%24;
	minute = (t%3600)/60;
	second = (t%3600)%60;
	int hourTemp = hour > 12 ? hour - 12 : hour;
	cout << hourTemp << ":" << minute << ":" << second << (hour>12?" PM":" AM");
	
	return 0;
}
