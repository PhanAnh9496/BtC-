#include <iostream>
#include <string.h>
using namespace std;

struct Address
{
	char HomeNum[45];
	char County[45];
	char Street[45];
	char Province[45];
};
struct Student
{
	char Name[45];
	char CodeStu[10];
	bool Sex;
	Address HomeAdd;
	Address SchAdd;
}teo, ty;
int main(int argc, char** argv) {
	strcpy(teo.Name,"Nguyen Van Teo");
	teo.Sex = false;
	strcpy(teo.CodeStu,"B14DCPT999");
	cout << "---------------------\n";
	cout << "MaSv: " << teo.CodeStu << endl;
	cout << "TenSv: " << teo.Name << endl;
	cout << "GioiTinh: " << (teo.Sex == true?"Nu":"Nam") <<endl;
	cout << "---------------------\n";
	Student Cuoi;
	strcpy(Cuoi.Name,"Do Van Cuoi");
	strcpy(Cuoi.CodeStu,"B14DCPT888");
	Cuoi.Sex = true;
	cout << "---------------------\n";
	cout << "MaSv: " << Cuoi.CodeStu << endl;
	cout << "TenSv: " << Cuoi.Name << endl;
	cout << "GioiTinh: " << (Cuoi.Sex == true?"Nam":"Nu") <<endl;
	cout << "---------------------\n";
	
	
	return 0;
}
