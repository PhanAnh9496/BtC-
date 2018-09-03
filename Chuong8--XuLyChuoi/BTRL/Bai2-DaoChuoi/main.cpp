#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	char str[255];
	cout << "Nhap chuoi: ";
	gets(str);
	int n = strlen(str)-1;
	cout <<"Chuoi dao nguoc: " << endl;
	for(int i=n; i>=0; i--)
	{
		cout << str[i];
	}
	
	return 0;
}
