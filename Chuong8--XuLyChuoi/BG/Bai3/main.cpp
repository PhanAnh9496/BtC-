#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	char str1[25], str2[25];
	cout << "Nhap chuoi 1: ";
	gets(str1);
	strcpy(str2,str1);
	cout << "Noi chuoi 1 va 2: ";
	puts(str2);
	char str3[5];
	strncpy(str3,str1,5);
	cout << "Noi chuoi 1 va 2 voi 8 ki tu: ";
	puts(str3);	
	
	return 0;
}
