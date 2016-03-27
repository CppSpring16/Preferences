/*
 * Preferences.h
 *
 *  Created on: Mar 11, 2016
 *      Author: jamalwest
 */

#ifndef PREFERENCES_H_
#define PREFERENCES_H_
#include <iostream>
#include <iomanip>

namespace std {

class Preferences {

private:
	int minCredits;
	int maxCredits;
	bool anyDaysOff;
	int maxPeriodsRow;
	int maxPeriodsDay;
	string unwantedPeriod;

public:

void setMinCredits(int p){
	minCredits = p;
}

void setMaxCredits(int p){
	maxCredits = p;

}

void setAnyDaysOff(bool p){
	anyDaysOff = p;
}

void setMaxPeriodsRow(int p){
	maxPeriodsRow = p;
}

void setMaxPeriodsDay(int p){
	maxPeriodsDay = p;
}
int getMinCredits(){
	return minCredits;

}

int getMaxCredits(){
	return maxCredits;
}

static bool getAnyDaysOff(bool anyDaysOff){
	return anyDaysOff;

}

int getMaxPeriodsRow(){
	return maxPeriodsRow;
}

int getMaxPeriodsDay(){
	return maxPeriodsDay;
}



};

} /* namespace std */

#endif /* PREFERENCES_H_ */
