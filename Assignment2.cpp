// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include "Header2.h"
#include "Header1.h"
#include "queue.h"
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;



void bubbleSort(customer cus[], int size) {

	for (int step = 0; step < size - 1; ++step) {
		for (int i = 0; i < size - step - 1; ++i) {
			if (cus[i] > cus[i + 1]) {
				customer temp = cus[i];
				cus[i] = cus[i + 1];
				cus[i + 1] = temp;
			}
		}
	}
}

int main()
{
	int hours[4];
	int mins[4];
	string mech_name[3];
	int mec_id[3];
	int mech_age[3];
	string cus_name[4];
	int cus_id[4];
	int cus_age[4];
	mechanic m1;
	mechanic m2;
	mechanic m3;
	mechanic mech[3] = { m1, m2, m3 };
	for (int i = 0; i < 3; i++) {
		cout << "Please enter the mechanics info " << endl;
		cout << "plesase enter the mechanic name:" << endl;
		cin >> mech_name[i];
		mech[i].setName(mech_name[i]);
		cout << "plesase enter the mechanic ID:" << endl;
		cin >> mec_id[i];
		mech[i].setID(mec_id[i]);
		cout << "plesase enter the mechanic age:" << endl;
		cin >> mech_age[i];
		mech[i].setAge(mech_age[i]);
	}
	customer c1;
	customer c2;
	customer c3;
	customer c4;
	customer cus[4] = { c1,c2, c3, c4 };
	for (int j = 0; j < 4; j++) {
		cout << "please enter the customer info " << endl;
		cout << "plesase enter the customer name:" << endl;
		cin >> cus_name[j];
		cus[j].setName(cus_name[j]);
		cout << "plesase enter the customer ID:" << endl;
		cin >> cus_id[j];
		cus[j].setID(cus_id[j]);
		cout << "plesase enter the customer age:" << endl;
		cin >> cus_age[j];
		cus[j].setAge(cus_age[j]);
		cout << "plesase enter the customer appontment times: the hour and the mins respectively" << endl;
		cin >> hours[j];
		cin >> mins[j];
		cus[j].setappointment(hours[j], mins[j]);
	}
	int j = 0;
	int i = 0;
	while (i < 4) {
		if (mech[j].isAvailable(cus[i].gettime())) {
			cout << "Mr/Mrs" << cus[i].getName() << "should be assigned to " << mech[j % 3].getName() << "At " << cus[i].gettime().hours << ':' << cus[i].gettime().mins << endl;
			cus[i].setMechanicID(mech[j % 3].getID());
			mech[j % 3].setTime(cus[i].gettime());
		}
		else
		{
			j++;
			continue;

		}
		i++;
		j++;
	}


	bubbleSort(cus, 4);

	queue <customer> q(4);
	for (int i = 0; i < 4; i++)
	q.push(cus[i]);
	for (int i = 0; i < 4; i++)
		cus[i].printinfo();



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
