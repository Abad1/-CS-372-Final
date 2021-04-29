//main.cpp
//Cody Abad
//CS 372 Final Exam Part C
//Chain of Responsibility example

#include "ConcreteHandlers.h"

#include <iostream>
using std::cout;
using std::endl;

int main() {
	User Sterling("Sterling", 0, true);
	User Cody("Cody",420.69,true);
	User Allison("Allison", 20, false);
	User Nobody("nobody", 90000000, true);
	HandleGamer gamerHandler;
	if (!gamerHandler.handleUser(Sterling)) {
		cout << "Access denied" << endl;
	};
	cout << endl;
	if (!gamerHandler.handleUser(Cody)) {
		cout << "Access denied" << endl;
	}; 
	cout << endl;
	if (!gamerHandler.handleUser(Allison)) {
		cout << "Access denied" << endl;
	}; 
	cout << endl;
	if (!gamerHandler.handleUser(Nobody)) {
		cout << "Access denied" << endl;
	};
}