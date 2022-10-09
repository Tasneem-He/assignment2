#include "Header.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class mechanic : public person {
private:
	int counter{};
	vector<appointment> Time;
public :
	bool isAvailable(appointment t);
	void setConter(int c);
	int getCounter();
	void setTime(appointment t);
	vector<appointment>& getTime();

};
#pragma once
