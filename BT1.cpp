#include<iostream>
#include<math.h>
using namespace std;
int d,r,dt,cv,R,a,b,c,n,i;
long e,f;
double st,ct,p,stg,S,h;
int nhap()
{
	cout<<"__Nhap vao du lieu cua bai 1__"<<endl; 
	cout<<"nhap chieu dai d = ";
	cin>>d;
	cout<<"nhap chieu rong r = ";
	cin>>r;
	cout<<"nhap ban kinh R = ";
	cin>>R;
	cout << "nhap lan luot cac canh cua tam giac ";
	cin >> a >> b >> c;
	cout << "nhap vao so de tim UCLN va BCNN ";
    cin >> e >> f;
    cout << "uoc cua n = ";
    cin >> n ;
}
int tinh()
{   
	dt=d*r; cv=2*(d+r); st=R*R*3.14; ct=2*R*3.14;
	if(d,r,R>0){
	cout << "dien tich hinh chu nhat = "<< dt <<endl;
	cout << "chu vi hinh chu nhat = "<< cv <<endl;
	cout << "dien tich hinh tron = "<< st <<endl;
	cout << "chu vi hinh tron = "<< ct <<endl;
}else{
	cout<<"d,r,R khong nhan cac gia tri am!"<<endl;
}
}
int tamgiac()
{	p=(a+b+c)/2;
	S=p*(p-a)*(p-b)*(p-c);	
	stg=sqrt(S);
	h=2*stg/a;
	if(a,b,c>0){
		cout << "day la hinh tam giac!"<<endl;
	    cout << "dien tich tam giac = "<<stg<<endl;
		cout << "chieu cao tam giac = "<<h<<endl;
	}
		else{
		 cout << "day khong la tam giac!"<<endl;}
}
long ucln(long e,long f)
	
		{
		long k; 
	while (e%f != 0)
    {
        k = e%f;
        e = f;
        f = k;
    }return f; 
}
int uoc()
{
    int t=0;
    for(i=1;i<=n;i++){
    	if(n%i==0){
    	t=t+i;	} 
}cout << "tong cac uoc = " << t << endl;
}
int TG() 
{
	int gio,phut,giay;
	cout <<"__Bai2.2 kiem tra thoi gian__"<<endl; 
	cout << "nhap gio ";
	cin >> gio;
	cout << "nhap phut ";
	cin >> phut;
	cout << "nhap giay ";
	cin >> giay;
	if (giay<0||phut<0||phut>60||gio>12||gio<0){	
		cout << "thoi gian khong hop le!";
	}else 
{	cout << "thoi gian hop le!"<<endl; 
	cout << gio << " gio  " << phut << " phut " << giay << " giay " << endl;
}
}
int main()
{	
	nhap();
	tinh();
	tamgiac();
    cout << "UCLN : "<<ucln(e,f)<<endl;
    cout << "BCNN : "<<e*f/ucln(e,f)<<endl;
    uoc();
	TG(); 
}
