#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
void getrandom(int A[], int n){
	for(int i=0;i<n;i++){
		A[i]=rand()%(1000);
	}
}
void showarray(int A[], int n){
	for(int i=0;i<n;i++){
		cout << A[i] << " ";
	}
	cout<<endl;
}/*
int sapxep(int A[],int n)
{
	for(int i=0;i<n-2;i++)
{
	for(int j=n-1;j>i;j--)
	{
		if(A[j]<A[j-1])
		{
			int swap=A[j];
			A[j]=A[j-1];
			A[j-1]=swap;
		}
	}
}
}*/
int luachon(int A[],int n)
{
	for(int i=0;i<=n-2;i++)
	{
		int postmin=i;
		for(int j=i+1;j<=n-1;j++)
		{
			int min=A[i];
			if(A[postmin]>=A[j])
			{
				postmin=j;
			}
			else if (postmin !=i )
			{
				int swap1 = A[postmin];
				A[postmin]=A[i];
				A[i]=swap1;
			}
		}
		cout << A[postmin]<<" ";
	}
}
int main(){
	int A[100];
	int n=0;
	
	cout<<"nhap n: ";
	cin>>n;
			
 getrandom(A,n);
 /*sapxep(A,n);*/
 cout<<endl;
 luachon(A,n);
 showarray(A,n);
 	return 0;
}
