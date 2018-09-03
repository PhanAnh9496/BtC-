#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	char str1[25];
	cout << "Moi ban nhap chuoi: ";
	gets(str1);
	cout << "Chuoi sau khi nhap: ";
	puts(str1);
	
	char *str2 = new char[25];
	cout << "Moi ban nhap chuoi thu hai: ";
	cin.getline(str2,25);
	cout << "Chuoi thu hai sau khi nhap: ";
	puts(str2);
	cout << "Kich thuoc cua chuoi da nhap: " << strlen(str2) << endl;
	
	return 0;
}
