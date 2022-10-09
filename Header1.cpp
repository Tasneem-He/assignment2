#include <string>
#include <iostream>
#include "Header1.h"
#include "Header.h"
using namespace std;
void customer :: setMechanicID(int id) {
	MechanicID = id;
}
void customer :: setappointment(int i , int j) {
	time.hours = i;
	time.mins = j;
}
int customer :: getMechanicID() {
	return MechanicID;
}
person :: appointment customer :: gettime() {
	return time;
}
bool customer :: operator == (const customer& c) {
	if (this->time.hours == c.time.hours && this->time.mins == c.time.mins) {
		return true;
	}
	return false;
}
bool customer :: operator < (const customer& c) {
	if (this->time.hours < c.time.hours || ((this->time.hours == c.time.hours) && (this->time.mins < c.time.mins))) {
		return true;
	}
	return false;
}
bool customer :: operator > (const customer& c) {
	if (this->time.hours > c.time.hours || ((this->time.hours == c.time.hours) && (this->time.mins > c.time.mins))) {
		return true;
	}
	return false;
}