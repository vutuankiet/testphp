#include<iostream>
#define MAX 100
using namespace std;
void nhapmang(int A[MAX],int n){
	for(int i=0;i<n;i++){
	cout<<"nhap cac phan tu mang thu [A"<<i+1<<"] = ";
	cin>>A[i];
	}
}
void inmang(int A[MAX],int n)
{
	cout<<"danh sach cac phan tu cua mang: ";
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
void chan(int A[MAX],int n)
{
	cout<<"danh sach cac phan tu chan trong mang: ";
	for(int i=0;i<n;i++)
	{
		if(A[i]%2==0)
		{
		cout<<A[i]<<" ";
		}
	}
}
void sosanh(int A[MAX],int n,int x)
{
	cout<<"nhap x = ";
	cin>>x;
	cout<<"danh sach cac phan tu lon hon "<<x<<" la: ";
	for(int i=0;i<n;i++)
	{
		if(A[i]>x)
		{
			cout<<A[i]<<" ";
		}
	}
}
bool ktsnt(int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(n%i==0)
		{
			d++;
		}
	}
	return (d==2);

}
int demsnt(int A[MAX],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ktsnt(A[i]) == true)
		{
			dem++;
		}
	}
	return dem;

}
void sapxeptangdan(int A[MAX],int n)
{    cout<<"mang sau khi sap xep tang dan "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				A[i]=A[i]+A[j];
				A[j]=A[i]-A[j];
				A[i]=A[i]-A[j];
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
int main()
{
	int A[MAX],n,x;
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
	inmang(A,n);
	cout<<endl;
	chan(A,n);
	cout<<endl;
	sosanh(A,n,x);
	cout<<endl;
	sapxeptangdan(A,n);
	cout<<endl;
		cout<<"danh sach so nguyen to trong mang la: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(ktsnt(A[i]) == true)
		{
			cout<<A[i]<<" ";
		}
	}
	cout<<endl;
	cout<<"dem so nguyen to trong mang la: "<<demsnt(A,n)<<endl; 
	
}
