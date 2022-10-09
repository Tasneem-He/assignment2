#include <string>
#include <iostream>
using namespace std;
class person {
protected:
	string name;
	int ID;
	int age;
public:
	person();
	void printinfo();
	void setName(string n);
	void setID(int id);
	void setAge(int a);
	string getName();
	int getID();
	int getage();
	struct appointment {
		int hours;
		int mins;
	}time;
};
#pragma once
