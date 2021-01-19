#include<iostream>
using namespace std;
int main(){
	int km,tien;
	cout << "so km di duoc la ";
	cin >> km;
	if (km<=0){
		cout << "xe chua chuyen banh ";
	} 
	switch(km){
		case 1:
			km=13000;
			cout << "so tien phai tra la " << km;
	 	break;
	 	default:
		if(km>1||km<30){
			tien=12000;
			km=km*tien;
			cout << "so tien phai tra la " << km;
		}
		
		else{
			tien=11000;
			km=km*tien;
			cout << "so tien phai tra la " << km;
		}
			
	}
	
}

