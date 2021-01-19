#include<iostream>

using namespace std;
int main()
{
	int n,s=0;
	cout<<"nhap n: ";
	cin>>n;
	if(n>=0&&n<=30)
	{
		for(int i=1; i<n; i++)
		{
			if(n%i==0)
			{	
				s=s+i;
				cout <<i<<" "<<endl;		
			}
		}
			cout<<"tong cua cac uoc la: "<<s<<endl;
	}
	else
	cout<<"Nhap sai!, Thoat chuong trinh !";
}
			
