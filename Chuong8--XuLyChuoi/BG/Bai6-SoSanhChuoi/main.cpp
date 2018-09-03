#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void NhapChuoi(char str[30]);
void XuatChuoi(char str[30]);
int SoSanhChuoi(char str1[30], char str2[30]);
int SoSanhKyTuChuoi(char str1[30], char str2[30]);
int main(int argc, char** argv) {
	
	char str1[30], str2[30];
	cout << "Nhap chuoi 1:";
	NhapChuoi(str1);
	XuatChuoi(str1);
	cout << "Nhap chuoi 2:";
	NhapChuoi(str2);
	XuatChuoi(str2);
	cout << "\nSo sanh hai chuoi: " << endl;
	int kq = SoSanhChuoi(str1, str2);
	cout << "\n" << kq << endl;
	if(kq == 0)
	{
		cout << "Hai chuoi bang nhau.";
	}
	else if(kq > 0)
	{
		cout << "Chuoi 1 lon hon chuoi 2";
	}
	else if(kq < 0)
	{
		cout << "Chuoi 2 lon hon chuoi 1";
	}
	
	fflush(stdin);
	char str3[30], str4[30];
	cout << "\nNhap chuoi 3:";
	NhapChuoi(str3);
	XuatChuoi(str3);
	cout << "Nhap chuoi 4:";
	NhapChuoi(str4);
	XuatChuoi(str4);
	cout << "\nSo sanh hai chuoi: " << endl;
	int kq2 = SoSanhKyTuChuoi(str3, str4);
	cout << kq2 << endl;
	if(kq2 == 0)
	{
		cout << "Hai chuoi bang nhau.";
	}
	else if(kq2 > 0)
	{
		cout << "Chuoi 1 lon hon chuoi 2";
	}
	else if(kq2 < 0)
	{
		cout << "Chuoi 2 lon hon chuoi 1";
	}
	
	
	return 0;
	
}

void NhapChuoi(char str[30])
{
	fflush(stdin);
	gets(str);
}
void XuatChuoi(char str[30])
{
	puts(str);
}
int SoSanhChuoi(char str1[30], char str2[30])
{
	int rest = strcmp(str1,str2);
	return rest;
}
int SoSanhKyTuChuoi(char str3[30], char str4[30])
{
	int rest2 = strncmp(str3,str4,3);
	return rest2;
}











