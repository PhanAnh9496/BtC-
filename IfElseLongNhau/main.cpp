#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a;
	cout << "Nhap diem so: ";
	cin >> a;
	if(a < 0 || a > 10)
	{
		cout << "Nhap sai diem";
	}
	else
	{
		if(a > 5)
		{
			cout << "Qua Mon";
		}
		else
		{
			cout << "Truot";
		}
	}
	
	return 0;
}
