#include<iostream>
#include<math.h>
using namespace std;
int GBD,GKT,somay,t;
int nhap()
{
	cout<<"so may thue la ";
	cin>>somay;
	cout<<"";
}
int tinh()
{
	if(GBD>=6&&GKT<=21){
		if(GBD<=17.30){
			t=25000*somay;
		}
		if(GBD>=17.30){
			t=30000*somay;
		}
	}
}
int main()
{
	
}
