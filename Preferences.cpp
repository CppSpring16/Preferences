/*
 * Preferences.cpp
 *
 *  Created on: Mar 11, 2016
 *      Author: jamalwest
 */
#include <iostream>
#include <iomanip>
using namespace std;
#include "Preferences.h"

int main() {
	int numHandler;
	bool boolHandler;
	bool repeat = true;
	string answer;

	Preferences* pref = new Preferences();

	// Prompting user for preferences

	cout << "What is the minimum number of credit hours? ";
	cin >> numHandler;
	pref->setMinCredits(numHandler);
	cout << "What is the maximum number of credit hours? ";
	cin >> numHandler;
	pref->setMaxCredits(numHandler);
	cout << "Would you like any days off? (Y)/(N) ";

	while (repeat) {
		cin >> answer;
		if (answer == "Y" || answer == "y") {
			boolHandler = true;
			repeat = false;
			pref->setAnyDaysOff(boolHandler);
		} else if (answer == "N" || answer == "n") {
			boolHandler = false;
			repeat = false;
			pref->setAnyDaysOff(boolHandler);
		} else if (answer != "Y" || answer != "N" || cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Please enter a 'Y' for YES or an 'N' for NO " << endl;
			repeat = true;
		}
	}

	cout << "What is your max number of periods in a row? ";
	cin >> numHandler;
	pref->setMaxPeriodsRow(numHandler);
	cout << "What is your max number of periods in a day? ";
	cin >> numHandler;
	pref->setMaxPeriodsDay(numHandler);

	cout << "Student Preferences" << endl;
	cout << "Minimum Credits: " << pref->getMinCredits() << endl;
	cout << "Maximum Credits: " << pref->getMaxCredits() << endl;
	cout << "Requested Days off: " ;
	if(pref->getAnyDaysOff){
		cout << cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	cout << "Maximum Periods in a Row: " << pref->getMaxPeriodsRow() << endl;
	cout << "Maximum Periods in a Day: " << pref->getMaxPeriodsDay() << endl;







}
