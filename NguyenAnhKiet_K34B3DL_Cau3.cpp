#include<iostream>
#include<stdio.h>
#include<math.h>
#define MAX 100
using namespace std;
int x,y,tb,p,n; double s;
void NhapMang (int a[],int n)
{
	cout << "nhap so phan tu mang"<<endl;
	for (int i=0;i<n;i++)
	{
		cout << "A["<<i+1<<"] = ";
		cin >> a[i];
	}
}
void gan(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void sapxeptangdan(int a[], int n)
{
    int i, j;
    cout << endl;
	cout << "Sap xep tang dan: ";
    bool kttd = false;
    for (i=0;i<n-1;i++){
        kttd= false;
        for (j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                gan(a[j],a[j+1]);
                kttd = true; 
            }
        }
        if(kttd==false)
		{
            break;
        }
    }
    for (i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
	cout<<endl;
}
void sapxepgiamdan(int a[],int n)
{
	int ktgd;
	cout << endl;
	cout << "Sap xep giam dan: ";
    for(int i=0;i<n-1;i++)
	{
        for(int j=i+1;j<n;j++)
		{
        	if(a[i]<a[j])
			{
        	    ktgd=a[i];
        	    a[i]=a[j];
        	    a[j]=ktgd;        
        	}
        }
	}
	for(int i=0;i<n;i++)
	{
        cout << a[i]<<" ";
    }
    cout << endl;
}
int TimKiemk(int a[], int n, int Q)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (a[i]== Q)
    	{
	   		return i;
		}
	}
    return -1;
}
void InMang(int a[], int n)
{
	cout << "Danh sach phan tu trong mang: ";
	for (int i=0; i<n ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;	
}
int tinh(int a[],int n)
{
	p=1;s=0;
	for(int i=0;i<n;i++)
	{
		p=p*a[i];
		s=s+a[i];
	}
	cout<<"tich cac phan tu trong mang la: "<<p<<endl;
	cout<<"trung binh cac phan tu trong mang la: "<<s/n<<endl;
}
int chan(int a[],int n)
{
	cout<<"cac so chan trong mang la: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<" "<<a[i];
		}
	}
}
int main()
{
	int a[MAX],n,Q,i;
	do
	{	
		cout << "Nhap vao so luong phan tu: ";
		cin >> n;
		if (n<=1 || n>50)
		{
			cout << "So luong  phantu nhap vao sai, Vui long Nhap lai !"<<endl;
		}
	}
	while (n<=1 || n>=50);
	NhapMang (a, n);
	cout << endl;
	gan(x,y) ;
	InMang(a, n);
	sapxeptangdan(a, n);
	sapxepgiamdan(a, n);
	cout << endl;
	cout << "Vui long tim kiem phan tu K trong mang tren: ";
	cin >> Q;
	cout << endl; 
	int TK = TimKiemk(a, n, Q);
	if (TK != -1) 
  	{
    	cout << "gia tri: "<< Q <<" co xuat hien trong mang tren"<<endl;
    }
  	else 
  	{
    	cout << "gia tri: "<< Q <<" khong xuat hien trong mang tren"<<endl;
  	}
  	tinh(a,n);
  	chan(a,n);
}
