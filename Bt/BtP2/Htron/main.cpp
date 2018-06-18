#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	const double PI = 3.14;
	double R, Cv, Dt;
	cout << "Nhap vao Ban Kinh Hinh Tron: R = " ;
	cin >> R;
	Cv = (double)2*PI*R;
	Dt = (double)PI*R*R;
	cout << "\nChu vi cua Hinh tron: " << Cv;
	cout << "\nDien tich cua hinh tron: " << Dt;
	return 0;
}
