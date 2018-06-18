#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int ngayT, thangT, namT, top;
	cout << "Nhap vao ngay: ";
	cin >> ngayT;
	cout << "Nhap vao thang: ";
	cin >> thangT;
	cout << "Nhap vao nam: ";
	cin >> namT;
	
	switch(thangT)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8: 
		case 10: 
		case 12:
			top = 31;
			break;
	
		case 2:
			top = (namT%4 == 0 && namT%100 == 0 || namT%400 == 0) ?29:28;
			break;
		default:
			top = 30;
	}
	if(top == ngayT)
	{
		ngayT = 01;
		if(thangT == 12)
		{
			thangT = 01;
			namT++;
		}
		else
		{
			thangT++;
		}
	}
	else
	{
		ngayT++;
	}
	cout << ngayT << "/" << thangT << "/" << namT;
	return 0;
}
