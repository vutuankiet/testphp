#include<iostream>
#include<stdio.h>
using namespace std;
int t,n;
int nhap(){
	cout<<"moi nhap chuc nang"<<endl;
	cout<<"1.doi sang USD"<<endl;
	cout<<"2.doi sang EURO"<<endl;
	cout<<"3.doi sang bang anh"<<endl;
	cout<<"4.doi sang nhan dan te trung quoc"<<endl;
	cout<<"5.doi sang SINGAPORE"<<endl;
	cin>>n;
}
int doitien(){
	if(n>0){ cout<<"moi nhap so tien: ";
			 cin>>t;
		switch(n){
			if(t>0){
			case 1: {
				cout<<"doi sang USD: "<<t*0.0000431315<<" (USD)";
				break;
			}
			case 2: {
				cout<<"doi sang EURO: "<<t*0.0000363954<<" (EUR)";
				break;
			}
			case 3: {
				cout<<"doi sang bang anh: "<<t*0.0000324094<<" (GBP";
				break;
			}
			case 4: {
				cout<<"doi sang nhan dan te trung quoc: "<<t*0.0002844<<" (CNY)";
				break;
			}
			case 5: {
				cout<<"doi sang SINGAPORE: "<<t*0.0000579837<<" (SGD)";
				break;
			}
			default :cout<<"khong hop le!";
			}
			else cout<<"khong hop le!";
		}
		
	}
}
int main(){
	nhap();
	doitien();
} 
