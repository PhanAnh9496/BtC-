#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	while(true)
	{		
		int somay = 1 + rand()%100;
		int soLanDoan = 0;
		bool isWin = false;
		cout << "GAME DOAN SO \n";	
		do
		{	
			cout << "\nMay da doan so, moi ban doan so: ";
			int songuoi;
			cin >> songuoi;
			soLanDoan++;
			cout << "Ban doan lan thu: " << soLanDoan << endl;
			if(songuoi == somay)
			{
				cout << "Amazing!!! Ban da doan dung!!! So may = " << somay <<endl;
				isWin = true;
				break;
			}
			else if (songuoi > somay)
			{
				cout << "Ban doan Sai roi!!! So ban doan lon hon roi!!!";
			}
			else
			{
				cout << "Ban doan Sai roi!!! So ban doan nho hon roi!!!";
			}
			if(soLanDoan == 7)
			{
				break;
			}
		}
		while(true);
		if(isWin != true)
		{
			cout << "GAME OVER - So may = " << somay ;
		}
		cout << "\nChoi tiep di thim!!! (c/k)";
		char c;
		cin >> c;
		if(c == 'k')
		{
			break;
		}
	}	
	cout << "BYE";
	return 0;
}
