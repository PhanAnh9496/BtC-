#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	char str1[25];
	char str2[25];
	cout << "Nhap chuoi 1: ";
	gets(str1);
	cout << "Nhap chuoi 2: ";
	gets(str2);
	strncat(str1,str2,6);
	cout << "Chuoi sau khi noi: ";
	puts(str1);
	cout << "\nDo dai thuc cua chuoi noi: " << strlen(str1);
	
	
//	strncat(str1,str2,6);
//	cout << "\nChuoi sau khi noi: ";
//	puts(str1);
	return 0;
}
