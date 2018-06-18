#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	double toan, van, dtb;
	cout << "Nhap vao diem toan: ";
	cin >> toan;
	cout << "\nNhap vao diem van: ";
	cin >> van;
	dtb = (toan*2 + van)/3;
	cout << "\nDiem Trung Binh: " << dtb ;
	
	return 0;
}
