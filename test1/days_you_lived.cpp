#include "days_you_lived.h"
#include <iostream>
#include <ctime>
using namespace std;

int getCurrentDay() {
	time_t now = time(0);
	tm* localTime = localtime(&now);

	int currentDay = localTime->tm_mday;
	return currentDay;
}

int getCurrentMonth() {
	time_t now = time(0);
	tm* localTime = localtime(&now);

	int currentMonth = localTime->tm_mon + 1;
	return currentMonth;
}

int calculateDays(int birthYear, int birthMonth, int birthDay) {
	time_t now = time(0);
	tm* localTime = localtime(&now);

	int currentYear = localTime->tm_year + 1900;
	int currentMonth = localTime->tm_mon + 1;
	int currentDay = localTime->tm_mday;

	tm birthDate = {};
	birthDate.tm_year = birthYear - 1900;
	birthDate.tm_mon = birthMonth - 1;
	birthDate.tm_mday = birthDay;

	time_t birthTime = mktime(&birthDate);

	double secondsDifference = difftime(now, birthTime);    //continue next page
	int daysDifference = static_cast<int>(secondsDifference / (60 * 60 * 24));

	return daysDifference;
}

int days_you_lived() {
	int birthYear, birthMonth, birthDay;

	cout << "Enter your birth year: ";
	cin >> birthYear;
	cout << "Enter your birth month: ";
	cin >> birthMonth;
	cout << "Enter your birth day: ";
	cin >> birthDay;

	int currentDay = getCurrentDay();
	int currentMonth = getCurrentMonth();
	int days = calculateDays(birthYear, birthMonth, birthDay);


	if (birthDay == currentDay && birthMonth == currentMonth) {
		cout << "Happy birthday!" << endl;
	}
	else if (days >= 0) {
		cout << "You have been alive for " << days << " days!" << std::endl;
	}
	else {
		cout << "The date entered is in the future. Please enter a valid date." << endl;
	}

	return 0;
}
