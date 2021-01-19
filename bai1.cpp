#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout << " nhap lan luot a b c d  ";
	cin >> a >> b >> c >>d ;
	if(a>b&&a>c&&a>d){
		cout << "max la a ";
		if (b>a&&b>c&&b>d){
			cout << " max la c ";
			if (c>a&&c>b&&c>d){
			
			cout << "max la c "	;
		
			}
		}
	}
		else cout << " max la d " ;
}
