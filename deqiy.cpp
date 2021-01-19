#include<iostream>
#include<math.h>
using namespace std;

int tich(int n)
{
	if(n==1)
	return 1;
	return (tich( n - 1 ) *n);
}
int hieu(int n)

{
	if(n==0)
	return 0;
	return (hieu( n - 1 )-n);
}
int gt(int n)
{
	if(n==1)
	return 1;
	return (n * gt(n - 1));
}
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	cout << "tich la: " << tich(n) << endl;
	cout << "hieu la: " << hieu(n) << endl;
	cout << "giai thua la: " << gt(n);
}
