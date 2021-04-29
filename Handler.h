//Handler.h
//Cody Abad
//CS 372 Final Exam Part C
//Contains class Handler, the base
//class for all handlers

#pragma once

#include "User.h"


class Handler {
public:

	virtual bool handleUser();
private:
	const User _person;
};

