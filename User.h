//User.h
//Cody Abad
//CS 372 Final Exam Part C
//Contains class User, which stores
//the name and money of a client,
//and whether or not they're a gamer

#pragma once

#include <string>
using std::string;

//Users have a name, money, and either a gamer or not
class User {
public:
	~User();
	User();
	User(string name);
	User(string name,double money);
	User(string name, double money, bool gamer);

	string getName() const;

	double getMoney() const;

	bool isGamer() const;

private:
	string _name;
	double _money;
	bool _gamerStatus;
};
