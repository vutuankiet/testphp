#include<iostream>
using namespace std;
int main(){
	int n,i,s = 0;
	cout << "nhap n = ";
	cin >> n;
	
if(n>0){
	i=1;
	while(i<=n){
		if(i%2!=0){
		
		s=s+i;
	    cout << i << " " ;	
	    
	}
		i++;
	} 
	cout << "tong la: " << s ;
}if(n<=0) {
	     cout <<"khong hop le! "; }
} 
