#include<iostream>
using namespace std;
int sum(int n) {
	if (n == 1 ) return 1 ;
	if (n %2 == 0) {
		return sum(n-1); 
	} else { return n + sum(n-1);
	 
	} }
	int main()
	{
int n; 
cout << "nhap n = "; 
	cin >> n ; 
	cout <<"tong = " << sum(n);
	return 0; }

   
  
 
