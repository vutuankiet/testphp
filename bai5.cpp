#include<iostream>
using namespace std;
int main(){
	int n,tram,chuc,donvi,max;
	cout << "nhap so co 3 chu so ";
	cin >> n;
	tram=n/100;
	chuc=(n%100)/10;
	donvi=n%10;
	if(tram>chuc){
		max=tram;
		tram=chuc;
		chuc=max;
	}
	if(tram>donvi){
		max=tram;
		tram=donvi;
		donvi=max;
	}
	if(chuc>donvi){
		max=chuc;
		chuc=donvi;
		donvi=max;
	}
	cout << "so thu tu tang dan la " << tram << "" << chuc << "" << donvi ;
}
