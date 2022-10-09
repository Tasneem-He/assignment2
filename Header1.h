#include "Header.h"
#include <string>
#include <iostream>
using namespace std;
class customer :public person {
private:
	int MechanicID;
	appointment time;
public:
	void setMechanicID(int id);
	void setappointment(int i, int j);
	int getMechanicID();
	appointment gettime();
	bool operator == (const customer& c);
	bool operator < (const customer& c);
	bool operator > (const customer& c);



};
#pragma once
