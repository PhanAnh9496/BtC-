#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n, a, b, c, ld, m;
	cout << "Nhap vao mot so nguyen co 3 chu so: ";
	cin >> n;
	a = (int)n/100;
	ld = n%100;
	b = (int)ld/10;
	c = ld%10;
	m = c*100 + b*10 + a;
	cout << "So nghich dao cua so " << n << " la so: " << m;
	return 0;
}
