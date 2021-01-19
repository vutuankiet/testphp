#include<iostream>
#include<math.h>
using namespace std;
int tong(int a,int b)
{

	int s= a+b;
	return s;
	
}

int main()
{
	int a,b,kq,s;
	cout <<"nhap a ";
	cin >> a;
	cout <<"nhap b ";
	cin >> b;
	kq= tong(a,b);
	cout << "tong la : "<< kq;
}
