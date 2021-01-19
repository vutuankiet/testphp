#include<iostream>
using namespace std;
int main(){
	int n,i,gt;
	do{
		cout << "nhap vao mot so nguyen duong ";
		cin >> n;
		if(n<0&&n>=100)
		cout << "nhap sai, hay nhap lai! "<< endl;
		
	}
	while(n>0||n<=100);
	for(i=1;i<n;i++){
	gt=gt*i;
	cout << "giai thua cua n la: " << gt;
}
}
