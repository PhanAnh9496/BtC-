#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char kt;
	int ktASCII;
	cout << "Nhap mot ky tu bat ky tu ban phim: ";
	cin >> kt;
	ktASCII = (int)kt;
	cout << "Ma ASCII cua ky tu: " << ktASCII << endl;
	ktASCII++;
	kt = (char)ktASCII;
	cout << "Ky tu tiep theo: " << kt;
	
	return 0;
}
