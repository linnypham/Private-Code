#include<iostream>
#include<cstdlib>
#include<windows.h>  


using namespace std;

int headOrTail() {
	srand(time(nullptr));
	int randHeadOrTail = rand() % 2 + 1;
	return randHeadOrTail;
}

int main() {
	int coin1, coin2, money;
	string ans1, ans2;

	//Input bet.
	cout << "Place your bet:";
	cin >> money;
	cout << endl;

	coin2 = headOrTail();

	do {
		//Input
		do {
			cout << "You currently have $" << money << "." << endl << endl;
			cout << "Head or Tail?" << endl;
			cout << "1 for Head, 2 for Tail: ";
			cin >> coin1;
			if (coin1 != 1 && coin1 != 2) {
				cout << "Invalid Input!!!" << endl << endl;
			}
		} while (coin1 != 1 && coin1 != 2);

		//Convert choices to string
		if (coin1 == 1) {
			ans1 = "Head";
		}
		else if (coin1 == 2) {
			ans1 = "Tail";
		}
		if (coin2 == 1) {
			ans2 = "Head";
		}
		else if (coin2 == 2) {
			ans2 = "Tail";
		}

		//Output
		if (coin1 == coin2) {
			cout << endl << ans1 << " is correct. It is " << ans2 << "." << endl << endl;
			money = money * 2;
			coin2 = headOrTail();
		}
		else if (coin1 != coin2) {
			cout << endl << ans1 << " is incorrect. It is " << ans2 << "." << endl << endl;
			cout << "You lost $" << money << endl;
			money = 0;
			cout << "You currently have $" << money << "." << endl;
		}
	} while (money != 0);

	system("pause");

	return 0;
}


