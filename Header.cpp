#include "Header.h"
#include <string>
#include <iostream>
using namespace std;
person::person() {
	name = "";
	ID = 0;
	age = 0;

}
void person:: printinfo() {
	cout << "Person's informations is: " << endl << "Name: " << name << endl << "Age:" << age << endl << "ID: " << ID;
}
void person :: setName(string n) {
	name = n;
}
void person ::setID(int id) {
	ID = id;
}
void person :: setAge(int a) {
	age = a;
}
string person ::getName() {
	return name;
}
int person ::getID() {
	return ID;
}
int person:: getage() {
	return age;
}