#include<iostream>
using namespace std;
int main(){
	int a,b,c,tang;
	cout << "nhap a = "<< endl;
	cin >> a ;
	cout << "nhap b = "<< endl;
	cin >> b;
	cout << "nhap c = "<< endl;
	cin >> c;
	if(a>b){
		tang=a;
		a=b;
		b=tang;
	}
	if(a>c){
		tang=a;
		a=c;
		c=tang;
	}
	if(b>c){
		tang=b;
		b=c;
		c=tang;
	}
	cout << "so thu tu tang dan " << a <<" "<< b <<" "<< c ;
}
