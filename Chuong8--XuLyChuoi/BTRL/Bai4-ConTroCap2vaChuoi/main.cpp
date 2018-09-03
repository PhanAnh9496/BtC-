#include <iostream>
#include <string.h>
using namespace std;

void NhapThongTin(char **&DsSv, int n);
void XuatThongTin(char **DsSv, int n);
void ChuanHoa(char **&DsSv, int n);
int main(int argc, char** argv) {
	int n;
	cout << "Nhap so sinh vien: ";
	cin >> n;
	fflush(stdin);
	char **DsSv = new char*[n];	
	NhapThongTin(DsSv,n);
	fflush(stdin);
	ChuanHoa(DsSv,n);
	cout << "\nDanh sach sinh vien: " << endl;
	XuatThongTin(DsSv,n);
	return 0;
}

void NhapThongTin(char **&DsSv, int n)
{

	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		DsSv[i] = new char[255];
	}
	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		cout << "Sinh vien thu " << i+1 << " : ";
		gets(DsSv[i]);
	}
}
void XuatThongTin(char **DsSv, int n)
{
	for(int i=0; i<n; i++)
	{
		cout << "Sinh vien thu " << i+1 << " : ";
		puts(DsSv[i]);
		
	}	
}
void ChuanHoa(char **&DsSv, int n)
{
	for(int i=0; i<n; i++)
	{
		int lenElement = strlen(DsSv[i]);
		for(int j=0; j<lenElement; j++)
		{
			if(j==0)
		    {
		        if(islower(DsSv[i][j]))
		        {
		        	DsSv[i][j]=toupper(DsSv[i][j]);
				}       
		    }
		    else
		    {
		        if(DsSv[i][j]!=' ')
		        {
		            if(isupper(DsSv[i][j]))
		            {
						DsSv[i][j]=tolower(DsSv[i][j]);
					}
		        }
		        else
		        {
		            j++;
		            if(islower(DsSv[i][j]))
		            {    
						DsSv[i][j]=toupper(DsSv[i][j]);
					}
		        }
		    }		
		}	
	}
}
















