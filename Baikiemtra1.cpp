#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	do
	{
		cout << "nhap n: ";
		cin >> n;
		if (n <= 0 || n >= 30)
		{
			cout << "so khong hop le, nhap lai n!\n";
		}
	} while (n <= 0 || n >= 30);
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n% i == 0)
		{
			s = s + i;
		}
	}
	cout << "tong tat ca uoc so cua n = " << s;
}
