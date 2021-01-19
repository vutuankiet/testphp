#include<iostream>
#include<stdlib.h>
using namespace std;
int d,e,z;
int main() {
	int computer = rand() % (100 - 1 + 1)+ 1;
	int player;
	int chon1, chon2;
	
		cout << "Hello! Chao ban den voi tro doan so :< game hoi bi ez " << endl;
		cout << " Luat choi : \n ban se nhap vao mot so bat ky ! neu dung voi may ban se thang \n neu nhap sai qua 7 lan van choi se ket thuc " << endl;
		cout << "ban da san sang ? \n1.yes \t\t\t\t 2.no " << endl;
		do{
		cin >> chon1;
		switch (chon1) {
		
		case 1:
			do {
				do {
					cout << " bat dau thoi nao !\n hay nhap vao mot so bat ky" << endl;
					cin >> player;
					while (player > 100 && player < 1) {
						cout << "chung ta chi choi den  100" << "hay nhap lai " << endl;
						cin >> player;
					}

					int i = 0, n = 7;
					do {
						cout << "Rat tiec ban doan sai roi " << endl;
						if (player > computer) {
							cout << "so ban lon hon so may \n" << endl;
							cout <<"kho qua cho thang phat ne !"<< computer;
						}
						else
							cout << " so ban nho hon so may \n" << endl;

						cout << "ban hay nhap lai nao ! ban con :" << n - i << "lan nua " << endl;

						cin >> player;


						if (i == n) {
							cout << "ban sai qua nhieu ban co muon choi lai ? \n1.co \t\t\t\t2.khong " << endl;
							cin >> z;
							if (z == 2)
								cout << "cam on ban da choi ";
								exit(1);

						}
						i++;
					} while (player != computer && i <= n);
				} while (z == 1);
					if (player == computer)
						cout << "ban tai that!:<<<<<<<<<<" << "ban co muon choi lai?\n " << "1.co\t\t\t\t2.khong" << endl;
					cin >> d;
					if (d == 2)
						exit(0);
				
			} while (d == 1);
		case 2:
			cout << "sao vay ban so a? hoi lan cuoi co muon choi lai khong ?\n1.co \t\t\t\t2.khong" << endl;
			cin >> e;
			if (e == 2)
				cout << " cam on ban da choi ";
				exit(1);
		default :
			cout << "ban chon sai roi ";
			
			} 
		} while (e == 1);

}
