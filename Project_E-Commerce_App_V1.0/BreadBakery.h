// Class for
// 1) calculating quantity in storage "Owner"
// 2) changing the price "Owner"
// 3) for bying the product

#pragma once
#include <iostream>

using namespace std;

class Product_BreadBakery
{
private:

	// "Owner" Only
	// this 3 integers for the quantity in the storage (склад)
	// the quantity in storage could be changed by "Owner"
	int storage_quantity_bun_smart_food;
	int storage_quantity_cracker_tuc_cheese_100g;
	int storage_quantity_bread_samarkand;

	// prices of products
	// the prices only could be changed by "Owner"
	int price_bun_smart_food;
	int price_cracker_tuc_cheese_100g;
	int price_bread_samarkand;

	// "User" - Visible only for Users
	// it could be decremented when "User" buying this droduct
	int quantity_bun_smart_food;
	int quantity_cracker_tuc_cheese_100g;
	int quantity_bread_samarkand;

public:

	// default constructor
	Product_BreadBakery();

	// Parametirized constructor
	//Product_VegetablesFruits(int sp, int sc, int so, int pp, int pc, int po);

	// for only "Owner" setting the parameters for the storage
	void set_storage_quantity_bun_smart_food(int storage_quantity_bun_smart_food) {
		this->storage_quantity_bun_smart_food = storage_quantity_bun_smart_food;
	}
	int get_storage_quantity_bun_smart_food() {
		return storage_quantity_bun_smart_food;
	}

	void set_storage_quantity_cracker_tuc_cheese_100g(int storage_quantity_cracker_tuc_cheese_100g) {
		this->storage_quantity_cracker_tuc_cheese_100g = storage_quantity_cracker_tuc_cheese_100g;
	}
	int get_storage_quantity_cracker_tuc_cheese_100g() {
		return storage_quantity_cracker_tuc_cheese_100g;
	}

	void set_storage_quantity_bread_samarkand(int storage_quantity_bread_samarkand) {
		this->storage_quantity_bread_samarkand = storage_quantity_bread_samarkand;
	}
	int get_storage_quantity_bread_samarkand() {
		return storage_quantity_bread_samarkand;
	}

	// setting the prices of products
	void set_price_bun_smart_food(int price_bun_smart_food) {
		this->price_bun_smart_food = price_bun_smart_food;
	}
	int get_price_bun_smart_food() {
		return price_bun_smart_food;
	}
	void set_price_cracker_tuc_cheese_100g(int price_cracker_tuc_cheese_100g) {
		this->price_cracker_tuc_cheese_100g = price_cracker_tuc_cheese_100g;
	}
	int get_price_cracker_tuc_cheese_100g() {
		return price_cracker_tuc_cheese_100g;
	}
	void set_price_bread_samarkand(int price_bread_samarkand) {
		this->price_bread_samarkand = price_bread_samarkand;
	}
	int get_price_bread_samarkand() {
		return price_bread_samarkand;
	}

	// for "User"
	// if '1'  incrementing ... should be +1, if '2' decrementing ... should be -1
	void set_quantity_bun_smart_food_incrementing() {
		quantity_bun_smart_food++;
		storage_quantity_bun_smart_food--;
	}
	void set_quantity_bun_smart_food_decrementing() {
		quantity_bun_smart_food--;
		storage_quantity_bun_smart_food++;
	}
	int get_quantity_bun_smart_food() {
		return quantity_bun_smart_food;
	}

	//cracker_tuc_cheese_100g
	void set_quantity_cracker_tuc_cheese_100g_incrementing() {
		quantity_cracker_tuc_cheese_100g++;
		storage_quantity_cracker_tuc_cheese_100g--;
	}
	void set_quantity_cracker_tuc_cheese_100g_decrementing() {
		quantity_cracker_tuc_cheese_100g--;
		storage_quantity_cracker_tuc_cheese_100g++;
	}
	int get_quantity_cracker_tuc_cheese_100g() {
		return quantity_cracker_tuc_cheese_100g;
	}
	//bread_samarkand
	void set_quantity_bread_samarkand_incrementing() {
		quantity_bread_samarkand++;
		storage_quantity_bread_samarkand--;
	}
	void set_quantity_bread_samarkand_decrementing() {
		quantity_bread_samarkand--;
		storage_quantity_bread_samarkand++;
	}
	int get_quantity_bread_samarkand() {
		return quantity_bread_samarkand;
	}
};


// default Constructor
Product_BreadBakery::Product_BreadBakery() {
	// on storage we have ...
	storage_quantity_bun_smart_food = 10;
	storage_quantity_cracker_tuc_cheese_100g = 10;
	storage_quantity_bread_samarkand = 10;

	// pries by default
	price_bun_smart_food = 3290;
	price_cracker_tuc_cheese_100g = 7390;
	price_bread_samarkand = 5990;

	//quantity bought by user by default
	quantity_bun_smart_food = 0;
	quantity_cracker_tuc_cheese_100g = 0;
	quantity_bread_samarkand = 0;
}