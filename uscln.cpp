#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;
int n;
void NhapMang (int a[],int n)
{
	cout << ".....Vui long nhap gia tri....."<<endl;
	cout << "nhap so luong phan tu mang: ";
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cout << "A["<<i<<"] = ";
		cin >> a[i];
	}
}
int USCLN(int x, int y) {
    if (y == 0) return x;
    return USCLN(y, x % y);
}
void InMang(int a[], int n)
{
	cout << "Danh sach phan tu trong mang: ";
	for (int i=1; i<=n ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;	
}
int main(){
	int a[MAX],n,x,y;
	NhapMang(a,n);
	InMang(a,n);
    cout << "Nhap so nguyen duong x = ";
    cin >> x;
    cout << "Nhap so nguyen duong y = ";
    cin >> y;
    cout << "USCLN cua " << x << " va " << y << " la: " << USCLN(x, y);
}
