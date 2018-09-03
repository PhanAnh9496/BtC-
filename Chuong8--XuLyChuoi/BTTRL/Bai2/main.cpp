#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	
	char *strGoc = new char[255];
	cout << "Nhap vao ho va ten: ";
	gets(strGoc);
	int n = strlen(strGoc);
	
	for(int i=0; i<n; i++)
	{
		// ngUYEN vAN TEO
		char testChar = strGoc[i];	
		if(strGoc[i] == ' ' )
		{
			i++;
			testChar = strGoc[i];
			char UpperChar = toupper(testChar);
			cout << UpperChar;
		}
	}
	
	return 0;
}
