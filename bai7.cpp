#include<iostream>
using namespace std;
int main(){
	int gio,phut,giay;
	cout << "nhap gio ";
	cin >> gio;
	cout << "nhap phut ";
	cin >> phut;
	cout << "nhap giay ";
	cin >> giay;
	if (giay<0||phut<0||phut>60||gio>12||gio<0){	
		cout << "thoi gian khong hop le!";
	}else 
	cout << gio << " gio  " << phut << " phut " << giay << " giay " << endl;
	cout << "thoi gian hop le!";
}
