#include "Header.h"
#include "Header2.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
bool mechanic :: isAvailable(appointment t) {
	if (this->Time.empty())
	return true;
	else 
		for (int i = 0; i < this->Time.size(); i++) {
			if (t.hours == Time[i].hours)
				return false;
		}
	return true;

}
void mechanic :: setConter(int c) {
	counter = c;
}
int mechanic :: getCounter() {
	return counter;
}
void mechanic :: setTime(appointment t) {
	Time.push_back(t);
}
vector<person::appointment>& mechanic :: getTime() {
	return Time;
}