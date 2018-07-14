#include <iostream>
using namespace std;

int GiaiThua(int x);
void H10toH2(int x);

int main(int argc, char** argv) {
	
	int gt =  GiaiThua(6);
	cout << "Giai thua cua 6: " << gt <<endl;
	H10toH2(11);
	return 0;
}

int GiaiThua(int x)
{	
	int tinh;
	if(x <= 1)
	{
		return 1;
	}
	tinh = x*GiaiThua(x-1);
	return tinh;
}

void H10toH2(int x)
{
	if(x>0)
	{
		int t = x%2;
		H10toH2(x/2);
		cout << t << " ";
	}
}
