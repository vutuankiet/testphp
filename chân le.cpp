#include<iostream>
using namespace std ;
int main()
{
	int so;
	cout << "nhap so: ";
	cin >> so;
	switch(so %2 )
	{ case 0:
	cout << so << " la so chan " << endl;
	break;
	case 1:
	cout << so << " la so le " << endl;
	break; 
	}
	return 0; 
 } 
