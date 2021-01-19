#include<iostream>
using namespace std;
int n;
int main(){
	int *p;
	int a;
	p=&a;
	cout<<" nhap a ";
	cin>>a;
   int sum = a++ + (*p) - --a+(*p)--;
    cout<<" tong la :"<<sum<<endl;
    cout<<" nhap vao n:";
	cin>>n;
  nhapso();
}
int nhapso(){
	if (n==0){
		return 0;
	}
cout<<" hello word!";
	return nhapso(n-1);
}

