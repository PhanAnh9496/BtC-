#include <iostream>
#include <math.h>
using namespace std;

void PTB2(int a, int b, int c);
int main(int argc, char** argv) {
	cout << "Phuong trinh 1: " << endl;
	PTB2(5,7,-12);
	cout << "\nPhuong trinh 2: " << endl;
	PTB2(1,-4,2);
	cout << "\nPhuong trinh 3: " << endl;
	PTB2(1,-4,4);
	cout << "\nPhuong trinh 4: " << endl;
	PTB2(1,1,1);
	cout << "\nPhuong trinh 5: " << endl;
	PTB2(0,4,3);
	return 0;
}
void PTB2(int a, int b, int c)
{
	double delta,  x1,  x2, x;
	if(a==0)
	{
		if(b==0 && c==0)
		{
			cout << "\nPhuong trinh co vo so nghiem"<< endl;
		}
		else if((b!=0 && c==0) || (b==0 && c!=0))
		{
			cout << "\nPhuong trinh co vo nghiem"<< endl;
		}
		else
		{
			x = -c*1.0/b;
			cout << "\nPhuong trinh co mot nghiem." << x << endl;
		}
	}
	else
	{
		delta = (double)(pow(b,2)-4*a*c);
		if(delta < 0)
		{
			cout << "\nPhuong trinh vo nghiem."<< endl;
		}
		else if(delta == 0)
		{
			x = (double)-b/(2*a);
			cout << "\nPhuong trinh co nghiem kep: \nx = " << x << endl;
		}
		else
		{
			x1 = (double)(-b+sqrt(delta))/(2*a);
			x2 = (double)(-b-sqrt(delta))/(2*a);
			cout << "\nPhuong trinh co 2 nghiem phan biet: " <<endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
}
