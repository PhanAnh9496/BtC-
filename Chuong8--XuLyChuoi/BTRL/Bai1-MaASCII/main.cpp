#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	int ASCII;
	char str1[30];
	cout << "Nhap chuoi: ";
	gets(str1);
	int n = strlen(str1);
	cout << "Chuoi chuyen sang ma ASCII: " << endl;
	for(int i=0; i<n; i++)
	{
		char c = str1[i];
		ASCII = (int)c;
		cout << c << " => " <<ASCII << endl;
	}
	
	
	return 0;
}
