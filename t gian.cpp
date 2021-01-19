#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double a,b,c,delta;
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";	
	cin >> b;
	cout << "nhap c = ";
	cin >> c;
	delta = pow(b,2)-(4*a*c);
	
		if(delta>0){
			
			cout << "pt co 2 nghiem pb " << "x1 = " << (-b+sqrt(delta))/(2*a) << " x2 = " << (-b-sqrt(delta))/(2*a);
		}
		if (delta<0){
		cout << "pt vo nghiem ";}
		if (delta==0){
		
		cout << "pt co nghiem kep " << -b/(2*a);
		}
	}

	
	

