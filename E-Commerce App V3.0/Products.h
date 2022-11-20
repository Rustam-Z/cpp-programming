#pragma once
#include <iostream> // I/O stream
#include <string>   // Text

using namespace std;

int position1 = 1; // for numbering the products

//////////////////////////////////////////////// price and name of Products
class Products
{
public:
	string name;
	string class_of_products;
	double price;

public:
	Products(string name, string class_of_products, double price) {
		this->name = name;
		this->class_of_products = class_of_products;
		this->price = price;
	}

	virtual void Display() = 0; // pure virtual function
};


///////////////////////////////////////////////// Vegetables
class Class_Of_Products1 : public Products
{
public:
	int quantity;

public:
	Class_Of_Products1(string name, string class_of_products, double price, int quantity) : Products(name, class_of_products, price) {
		this->quantity = quantity;
	}

	string getName() {
		return name;
	}

	string getClassOfProducts() {
		return class_of_products;
	}

	double getPrice() {
		return price;
	}

	int getQuantity() {
		return quantity;
	}

	void Display() {
		cout << " " << position1 << ". " << left << setw(32) << name << left << setw(27) << class_of_products << left << setw(18) << price << quantity << endl;
		position1++;
	}

};


///////////////////////////////////////////////// 
class Class_Of_Products2 : public Products
{
public:
	int quantity;

public:
	Class_Of_Products2(string name, string class_of_products, double price, int quantity) : Products(name, class_of_products, price) {
		this->quantity = quantity;
	}

	string getName() {
		return name;
	}

	string getClassOfProducts() {
		return class_of_products;
	}

	double getPrice() {
		return price;
	}

	int getQuantity() {
		return quantity;
	}

	void Display() {
		cout << " " << position1 << ". " << left << setw(32) << name << left << setw(27) << class_of_products << left << setw(18) << price << quantity << endl;
		position1++;                                                                 
	}
};


/////////////////////////////////////////////////
class Class_Of_Products3 : public Products
{
public:
	int quantity;

public:
	Class_Of_Products3(string name, string class_of_products, double price, int quantity) : Products(name, class_of_products, price) {
		this->quantity = quantity;
	}

	string getName() {
		return name;
	}

	string getClassOfProducts() {
		return class_of_products;
	}

	double getPrice() {
		return price;
	}

	int getQuantity() {
		return quantity;
	}

	void Display() {
		cout << " " << position1 << ". " << left << setw(32) << name << left << setw(27) << class_of_products << left << setw(18) << price << quantity << endl;
		position1++;                                                                 
	}
};

