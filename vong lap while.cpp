#include<iostream>
using namespace std;
int main(){
	int i;
	int n,s;
	s=12345678;
	cout << "nhap pastword ";
	cin >> n;
		if(n==s) {
	 cout << "true";}
 else{
 
	i=1;
	while(n!=s){

		cout << "khong hop le ";
		cout << "moi nhap lai ";
		cin >> n;
		if(i==3){
			break;
		}
	i++;	}
		
	}if(n==s){
		cout <<"true";
	}
	 
}


