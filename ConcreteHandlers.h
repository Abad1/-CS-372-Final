//ConcreteHandlers.h
//Cody Abad
//CS 372 Final Exam Part C
//Contains derived class
//handlers for determining if user
//is eligible

#pragma once
#include "Handler.h"

//This handler will determine if the user is a gamer or not
class HandleGamer: public Handler {
public:

	bool handleUser(User person);
};

//This handler will determine if the user has enough money
class HandleMoney : public Handler {
public:
	bool handleUser(User person);

};

//This handler makes sure that the user has a name
class HandleName : public Handler {
public:
	bool handleUser(User person);
};


