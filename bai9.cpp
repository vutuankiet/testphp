#include<iostream>
using namespace std;

int main()
{
	int a,dai,rong,cv,dt,bk,b,c,d,h;
	cout << "canh hinh vong = "<<endl;
	cin >> a;
	cout << "chieu dai = "<<endl;
	cin >> dai;
	cout << "chieu rong = "<<endl;
	cin >> rong;
	cout << "canh thu nhat = "<<endl;
	cin >> c;
	cout << "canh thu hai = "<<endl;
	cin >> d;
	cout << "canh huyen = "<<endl;
	cin >> b;
	cout << "chieu cao h = "<<endl;
	cin >> h;
	cout << "ban kinh hinh tron = "<<endl;
	cin >> bk;
	if(a>0){
		cout << "dien tich hinh vong la " << a*a << endl;
		cout << "chu vi hinhf vuong la " << 4*a << endl;
	}
	if(dai>0&&rong>0){
		cout << "dien tich hinh chu nhat la " << dai * rong << endl;
		cout << "chu vi hinh chu nhat la " << (dai + rong)*2 << endl;
	}
	if(b>0&&h>0&&c>0&&d>0){
		cout << "dien tich hinh tam giac la " << (b*h)/2 << endl;
		cout << "chu vi hinh tam giac la " << b+c+d << endl;
	}
	if(bk>0){
		cout << "dien tich hinh tron la " << 3.14*bk*bk << endl;
		cout << "chu vi hinh tron la " << 2*bk*3.14;
	}
}
