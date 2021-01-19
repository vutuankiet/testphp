#include<iostream>
using namespace std;
int main()
{
	int a,b;

	int d;
	cout << "nhap a,b:";
	cin >> a >> b;
	cout << "nhap diem :";
	
	switch (a)
	{	
		case 1: 
		if(d<5){
			d=(a+b)/2;
		cout << " trung binh " ;
		}
		; break;
		default : cout << "?";
	}
}
