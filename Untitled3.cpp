#include<iostream>
using namespace std;
 int tong(int a[1000], int n){
  if(n == 1) return a[0] ;
  return a[n-1] + tong(a,n - 1);
}
int main(){
	int n ;
	int arr[1000];
	cout << "so phan tu " ;
	cin >> n;
	for (int i = 0; i < n ; i++){
		cout << "nhap so " ;
		cin >> arr[i]; 
	} 
	cout << tong(arr,n);
	return 0; 
} 
 
