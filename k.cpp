#include<iostream>
	
	using namespace std;
	
	int main(){
		int a[100];
	
	for (int i=1 ; i<=5; i++){
		cout << "nhap gia tri thu " << i << " : " ;
		cin >> a[i];
	}
	for (int i=1 ; i<=5; i++)
	{
	
		if(a[i]%5 == 0)
		cout << a[i]+2 << "\n" ;
		else
		cout << a[i]-2 << "\n" ;
	}
	}
