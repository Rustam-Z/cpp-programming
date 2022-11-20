// USER Registration - Name, Telephone Number, 
// class User which takes the values of products which a specific user has bought

#pragma once
#include <iostream>  // I/O stream
#include <string>    // Text
#include <ctime>     // Time sleep
#include <ctype.h>   // Validation
#include <conio.h>   // Getch
#include <windows.h> // Loading
#include <fstream>   // File handling 
#include <iomanip>   // setfill

/////////////////////////////////////////////////
class Person {
protected:
	string name;
	string tell;

public:
	// Constructor for Person class 
	Person(string name, string tell) {
		this->name = name;
		this->tell = tell;
	}

	// pure virtual function 'Display' 
	virtual void Display() = 0;
};


/////////////////////////////////////////////////
// Sub class of Person
class Security : public Person {
protected:
	string login;
	string password;

public:
	// Constructor for Security class 
	Security(string name, string tell, string login, string password) : Person(name, tell) {
		this->login = login;
		this->password = password;
	}
};


/////////////////////////////////////////////////
// 1st Sub class of Security
class User : public Security { 
public:
	// Storage
	int Product1_1_User = 0, Product1_2_User = 0, Product1_3_User = 0;
	int Product2_1_User = 0, Product2_2_User = 0, Product2_3_User = 0;
	int Product3_1_User = 0, Product3_2_User = 0, Product3_3_User = 0;

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
		cout << "\t\tName     : " << name << endl;
		cout << "\t\tTell     : " << tell << endl;
		cout << "\t\tLogin    : " << login << endl;
		cout << "\t\tPassword : " << password << endl;
	}
};


/////////////////////////////////////////////////
// 2nd Sub class of Security
class Owner : public Security { 
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
		cout << "\t\tName     : " << name << endl;
		cout << "\t\tTell     : " << tell << endl;
		cout << "\t\tLogin    : " << login << endl;
		cout << "\t\tPassword : " << password << endl;
	}
};
