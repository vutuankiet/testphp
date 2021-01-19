#include<iostream> 
#include<math.h> 
using namespace std;
int main(){
	int n,sqr;
	cout << "nhap n ";
	cin >> n;
	sqr=sqrt(n);
	if(sqr*sqr==n){
		cout << n << " day la so chinh phuong "; 
	}else cout << n << " day khong phai la so chinh phuong "; 
}
