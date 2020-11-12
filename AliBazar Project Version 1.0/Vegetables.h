// Class for
// 1) calculating quantity in storage "Owner"
// 2) changing the price "Owner"
// 3) for bying the product

#pragma once
#include <iostream>

using namespace std;

class Product_VegetablesFruits
{
private:

	// "Owner" Only
	// this 3 integers for the quantity in the storage (склад)
	// the quantity in storage could be changed by "Owner"
	int storage_quantity_potatoes;
	int storage_quantity_carrot;
	int storage_quantity_onion;

	// prices of products
	// the prices only could be changed by "Owner"
	int price_potatoes;
	int price_carrot;
	int price_onion;

	// "User" - Visible only for Users
	// it could be decremented when "User" buying this droduct
	int quantity_potatoes;
	int quantity_carrot;
	int quantity_onion;

public:

	// default constructor
	Product_VegetablesFruits();

	// Parametirized constructor
	//Product_VegetablesFruits(int sp, int sc, int so, int pp, int pc, int po);

	// for only "Owner" setting the parameters for the storage
	void set_storage_quantity_potatoes(int storage_quantity_potatoes) {
		this->storage_quantity_potatoes = storage_quantity_potatoes;
	}
	int get_storage_quantity_potatoes() {
		return storage_quantity_potatoes;
	}

	void set_storage_quantity_carrot(int storage_quantity_carrot) {
		this->storage_quantity_carrot = storage_quantity_carrot;
	}
	int get_storage_quantity_carrot() {
		return storage_quantity_carrot;
	}

	void set_storage_quantity_onion(int storage_quantity_onion) {
		this->storage_quantity_onion = storage_quantity_onion;
	}
	int get_storage_quantity_onion() {
		return storage_quantity_onion;
	}

	// setting the prices of products
	void set_price_potatoes(int price_potatoes) {
		this->price_potatoes = price_potatoes;
	}
	int get_price_potatoes() {
		return price_potatoes;
	}
	void set_price_carrot(int price_carrot) {
		this->price_carrot = price_carrot;
	}
	int get_price_carrot() {
		return price_carrot;
	}
	void set_price_onion(int price_onion) {
		this->price_onion = price_onion;
	}
	int get_price_onion() {
		return price_onion;
	}

	// for "User"
	// if '1'  incrementing ... should be +1, if '2' decrementing ... should be -1
	void set_quantity_potatoes_incrementing() {
		quantity_potatoes++;
		storage_quantity_potatoes--;
	}
	void set_quantity_potatoes_decrementing() {
		quantity_potatoes--;
		storage_quantity_potatoes++;
	}
	int get_quantity_potatoes() {
		return quantity_potatoes;
	}

	//carrot
	void set_quantity_carrot_incrementing() {
		quantity_carrot++;
		storage_quantity_carrot--;
	}
	void set_quantity_carrot_decrementing() {
		quantity_carrot--;
		storage_quantity_carrot++;
	}
	int get_quantity_carrot() {
		return quantity_carrot;
	}
	//onion
	void set_quantity_onion_incrementing() {
		quantity_onion++;
		storage_quantity_onion--;
	}
	void set_quantity_onion_decrementing() {
		quantity_onion--;
		storage_quantity_onion++;
	}
	int get_quantity_onion() {
		return quantity_onion;
	}
};


// default Constructor
Product_VegetablesFruits::Product_VegetablesFruits() {
	// on storage we have ...
	storage_quantity_potatoes = 10;
	storage_quantity_carrot = 10;
	storage_quantity_onion = 10;

	// pries by default
	price_potatoes = 7990;
	price_carrot = 1990;
	price_onion = 2990;

	//quantity bought by user by default
	quantity_potatoes = 0;
	quantity_carrot = 0;
	quantity_onion = 0;
}