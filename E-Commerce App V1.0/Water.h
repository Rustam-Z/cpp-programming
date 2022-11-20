// Class for
// 1) calculating quantity in storage "Owner"
// 2) changing the price "Owner"
// 3) for bying the product

#pragma once
#include <iostream>

using namespace std;

class Product_WaterBeverages
{
private:

	// "Owner" Only
	// this 3 integers for the quantity in the storage (склад)
	// the quantity in storage could be changed by "Owner"
	int storage_quantity_water_hydrolife_750ml;
	int storage_quantity_drink_aloe_500ml;
	int storage_quantity_nectar_zet_125ml;

	// prices of products
	// the prices only could be changed by "Owner"
	int price_water_hydrolife_750ml;
	int price_drink_aloe_500ml;
	int price_nectar_zet_125ml;

	// "User" - Visible only for Users
	// it could be decremented when "User" buying this droduct
	int quantity_water_hydrolife_750ml;
	int quantity_drink_aloe_500ml;
	int quantity_nectar_zet_125ml;

public:

	// default constructor
	Product_WaterBeverages();

	// Parametirized constructor
	//Product_VegetablesFruits(int sp, int sc, int so, int pp, int pc, int po);

	// for only "Owner" setting the parameters for the storage
	void set_storage_quantity_water_hydrolife_750ml(int storage_quantity_water_hydrolife_750ml) {
		this->storage_quantity_water_hydrolife_750ml = storage_quantity_water_hydrolife_750ml;
	}
	int get_storage_quantity_water_hydrolife_750ml() {
		return storage_quantity_water_hydrolife_750ml;
	}

	void set_storage_quantity_drink_aloe_500ml(int storage_quantity_drink_aloe_500ml) {
		this->storage_quantity_drink_aloe_500ml = storage_quantity_drink_aloe_500ml;
	}
	int get_storage_quantity_drink_aloe_500ml() {
		return storage_quantity_drink_aloe_500ml;
	}

	void set_storage_quantity_nectar_zet_125ml(int storage_quantity_nectar_zet_125ml) {
		this->storage_quantity_nectar_zet_125ml = storage_quantity_nectar_zet_125ml;
	}
	int get_storage_quantity_nectar_zet_125ml() {
		return storage_quantity_nectar_zet_125ml;
	}

	// setting the prices of products
	void set_price_water_hydrolife_750ml(int price_water_hydrolife_750ml) {
		this->price_water_hydrolife_750ml = price_water_hydrolife_750ml;
	}
	int get_price_water_hydrolife_750ml() {
		return price_water_hydrolife_750ml;
	}
	void set_price_drink_aloe_500ml(int price_drink_aloe_500ml) {
		this->price_drink_aloe_500ml = price_drink_aloe_500ml;
	}
	int get_price_drink_aloe_500ml() {
		return price_drink_aloe_500ml;
	}
	void set_price_nectar_zet_125ml(int price_nectar_zet_125ml) {
		this->price_nectar_zet_125ml = price_nectar_zet_125ml;
	}
	int get_price_nectar_zet_125ml() {
		return price_nectar_zet_125ml;
	}

	// for "User"
	// if '1'  incrementing ... should be +1, if '2' decrementing ... should be -1
	void set_quantity_water_hydrolife_750ml_incrementing() {
		quantity_water_hydrolife_750ml++;
		storage_quantity_water_hydrolife_750ml--;
	}
	void set_quantity_water_hydrolife_750ml_decrementing() {
		quantity_water_hydrolife_750ml--;
		storage_quantity_water_hydrolife_750ml++;
	}
	int get_quantity_water_hydrolife_750ml() {
		return quantity_water_hydrolife_750ml;
	}

	//drink_aloe_500ml
	void set_quantity_drink_aloe_500ml_incrementing() {
		quantity_drink_aloe_500ml++;
		storage_quantity_drink_aloe_500ml--;
	}
	void set_quantity_drink_aloe_500ml_decrementing() {
		quantity_drink_aloe_500ml--;
		storage_quantity_drink_aloe_500ml++;
	}
	int get_quantity_drink_aloe_500ml() {
		return quantity_drink_aloe_500ml;
	}
	//nectar_zet_125ml
	void set_quantity_nectar_zet_125ml_incrementing() {
		quantity_nectar_zet_125ml++;
		storage_quantity_nectar_zet_125ml--;
	}
	void set_quantity_nectar_zet_125ml_decrementing() {
		quantity_nectar_zet_125ml--;
		storage_quantity_nectar_zet_125ml ++ ;
	}
	int get_quantity_nectar_zet_125ml() {
		return quantity_nectar_zet_125ml;
	}
};


// default Constructor
Product_WaterBeverages::Product_WaterBeverages() {
	// on storage we have ...
	storage_quantity_water_hydrolife_750ml = 10;
	storage_quantity_drink_aloe_500ml = 10;
	storage_quantity_nectar_zet_125ml = 10;

	// pries by default
	price_water_hydrolife_750ml = 2390;
	price_drink_aloe_500ml = 8990;
	price_nectar_zet_125ml = 8890;

	//quantity bought by user by default
	quantity_water_hydrolife_750ml = 0;
	quantity_drink_aloe_500ml = 0;
	quantity_nectar_zet_125ml = 0;
}