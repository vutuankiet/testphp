#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int n[8];
	cout << "nhap cac so a,b,c,d,e,f,g,h: ";
	for (int i = 0; i < 8; i++)
	{
		cin >> n[i];
	}
	int max = n[0];
	for (int i = 0; i < 8; i++)
	{
		if (max < n[i])
		{
			max = n[i];
		}
	}
	cout << "so lon nhat = " << max << "\n";
	int min = n[0];
	for (int i = 0; i < 8; i++)
	{
		if (min > n[i])
		{
			min = n[i];
		}
	}
	cout << "so nho nhat = " << min << "\n";
	sort(n, n + 8);
	int t2 = n[0], h2 = n[0];
	for (int i = 1; i < 3; i++)
	{
		t2 = t2 + n[i];
		h2 = h2 - n[i];
	}
	reverse(n, n + 8);
	int t1 = n[0], h1 = n[0];
	for (int i = 1; i < 3; i++)
	{
		t1 = t1 + n[i];
		h1 = h1 - n[i];
	}
	cout << "tong 3 so dau tien nho nhat = " << t2 << "\n"; 
	cout << "tong 3 so dau tien lon nhat = " << t1 << "\n";
	cout << "hieu 3 so dau tien nho nhat = " << h2 << "\n";
	cout << "hieu 3 so dau tien lon nhat = " << h1 << "\n";
	int tm = n[0], hm = n[0], tx = n[0];
	for (int i = 1; i < 8; i++)
	{
		tm = tm + n[i];
		hm = hm - n[i];
		tx = tx * n[i];
	}
	cout << "tong tat ca cac so = " << tm << "\n";
	cout << "hieu tat ca cac so = " << hm << "\n";
	cout << "tich tat ca cac so = " << tx << "\n";
}

