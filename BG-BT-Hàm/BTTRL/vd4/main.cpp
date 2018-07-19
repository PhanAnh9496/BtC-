#include <iostream>
using namespace std;
int SoThinhVuong(int n);
int main(int argc, char** argv) {

	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = SoThinhVuong(n);
    if(kq > n)
	{	
		cout << "\nTong cac uoc cua " << n << " khong tinh " << n << " la " << kq << endl;
		cout << n << " la so thinh vuong";
	}
	else
	{
		cout << "\nTong cac uoc cua " << n << " khong tinh " << n << " la " << kq << endl;
		cout << n << " khong la so thinh vuong";
	}
	return 0;
}

int SoThinhVuong(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
    	if(n%i==0 && i!=n)
    	{
    		cout << i << "\t";
    		sum += i;
    	}
    }
    return sum;
}
