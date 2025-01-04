#include "guess_the_number.h"
#include <iostream>
using namespace std;

int guess_the_number() {
	int goal = rand() % 100 + 1;
	int num;
	int attempts = 0;

	cout << "Welcome to number guessing game!" << endl;
	cout << "You are going to guess a number between 1 and 100" << endl;
	cout << "Try to get the goal under five attempts!" << endl;
	cout << "Please enter you guess below" << endl;
	cin >> num;

	while (num != goal) {
		if (num < goal) {
			if ((goal - num) > 25) {
				cout << "Way too low!" << endl;
				cout << "Please guess again" << endl;
				cin >> num;
				attempts++;
			}
			else if ((goal - num) < 5) {
				cout << "It's only a bit low" << endl;
				cout << "Try again" << endl;
				cin >> num;
				attempts++;
			}
			else {
				cout << "Make a higher guess" << endl;
				cin >> num;
				attempts++;
			}
		}
		else {
			if ((num - goal) > 25) {
				cout << "Way too high!" << endl;
				cout << "Please guess again" << endl;
				cin >> num;
				attempts++;
			}
			else if ((num - goal) < 5) {
				cout << "It's only a bit high" << endl;
				cout << "Try again" << endl;
				cin >> num;
				attempts++;
			}
			else {
				cout << "Make a lower guess" << endl;
				cin >> num;
				attempts++;
			}
		}
	}
	cout << "Congratulations, you guessed the number in " << attempts << " attempts" << endl;


	return 0;
}