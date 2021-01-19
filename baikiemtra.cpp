#include <iostream>
using namespace std;
int main(){
	int n,i,s=0;
	cout << "nhap n= ";
	cin >> n;
	if(n>=0&&n<=30){
		for(i=1;i<n;i++){
			if(n%i==0&&i%2==0){
				
				s=s+i;
				cout << i << " ";
			}
		}
			cout << "tong cac uoc la: " << s;
}
else cout << "yeu cau nhap lai! ";
}
	
