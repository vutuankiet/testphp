#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,delta;
	cout << "nhap a ";
	cin >> a; cout << endl;
	cout << "nhap b "; cin >> b; 
	cout << endl;
	cout << "nhap c " ; cin >>c;

	if (a==0){
		

	if (b==0){
		if (c==0)
		cout << "pt vo so nghiem ";
	}
	else{
		cout << "pt vo nghiem ";
	}
	} 
	
	{	delta = pow(b,2)-3*a*c ;
		cout << "delta = " << delta << " \n";
		if (delta > 0){
			cout << "phuong trinh co 3 nghiem phan biet ";
		}
		if (delta < 0){
			cout << "phuong trinh vo nghiem ";
		}
	}
	
}
