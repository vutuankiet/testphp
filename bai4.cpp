#include<iostream>
using namespace std;

int main() {

    int n, tram, chuc, donvi, max;
    cout <<"Nhap so nguyen n(gom 3 chu so): ";
    cin >> n;
		tram = n/100;
    	chuc = ((n%100)/10);
    	donvi = (n%10);
    max=tram;
   		 if(chuc>tram && donvi>tram)
    {
   		 if(chuc>donvi)
    			max=chuc;
   		 else
   			 max=donvi;
            }
            else
            {
            if(chuc>tram)
                max=chuc;              
			if(donvi>tram)
                max=donvi;
            }
          if(max==tram)
            cout <<"Chu so lon nhat %d nam o hang tram "<< max;
        else
          if(max==chuc)
            cout << "Chu so lon nhat %d nam o hang chuc " << max;
        else
            cout << "Chu so lon nhat %d nam o hang don vi " << max;
}

