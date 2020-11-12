#pragma once

#include <iostream>  // I/O stream
#include <string>    // Text
#include <ctime>     // Time sleep
#include <ctype.h>   // Validation
#include <conio.h>   // Getch
#include <windows.h> // Loading
#include <fstream>   // File handling 
#include <iomanip>   // setfill

////////////////////////////////////////////////
class Person {
protected:
	string name;
	string tell;
public:
	// Constructor for Person class 
	Person(string name, string tell) {
		this->name = name; this->tell = tell;
	}

	virtual void Display() = 0;
};


/////////////////////////////////////////////////
class Security : public Person { // Sub class of Person
protected:
	string login;
	string password;
public:

	// Constructor for Securoty class 
	Security(string name, string tell, string login, string password) :Person(name, tell) {
		this->login = login; this->password = password;
	}

};


/////////////////////////////////////////////////
class User : public Security { // 1st Sub class of Securit
public:
	// Storage
	int Potatoes_User = 0, Onion_User = 0, Carrot_User = 0;
	int Water_User = 0, Pepsi_User = 0, Nectar_User = 0;
	int Pizza_User = 0, Burger_User = 0, Fries_User = 0;

	// Constructor for User's sign up
	User(string name, string tell, string login, string password) : Security(name, tell, login, password) {
		this->name = name;
		this->tell = tell;
		this->login = login;
		this->password = password;
	}
	// get Name of User
	string getName() {
		return name;
	}
	// get Tell of User
	string getTell() {
		return tell;
	}
	// get Login of User
	string getLogin() {
		return login;
	}
	// get Password of User
	string getPassword() {
		return password;
	}
	// Display Info
	void Display() {
		cout << "\t\tName    : " << name << endl;
		cout << "\t\tTell    : " << tell << endl;
		cout << "\t\tLogin   : " << login << endl;
		cout << "\t\tPassword: " << password << endl;
	}
};


/////////////////////////////////////////////////
class Owner : public Security { // 2nd Sub class of Security
public:
	// Constructor for User's sign up
	Owner(string name, string tell, string login, string password) : Security(name, tell, login, password) { }
	// get Name of User
	string getName() {
		return name;
	}
	// get Tell of User
	string getTell() {
		return tell;
	}
	// get Login of User
	string getLogin() {
		return login;
	}
	// get Password of User
	string getPassword() {
		return password;
	}
	// Display Info
	void Display() {
		cout << "Name:     " << name << endl;
		cout << "Tell:     " << tell << endl;
		cout << "Login:    " << login << endl;
		cout << "Password: " << password << endl;
	}
};
