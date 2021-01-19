#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << "nhap lan luot cac canh cua tam giac ";
	cin >> a >> b >> c;
	if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
		cout << "day la tam gac vuong ";
	
	if(a==b&&b==c){
	cout << "day la tam giac deu ";
	
	if(a==b||b==c||c==a){
		cout << "day la tam giac can ";
	 
	if(a*a>b*b+c*c||b*b>a*a+c*c||c*c>a*a+b*b){
		cout << "day la tam giac tu ";
	} 
	}
	}
	}
		else cout << "day khong la tam giac ";
}
