#include<iostream>
#include<math.h>
#include <conio.h>
using namespace std;
int seach(int arr[], int n, int x){
 for(int i=1;i<n;i++)
 	if(arr[i] == x)
 	return i;
 
 	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int x;
	cout <<"nhap phan tu can tim: ";
	cin>>x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result =seach(arr,n,x);
	(result == -1)  ?cout<<"khong tim thay phan tu "<<x<<" trong S!"
					:cout<<"tim thay phan tu "<<x<<" tai vi tri "<<result;
					return 0;
} 
