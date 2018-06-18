#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	double donGia, tieuThu;
	const int gia1 = 600; 
	const int gia2 = 700;
	const int gia3 = 900;
	const int gia4 = 1100;
	cout << "Nhap so Kwh dien tieu thu: ";
	cin >> tieuThu;
	if (tieuThu <= 100)
	{
		donGia = tieuThu*600;
		cout << "Tien dien: " << donGia;
	}
	else if(tieuThu >= 101 && tieuThu <= 150)
	{
		donGia = 100*gia1 + (tieuThu - 100)*gia2;
		cout << "Tien dien: " << donGia;
	}
	else if(tieuThu >= 151 && tieuThu <= 200)
	{
		donGia = 100*gia1 + 50*gia2 + (tieuThu - 150)*gia3 ;
		cout << "Tien dien: " << donGia;
	}
	else if(tieuThu >= 201)
	{
		donGia = 100*gia1 + 50*gia2 + 50*gia3 + (tieuThu - 200)*gia4;
		cout << "Tien dien: " << donGia;
	}
	
	return 0;
}
