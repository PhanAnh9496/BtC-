#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
	char title[50];
	char author[50];
	int pages;
	float price;	
};

int main(int argc, char** argv) {
	
	Book b;
	cout << "Nhap ten sach: ";
	gets(b.title);
	cout << "Nhap tac gia: ";
	gets(b.author);
	cout << "Nhap so trang: ";
	cin >> b.pages;
	cout << "Nhap gia: ";
	cin >> b.price;
	
	Book a = b;
	cout << "Ten sach: " << a.title << endl;
	cout << "Ten tac gia: " << a.author << endl;
	cout << "So trang: " << a.pages << endl;
	cout << "Gia sach: " << a.price << endl;
	a.price = 29.99;
	cout << "Gia cua b.price: " << b.price;	
	return 0;
}
