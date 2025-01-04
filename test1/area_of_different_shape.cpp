#include "area_of_different_shape.h"
#include <iostream>
using namespace std;

double area_of_different_shape() {
	while (true) {
		int a = 0;
		cout << "Please enter one of the followings to calculate the area of a shape" << endl;
		cout << "Triangle -> 1; rectangle -> 2; trapezoid -> 3; parallelogram -> 4; circle -> 5" << endl;
		cin >> a;
		if (a == 1) {
			double b1 = 0;
			double h1 = 0;
			cout << "Enter the length of the base of the triangle" << endl;
			cin >> b1;
			cout << "Enter the height of the triangle" << endl;
			cin >> h1;
			cout << "The area of the triangle is " << b1 * h1 / 2 << " square units" << endl;
		}
		else if (a == 2) {
			double b2 = 0;
			double h2 = 0;
			cout << "Enter the length of the base of the rectangle" << endl;
			cin >> b2;
			cout << "Enter the width of the rectangle" << endl;
			cin >> h2;
			cout << "The area of the rectangle is " << b2 * h2 << " square units" << endl;
		}
		else if (a == 3) {
			double b3_1 = 0;
			double b3_2 = 0;
			double h3 = 0;
			cout << "Enter the length of the upper base of the trapezoid" << endl;
			cin >> b3_1;
			cout << "Enter the length of the lower base of the trapezoid" << endl;
			cin >> b3_2;
			cout << "Enter the height of the trapezoid" << endl;
			cin >> h3;
			cout << "The area of the trapezoid is " << (b3_1 + b3_2) * h3 / 2 << " square units" << endl;
		}
		else if (a == 4) {
			double b4 = 0;
			double h4 = 0;
			cout << "Enter the length of the base of the parallelogram" << endl;
			cin >> b4;
			cout << "Enter the height of the parallelogram" << endl;
			cin >> h4;
			cout << "The area of the parallelogram is " << b4 * h4 << " square units" << endl;
		}
		else if (a == 5) {
			double r = 0;
			cout << "Enter the radius of the circle" << endl;
			cin >> r;
			cout << "The area of the circle is " << r * r * 3.14 << " square units" << endl;
		}
		else if (a == 0) {
			break;
		}
		else {
			cout << " " << endl;
		}

	}





	return 0;
}
