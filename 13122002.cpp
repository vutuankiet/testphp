#include<math.h>
#include<iostream>
#include<stdio.h>
#define MAX 100
using namespace std;
void nhap(int a[MAX],int n){
	for(int i=0;i<n;i++){
	cout<<"Nhap vao phan tu thu A["<<i+1<<"]:= ";
	cin>>a[i];
}
}
void xuat(int a[MAX],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
/*int giaithua(int a[MAX],int n){
	if(n==1){
		return 1;
	}
	return giaithua*giaithua(a[n-1]);
}
int tonggiaithua(int a[MAX],int n){
	int tong=0;
	if(n==1){
		return 1;
	}
	return tong+giaithua(a[n-1]);
}*/ //phuong phap tinh giai thua bang de quy !
void giaithua1(int a[MAX],int n){
	int giaithua=1,tong=0;
	int i=1;
	while(i<=n){
		giaithua*=((a[i]-1)*a[i]);
		tong+=giaithua;
		i++;
		if(i ==n){
			break;
		}
	}
	cout<<tong;
}
void find(int a[MAX],int n){
	int k,dem;
	cout<<" NHAP VAO SO BAN MUON TIM KIEM: ";
	cin>>k;
	for(int i=0;i<n;i++){
		if(k==a[i]){
			cout<<" k co xuat hien va vi tri la :"<<i+1<<endl;
			dem++;
		}
	}
	cout<<" So lan xuat hien la :"<<dem<<endl;
}
void bubble(int a[MAX],int n){
	for(int i=0;i<n-1;i++){
		for (int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int tmp=a[j];
				a[j]=a[j-1];
				a[j-1]=tmp;
			}
			cout<<a[j]<<" ";
		}
	}
}
int main(){
	int n,a[MAX];
	do{
		system("cls");
		cout<<" NHAP VAO MOT SO NGUYEN DUONG N: ";
		cin>>n;
		if(n<=0){
			cout<<" false! Nhap lai !"<<endl;
		}
	}while(n<=0);
	nhap(a,n);
	cout<<endl;
	cout<<" Mang vua nhap : ";
	xuat(a,n);
	cout<<endl;
	cout<<" mang sau khi sap xep la: ";
	bubble(a,n);
	/*
	int s=tonggiaithua(a,n);
	cout<<"Tong cac giai thua la: "<<s;
	*/
	cout<<" Tong cac giai thua la :";
	giaithua1(a,n);
	cout<<endl;
	find(a,n);
	cout<<endl;

}
