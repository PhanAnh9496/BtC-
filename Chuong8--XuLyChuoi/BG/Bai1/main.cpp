#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	char *str="hello";
	cout << str << endl;
	char str2[] = "PhanAnh";
	cout << str2 << endl; 
	char str3[] = {'P','H','A','N','\0'};
	cout << str3 << endl;
	char str4[10];
	str4[0]='P';
	str4[1]='H';
	str4[2]='A';
	str4[3]='N';
	cout << str4 << endl;
	return 0;
}
