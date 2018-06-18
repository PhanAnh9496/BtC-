#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	float xA, yA;
	float xB, yB;
	float AB;
	cout << "Nhap vao toa do cua xA va yA: ";
	cin >> xA;
	cin >> yA;
	cout << "Nhap vao toa do cua xB va yB: ";
	cin >> xB;
	cin >> yB;
	AB = sqrt(pow((xB - xA),2) + pow((yB - yA),2));
	cout << "Do dai doan thang AB: " << AB;
	return 0;
}
