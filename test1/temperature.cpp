#include "temperature.h"
#include <iostream>
#include  <string>
using namespace std;

int temperature() {
	string n = "0";
	cout << "Do you want to transfer degree Fahrenheit to Celsius or degree Celsius to Fahrenheit?" << endl;
	getline(cin, n);
	if (n == "F to C") {
		int f = 0;
		cout << "How much degree Fahrenheit" << endl;
		cin >> f;
		int c = 0;
		c = (f - 32) * 5 / 9;
		cout << f << " degree Fahrenheit equals to " << c << " degree Celsius" << endl;
	}
	else if (n == "C to F") {
		int cc = 0;
		cout << "How much degree Celsius" << endl;
		cin >> cc;
		int ff = 0;
		ff = cc * 9 / 5 + 32;
		cout << cc << " degree Celsius equals to " << ff << " degree Fahrenheit" << endl;
	}
	else {
		cout << "You entered a wrong code, to run the program, you should enter F to C or C to F" << endl;
	}



	return 0;
}