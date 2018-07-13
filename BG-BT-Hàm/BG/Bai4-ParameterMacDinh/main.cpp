#include <iostream>
using namespace std;

void HamGiDo(int x, int y=1)
{
	cout << (x+y) << endl;
}
int main(int argc, char** argv) {
	HamGiDo(9);
	HamGiDo(9,4);
	return 0;
}
