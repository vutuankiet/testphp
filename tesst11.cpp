#include<iostream>
#include<math.h>
using namespace std;
int a,b;
int nhap()
{
	cout<<"nhap a = ";
	cin >> a;
	cout << "nhap b =";
	cin >>b;
}
int tong()
{	
	cout<<"tong la "<<a+b;
}
int hieu()
{
	cout<<"hieu la "<<a-b;
}
int chon()
{
	int chon1;

test: cout<<" nhap vao lua chon cua ban : \n1. Tinh tong \t\t\t\t 2. Tinh hieu \n ban chonn ? "<<endl;
cin>>chon1;
switch (chon1){
	case 1:
		tong();
		break;
		case 2: 
		hieu();
		break;
		default : 
		cout<<" ban nhap sai roi !";
		goto test;
}
	
}
int main()
{
	nhap();
	chon();
}
