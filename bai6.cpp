#include<iostream>
using namespace std;
int main(){
	int ngay, thang, nam;
	cout << "nhap ngay ";
	cin >> ngay;
	cout << "nhap thang ";
	cin >> thang;
	cout << "nhap nam ";
	cin >> nam;
	if (nam<0||thang<0||thang>12||ngay>31||ngay<0){
		cout << "ngay khong hop le!";
	}else
	cout << nam << " nam " << thang << " thang " << ngay << " ngay " << endl; 
	cout << "ngay hop le!";
}
