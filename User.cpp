//User.cpp
//Cody Abad
//CS 372 Final Exam Part C
//Implementation for class User

#include "User.h"

User::~User()
{
}

User::User() : _name("nobody"), _money(0), _gamerStatus(false){

}

User::User(string name) : _name(name), _money(0), _gamerStatus(false) {

}

User::User(string name, double money) : _name(name), _money(money), _gamerStatus(false) {

}

User::User(string name, double money, bool gamer) : _name(name), _money(money), _gamerStatus(gamer){
}

string User::getName() const{
	return _name;
}

double User::getMoney() const{
	return _money;
}

bool User::isGamer() const{
	return _gamerStatus;
}
