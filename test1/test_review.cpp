#include "test_review.h"
#include <iostream>
using namespace std;

int test_review() {
	int a = 0;
	cout << "Are you going to have a test this week? If yes, enter 1, if not, enter 2 : " << endl;
	cin >> a;
	if (a == 1) {
		int b = 0;
		cout << "Are you going to review it? If yes, enter 1, if not, enter 2 : " << endl;
		cin >> b;
		if (b == 1) {
			cout << "You are going to pass it!" << endl;
		}
		else if (b == 2) {
			int  c = 0;
			cout << "Do you think you can pass it? Enter 1 if true, enter 2 if false : " << endl;
			cin >> c;
			if (c == 1) {
				cout << "good luck..." << endl;
			}
			else if (c == 2) {
				cout << "Then go review right now!!!" << endl;
			}
			else {
				cout << " " << endl;
			}
		}
		else {
			cout << " " << endl;
		}
	}
	else if (a == 2) {
		cout << "Have fun this week!" << endl;
	}
	else {
		cout << " " << endl;
	}



	return 0;
}
