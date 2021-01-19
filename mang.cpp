#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<string>
#define MAX 100
using namespace std;
int A[MAX],n,s=0,i;
void nhapmang(int A[MAX],int n){
	for(i=1;i<=n;i++){
	cout<<"nhap cac phan tu mang thu [A"<<i<<"] = ";
	cin>>A[i];
	}
}
int tong()
{
	for(i=0;i<=n;i++)
	{
		s+=A[i];
	}
	cout<<"tong cac phan tu mang la "<<s;
}
int hieu()
{
	for(i=1;i<=n;i++)
	{
		s-=A[i];
	}
	cout<<"hieu cac phan tu mang la "<<s;
}
int chon()
{
	int chon1;
lai:cout << "nhap lua chon cua ban:\n1.tong cac phan tu mang \t\t\t\t2.hieu cac phan tu cua mang "<<endl;
	cin>>chon1;
	switch(chon1){
		case 1:
			tong();
			break;
		case 2:
			hieu();
			break;
		default: cout<<"moi ban nhap lai!";
		goto lai;	
	}
}
int main()
{
	int A[MAX],n;
	do{
		cout<<"nhap vao so luong phan tu ";
		cin>>n;
		
		if(n<=0||n>100)
		{
			cout <<"so luong phan tu vua nhap khong hop le! vui long nhap lai! "<<endl;
		}
		}
		while(n<=0||n>100);	
	cout<<"\a";
	nhapmang(A,n);
	chon();
	return 0;
}
