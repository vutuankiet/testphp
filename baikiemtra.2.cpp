#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,s=0;
	cout<< " nhap n = ";
	cin>> n;
	do{
	
		if(n<=0)
		{
			cout<< "so khong hop le , nhap lai n :";
			cin>> n;
		}
    }
    while(n<=0);
    for(i=1;i<=n;i++)
			{
				if(i>=0)
				{
					s=s+pow(i,2);
				}
			}
		    cout<<" tong = "<<s;	
		}
