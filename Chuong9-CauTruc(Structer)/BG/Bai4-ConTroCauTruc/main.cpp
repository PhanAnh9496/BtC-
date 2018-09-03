#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien 
{
	int ma;
	char ten[255];
};

int main(int argc, char** argv) {
	
	SinhVien Teo;
	Teo.ma=113;
	strcpy(Teo.ten, "Teo");
	cout<< "Thong tin cua Teo: \n";
	cout << Teo.ma << "\t" << Teo.ten;
	
	SinhVien *pTeo = &Teo;
	cout << "\nThong tin cua Teo theo pointer: \n";
	cout << pTeo->ma << "\t" << pTeo->ten;
	
	pTeo->ma = 103;
	strcpy(pTeo->ten,"Teo 2");
	cout << "\nThong tin cua Teo theo pointer gan gia tri: \n";
	cout << Teo.ma << "\t" << Teo.ten;
	
	Teo.ma=203;
	strcpy(Teo.ten,"Teo 3");
	cout << "\nThong tin cua Teo theo pointer gan gia tri: \n";
	cout << pTeo->ma << "\t" << pTeo->ten;
	
	SinhVien *pTy;
	pTy = new SinhVien;
	pTy->ma = 114;
	strcpy(pTy->ten,"Ty");
	cout<< "\nThong tin cua Ty: \n";
	cout << pTy->ma << "\t" << pTy->ten;
	
	SinhVien *pTy2 = pTy;
	pTy2->ma = 214;
	strcpy(pTy2->ten,"Ty 2");
	cout<< "\nThong tin cua Ty2: \n";
	cout << pTy2->ma << "\t" << pTy2->ten;
	
	
	
	
	
	
	
	
	return 0;
}
