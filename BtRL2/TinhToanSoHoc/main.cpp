#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	double a, b, kq;
	char ch;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap vao cac ky tu cong, tru, nhan, chia: ";
	cin >> ch;
	switch(ch)
	{
		case '+':
			kq = a + b;
			cout << "Ket qua phep cong (+) : " << kq;
			break;
		case '-' :
			kq = a - b;
			cout << "Ket qua phep tru (-) : " << kq;
			break;
		case '*' :
			kq = a * b;
			cout << "Ket qua phep nhan (*) : " << kq;
			break;
		case '/' :
			if (b == 0)
			{
				cout << "Mau so phai khac khong.";
			}
			else
			{
				kq = a / b;
				cout << "Ket qua phep chia (/) : " << kq;
			}
			
			break;
		default : cout << "ky tu khong hop le."; 
			break;
	}
	
	
	return 0;
}
