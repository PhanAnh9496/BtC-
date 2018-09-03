#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//Tim Ky Tu
	char str1[25];
	cout << "Nhap chuoi: ";
	gets(str1);
	char Ktu;
	cout << "Nhap ky tu can tim: ";
	cin >> Ktu;
	char *p = strchr(str1,Ktu);
	if(p != NULL)
	{
		cout << "Tim thay ky tu va vi tri: " << p-str1 << endl;
	}
	else
	{
		cout << "Khong tim thay ky tu." << endl;
	}
	//Tim Ky Chuoi.
	fflush(stdin);
	char str3[25];
	cout << "Nhap chuoi: ";
	gets(str3);
	char str2[25];
	cout << endl;
	
	cout << "Nhap chuoi can tim: ";
	gets(str2);
	char *p1 = strstr(str3,str2);
	if(p1 != NULL)
	{
		cout << "Tim Chuoi va vi tri: " << p1-str3 << endl;
	}
	else
	{
		cout << "Khong tim thay chuoi." << endl;
	}
	
	
	
	return 0;
}
