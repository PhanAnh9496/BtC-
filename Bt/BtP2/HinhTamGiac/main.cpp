#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	double dt, a, h;
	cout << "Nhap chieu cao cua tam giac: ";
	cin >> h;
	cout << "\nNhap canh doi dien cua tam giac: ";
	cin >> a;
	dt = (double)(a*h)/2;
	cout << "\nDien tich cua tam giac do: " << dt;
	
	return 0;
}
