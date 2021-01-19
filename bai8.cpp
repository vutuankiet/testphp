#include<iostream>
using namespace std;
int main(){
	int ngay,thang,nam,ngaymax;
	cout << "nhap ngay ";
	cin >> ngay;
	cout << "nhap thang ";
	cin >> thang;
	cout << "nhap nam ";
	cin >> nam;
	if (nam<0||thang<0||thang>12||ngay>31||ngay<0){
		cout << "ngay khong hop le!" << endl;
	}if(ngay<=ngaymax){
	 cout << "ngay hop le!" << endl;}
	switch(thang){
	
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		ngaymax=31;
		cout << "thang co 31 ngay ";	
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		ngaymax=30;
		cout << "thang co 30 ngay ";
		break;
		case 2:
		if((nam%4==0&&nam%100!=0)||(nam%400==0)){
			ngaymax=29;
			cout << "nam nay khong la nam nhuan ";
		}
		else{
			ngaymax=28;
			cout << "nam nay la nam nhuan ";
		}
		
		break;
	}}
