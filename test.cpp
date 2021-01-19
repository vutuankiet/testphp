#include<iostream>
using namespace std;
int main()
{
	int A[100]; int *p;
	int n,i;
	cout << "nhap n: ";
	cin >> n ;
	p=&n;
	*p=9;
	for(i=1;i<=n;i++)
	{
		cout << i;
		cout << " w3schools";
		cout<< " study" << endl;
		
	}
}
