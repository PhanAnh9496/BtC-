#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int M[n];
	int dem = 0;
	cout << "Moi ban nhap cac gia: ";
	for(int i=0; i<n; i++)
	{
		cout <<"M[" << i << "]= ";
		cin >> M[i];
	}
	cout << "Mang sau khi nhap: ";
		for(int i=0; i<n; i++)
	{
		
		cout << M[i] << endl;
	}	
	int k;
	cout << "Nhap K muon tim: ";
	cin >> k;
	bool kq = false;
	for(int i=0; i<n; i++)
	{
		if(M[i]==k)
		{
			kq = true;	
			dem++;
		}
	}
	if(kq == true)
	{	
		cout << "Tim thay phan tu: " << k << endl;
		cout << "Co " << dem << " lan xuat hien trong mang.";
	}
	else
	{
		cout << "Khong co phan tu do!!!";	
	}
	return 0;
}
