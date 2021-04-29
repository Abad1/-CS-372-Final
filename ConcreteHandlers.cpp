//ConcreteHandlers.cpp
//Cody Abad
//CS 372 Final Exam Part C
//implementation for derived handlers

#include "ConcreteHandlers.h"

#include <iostream>
using std::cout;
using std::endl;

bool HandleGamer::handleUser(User person){
    if (person.isGamer()) {
        HandleMoney MoneyHandler;
        return MoneyHandler.handleUser(person);
    }
    else {
        cout << "Sorry " << person.getName() << ", only gamers may purchase G fuel" << endl;
        return false;
    }
}

bool HandleMoney::handleUser(User person){
    if (person.getMoney() > 10) {
        HandleName NameHandler;
        return NameHandler.handleUser(person);
    }
    else {
        cout << "Sorry " << person.getName() << ", you broke" << endl;
        return false;
    }
}

bool HandleName::handleUser(User person){
    if (person.getName() == "nobody") {
        cout << "who are you?" << endl;
        return false;
    }
    else {
        cout << "Congratulations, " << person.getName() << ", you are eligible to purchase G fuel." << endl;
        return true;
    }
}
