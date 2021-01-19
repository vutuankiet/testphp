#include<iostream>
#include<math.h>
using namespace std;
int n,s,p=1;
int nhap()
{
	cout << "nhap n: ";
	cin >> n;
	do{
		if(n<0){
			cout << "so khong hop le!" << endl;
		}}
	while(n<0);
}     
int sole()
{
	for(int i=0;i<=n;i++)
	{if(i%2!=0){
	cout <<i << " ";
	} 
	}
	cout << endl;
}
int tong()
{
	for(int i=1;i<=n;i++){
		if(i>0){
		s=s+i;
		}
	}
	cout << "tong cac so tu 1->n la s= "<< s << endl;
}

int tich()
{
	for(int i=1;i<=n;i++){
		if(i>1){
			p=p*i;
		}
	}
	cout << "tich cac so tu 1->n la p= " << p;
}
int main(){
	nhap();
	sole();
	tong();
	tich();
}
