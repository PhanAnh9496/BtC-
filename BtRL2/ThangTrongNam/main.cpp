#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int thang,nam;
	cout << "Nhap vao mot thang trong nam: ";
	cin >> thang;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8: 
		case 10: 
		case 12:
			cout << "thang " << thang << " co 31 ngay.";
			break;
		case 4:
		case 6: 
		case 9:
		case 11: 
			cout << "thang " << thang << " co 30 ngay.";
			break;
		case 2:
			cout << "Nhap nam de kiem tra thang 2: ";
			cin >> nam;
			if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
			{
				cout << "thang " << thang << " nam " << nam << " co 29 ngay.";
			}
			else
			{
				cout << "thang " << thang << " nam " << nam << " co 28 ngay.";
			}
	}
	
	return 0;
}
