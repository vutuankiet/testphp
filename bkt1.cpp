#include <stdio.h>
#include<iostream> 
using namespace std; 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if(haveSwap == false){
            break;
        }
    }
}
void Selectionsort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < n; j++)
			if (arr[max]>arr[j])
				max = j;
			swap(arr[i], arr[max]);
	}
}
void xuatArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        {
		cout<<" "<<arr[i];
		}
		cout<<endl; 
    for (i=size; i >0; i--)
    	{
        cout<<" "<<arr[i];
		}
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    Selectionsort(arr, n);
    cout << "Sorted array: " << endl; 
    xuatArray(arr, n);
    return 0;
}
