#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cout << "Nhap so ky tu chuoi ( >30 ):  ";
	cin >> n;
	fflush(stdin);
	char str1[n];
	cout << "Nhap chuoi: ";
	gets(str1);
	for(int i=0; i<=strlen(str1); i++)
	{
		char c = str1[i];
		putchar(toupper(c));	
	}	
	
	fflush(stdin);
	char str2[n];
	cout << "\nNhap chuoi: ";
	gets(str2);
	for(int i=0; i<=strlen(str2); i++)
	{
		char c = str2[i];
		putchar(tolower(c));	
	}	
	return 0;
}
