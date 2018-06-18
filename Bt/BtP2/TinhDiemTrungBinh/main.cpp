#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	double Toan, Hoa, Ly;
	double Dtb;
	cout << "Nhap vao lan luot 3 mon Toan, Hoa, Ly: ";
	cin >> Toan;
	cin >> Hoa;
	cin >> Ly;
	Dtb = (Toan + Hoa + Ly)/3;
	cout << "Diem Trung Binh 3 Mon: " << Dtb << endl;
	cout << "Diem trung binh lam tron: " <<setprecision(3) << Dtb << endl;
	
	return 0;
}
