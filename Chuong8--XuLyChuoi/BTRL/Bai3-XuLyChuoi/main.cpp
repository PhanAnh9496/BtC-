#include <iostream>
#include <string.h>
using namespace std;

void TachLayTrai(char *strGoc, char *&strDau, char *&strSau);
void TachLayPhai(char *strGoc, char *&strCuoi, char *&strTruoc);

int main(int argc, char** argv) {
	
	char *strGoc = new char[255];
	char *strDau = new char[255];
	char *strSau = new char[255];
	cout << "Nhap chuoi: ";
	gets(strGoc);	
	TachLayTrai(strGoc,strDau,strSau);
	cout << strDau << endl;
	cout << strSau << endl;
	
	cout << "\n";
	char *strCuoi = new char[255];
	char *strTruoc = new char[255];
	TachLayPhai(strGoc,strCuoi,strTruoc);
	cout << strCuoi << endl;
	cout << strTruoc << endl;
	return 0;
}

void TachLayTrai(char *strGoc, char *&strDau, char *&strSau)
{
	char *p = strchr(strGoc,' ');
	int tempSpace = p - strGoc;
	strncpy(strDau,strGoc,tempSpace);
	p++;
	strSau = p;
}

void TachLayPhai(char *strGoc, char *&strCuoi, char *&strTruoc)
{
	
	int j = 0;
	for(int i=strlen(strGoc)-1; i>=0; i--)
	{
		if(strGoc[i] ==' ')
		{
			j = i+1;
			break;
		}
	}
	int i2=0;
	for(int i=j; i<strlen(strGoc);i++)
	{
		strCuoi[i2] = strGoc[i];
		i2++;
	}
	strncpy(strTruoc,strGoc,j);
}









