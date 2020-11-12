#pragma once
#include <iostream> // I/O stream
#include <string>   // Text

using namespace std;

//////////////////////////////////////////////// price and name of Products //// virtual class
class Products
{
public:
	string name; double price;

public:
	Products(string name, double price) {
		this->name = name; this->price = price;
	}
	virtual void Display() = 0;
};


/////////////////////////////////////////////////
class Vegetables : public Products
{
public:
	int quantity;

public:
	Vegetables(string name, double price, int quantity) : Products(name, price) {
		this->quantity = quantity;
	}

	string getName() {
		return name;
	}

	double getPrice() {
		return price;
	}

	int getQuantity() {
		return quantity;
	}

	void Display() {
		cout << setw(11) << name << "\t" << price << setw(4) << "\t" << quantity << endl;
	}

};


/////////////////////////////////////////////////
class Drinks : public Products
{
public:
	int quantity;

public:
	Drinks(string name, double price, int quantity) : Products(name, price) {
		this->quantity = quantity;
	}

	string getName() {
		return name;
	}

	double getPrice() {
		return price;
	}

	int getQuantity() {
		return quantity;
	}

	void Display() {
		cout << setw(11) << name << "\t" << price << setw(4) << "\t" << quantity << endl;
	}
};


/////////////////////////////////////////////////
class Foods : public Products
{
public:
	int quantity;

public:
	Foods(string name, double price, int quantity) : Products(name, price) {
		this->quantity = quantity;
	}

	string getName() {
		return name;
	}

	double getPrice() {
		return price;
	}

	int getQuantity() {
		return quantity;
	}

	void Display() {
		cout << setw(11) << name << "\t" << price << setw(4) << "\t" << quantity << endl;
	}
};
