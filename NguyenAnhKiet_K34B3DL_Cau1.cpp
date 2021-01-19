#include<iostream>
#include<math.h>
using namespace std;
int x,s;
int nhap()
{
	cout<<"moi nhap nam sinh: ";
	cin>>x;
}
int tinhtuoi()
{
	if(x>0&&x<2021)
	{
		cout<<"nam sinh hop le"<<endl;
		int s= 2020-x;
		cout<<"Ban sinh nam " << x << " nam nay ban " << s <<" tuoi"<<endl;
		if(x%2==0)
		{
			cout<< "nam sinh cua ban la chan"<<endl;
		}else cout<<"nam sinh cua ban la le"<<endl;
	}else cout<<"nam sinh khong hop le"<<endl;
}
int main()
{
	nhap();
	tinhtuoi();
} 
