#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,gt=1,p=1,t=0,s=0;
	cout<<"nhap n= ";
	cin>>n;
	if(n>=10){
		for(int i=1;i<=n;i++)
		{
			gt=gt*i;
			p=p*i;
			if(i%2==1)
			{
				s=s+i;
			}
		}
		for(int i=1;i<=n+1;i++)
		{
			t=t+pow(n-i,2);
		}
		cout <<"giai thua cua n la: "<<gt<<endl;
		cout <<"tich cac so tu 1 -> n la: "<<p<<endl;
		cout <<"yeu cau 3: "<<t<<endl;
		cout <<"tong cac so le tu 1 -> n la: "<<s<<endl;
	}
	else cout<<"khong thoa man dieu kien n>=10!";
}
