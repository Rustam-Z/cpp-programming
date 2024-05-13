// Rustam Zokirov - (U1910049) - Section 004;
// First Program - Final Assignment;
// BINARY FILES were used to manage the data;
// Temporary files were used for finding the product;
// Validations for quantity done you cannot decrease less than zero;
// Validations for UIC of product;
// You can buy a product with inputing its UIC;
// Billing system is in the Purchase() function case 3:
// 

#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main();

// class ITEM base class for two clasees
class Item { // class ITEM which includes the name and universal item code
protected: 
	string name;
	string UIC;
public:
	Item() { // default constructor
		name = "Unknown";
		UIC = "Unknown";
	}

	Item(string name, string UIC) { // parametirized constructor
		this->name = name;
		this->UIC = UIC;
	}

	void set_name(string name) { // function for inputing the name of item
		this->name = name;
	}

	void set_UIC(string UIC) {
		this->UIC = UIC;
	}

	string get_name() {
		return name;
	}

	string get_UIC() {
		return UIC;
	}

	void virtual display() {
		cout << left << setw(20) << name << setw(15) << UIC;
	}

	void virtual input() {
		cout << "Enter the name of a new product: ";
	    cin >> name;
		cout << "Enter the UIC of a new product: ";
		cin >> UIC;
	}

};

// class for Packed Products
class PackedGroceries : public Item {

private:
	double price;
	int quantity;
	int quantity_purchased;
public:
	
	PackedGroceries() {
		price = 0.0;
		quantity = 0;
		quantity_purchased = 0;
	}

	PackedGroceries(string name, string UIC, double price, int quantity, int quantity_purchased) : Item(name, UIC) {
		this->price = price;
		this->quantity = quantity;
		this->quantity_purchased = quantity_purchased;
	}

	void display() {
	    Item::display();
		cout << left << setw(20) << price << setw(15) << quantity << endl;
	}

	void input() {
		Item::input();
		cout << "Enter the price of a new product: ";
		cin >> price;
		cout << "Enter the quantity of a new product: ";
		cin >> quantity;
	}

	void set_quantity(int quantity) {
		this->quantity = quantity;
	}

	int get_quantity() {
		return quantity;
	}

	double get_price() {
		return price;
	}

	void set_quantity_p(int quantity_purchased) {
		this->quantity_purchased = quantity_purchased;
	}

	int get_quantity_p() {
		quantity_purchased++;
		quantity--;
		return quantity_purchased;
	}

};

// classfor Fresh Products
class FreshGroceries : public Item {
private:
	double price;
	int quantity;
	int quantity_purchased;

public:

	FreshGroceries() {
		price = 0.0;
		quantity = 0;
		quantity_purchased = 0;
	}

	FreshGroceries(string name, string UIC, double price, int quantity, int quantity_purchased) : Item(name, UIC) {
		this->price = price;
		this->quantity = quantity;
		this->quantity_purchased = quantity_purchased;
	}

	void display() {
		Item::display();
		cout << left << setw(20) << price << setw(15) << quantity << endl;

	}

	int get_quantity() {
		return quantity;
	}

	double get_price() {
		return price;
	}

	int get_quantity_p() {
		quantity--;
		quantity_purchased++;
		return quantity_purchased;
	}

	void input() {
		Item::input();
		cout << "Enter the price of a new product: ";
		cin >> price;
		cout << "Enter the quantity of a new product: ";
		cin >> quantity;
	}

};

void Purchase(){
	PackedGroceries p; // declaration of object PackedGroceries
	FreshGroceries f; // declaration of object for class FreshGroceri

	for (int i = 0; i < 1000; i++) {
		system("cls");

		string UIC; // UIC for serching the product from the file

		ofstream outBill("Bill", ios::binary | ios::app);

		cout << "Second Main Menu: \n";
		cout << "1. Go to Packed Groceries\n";
		cout << "2. Go to Fresh Groceries \n";
		cout << "3. Bill \n";
		cout << "0. Go Back\n";
		cout << "Your choice: \n";

		switch (_getch()) {
		case '1': {
			system("cls");
			ofstream outTempPacked("TempPacked", ios::binary | ios::app);

			// listing the products which exist
			ifstream inPacked1("Packed", ios::binary);
			cout << left << setw(20) << "Name" << setw(15) << "UIC" << setw(20) << "Price" << setw(15) << "Quantity" << endl;
			while (inPacked1.read((char*)&p, sizeof(PackedGroceries))) {
				p.display();
			}
			inPacked1.close();			// closing the files after execution

			// searching the product by its code
			cout << "\nEnter the UIC of product you want to purchase: ";
			cin >> UIC;

			bool isFound = false; // bool for cheaking the existance of product

			ifstream inPacked("Packed", ios::binary);
			while (inPacked.read((char*)&p, sizeof(PackedGroceries))) {	
				// serching from the file the product
				if (p.get_UIC() == UIC) {
					isFound = true;	
					if (p.get_quantity() > 0) { // validation for quantity
						p.get_quantity_p(); // functions for calculating the quantities
					}
					else if (p.get_quantity() < 0) { // quantity cannot be less than zero
						cout << "Sorry, product is over!\n";
					}
					// w
					outTempPacked.write((char*)&p, sizeof(PackedGroceries));
					outBill.write((char*)&p, sizeof(PackedGroceries));

					cout << "Successfully purchased 1 pc.\n";
					cout << "Done Great\n";
				}		
				else if (p.get_UIC() != UIC) {
					outTempPacked.write((char*)&p, sizeof(PackedGroceries));

				}
				else {
					isFound = false;
				}

			} // switch
			outTempPacked.close(); // closing temp
			inPacked.close(); // closing packed
			outBill.close();

				
			if (!isFound) {
				cout << "Not Found 404 ERROR\n";
			}

			// removing and renaming temp
     		remove("Packed");
		    rename("TempPacked", "Packed");

			cout << "\n\nThe new table: \n";
			// for redisplaaying the file
			ifstream inPacked1_2("Packed", ios::binary);
			cout << left << setw(20) << "Name" << setw(15) << "UIC" << setw(20) << "Price" << setw(15) << "Quantity" << endl;
			while (inPacked1_2.read((char*)&p, sizeof(PackedGroceries))) {
				p.display();
			}
			inPacked1_2.close();			// closing the files after execution
			cout << endl << endl;

			
			system("pause");
		}break;

		case '2': {
			system("cls");
			ofstream outTempFresh("TempFresh", ios::binary | ios::app);

			ifstream inFresh1("Fresh", ios::binary);
			cout << left << setw(20) << "Name" << setw(15) << "UIC" << setw(20) << "Price" << setw(15) << "Quantity" << endl;
			while (inFresh1.read((char*)&f, sizeof(FreshGroceries))) {
				f.display();
			}
			inFresh1.close(); 			// closing the files after execution

			// searching the product by its code
			cout << "\nEnter the UIC of product you want to purchase: ";
			cin >> UIC;

			bool isFound2 = false;
			ifstream inFresh("Fresh", ios::binary);

			while (inFresh.read((char*)&f, sizeof(FreshGroceries))) {
					if (f.get_UIC() == UIC) {
						isFound2 = true;
						if (f.get_quantity() > 0) {
							f.get_quantity_p(); // functions for calculating the quantities
						}
						else if (f.get_quantity() < 0) {
							cout << "Sorry, product is over!\n";
						}

						// storing the found data to files 
						// first for Billing system
						// next for Listing
					    outBill.write((char*)&f, sizeof(FreshGroceries));
						outTempFresh.write((char*)&f, sizeof(FreshGroceries));

						cout << "Successfully purchased 1 pc.\n";
						cout << "Done Great\n";
					}
					else if (f.get_UIC() != UIC) {
						outTempFresh.write((char*)&f, sizeof(FreshGroceries));
					}
					else {
						isFound2 = false;
					}

				} // switch
				outTempFresh.close(); // closing temp
				inFresh.close(); // closing packed
				outBill.close();

				if (!isFound2) {
					cout << "Not Found 404 ERROR\n";
				}

				// removing and renaming temp
				remove("Fresh");
				rename("TempFresh", "Fresh");

				// for redisplaying the table
				cout << "\n\nThe new table: \n";
				ifstream inFresh1_2("Fresh", ios::binary);
				cout << left << setw(20) << "Name" << setw(15) << "UIC" << setw(20) << "Price" << setw(15) << "Quantity" << endl;
				while (inFresh1_2.read((char*)&f, sizeof(FreshGroceries))) {
					f.display();
				}
				inFresh1_2.close(); 			// closing the files after execution
				cout << endl << endl;

				
				system("pause");
		}break;

		case '3': {
			system("cls");
			double price_final = 0.0;

			// the billing system for Packed
			cout << "The billing system:\n";
			ifstream inBill("Bill", ios::binary);
			cout << left << setw(20) << "Name" << setw(15) << "UIC" <<endl;
			while (inBill.read((char*)&p, sizeof(PackedGroceries))) {
				p.Item::display();
				cout << endl;
				// calculating the price
				price_final = p.get_quantity_p() * p.get_price();

			}
			inBill.close();			// closing the files after execution
			cout << endl << endl;

			cout << "Overall Price: " << price_final << endl << endl;
			cout << "Thank you for you purchase!\n";

			system("pause");
		}break;

		case '0': {
			main();
		}
			break;

		default: {
			cout << "Your choise is not available in menu!\nPlese, try one more time.\n\n";
		}

		} // swich ends
	} // for loop ends
}

int main() {
	PackedGroceries p; // declaration of object PackedGroceries
	FreshGroceries f; // declaration of object for class FreshGroceries

	for (int i = 0; i < 1000; i++) {
		system("cls");
		cout << "Main Menu: \n";
		cout << "1. List all products\n";
		cout << "2. Add Packed Groceries \n";
		cout << "3. Add Fresh Groceries\n";
		cout << "4. Purchase\n";
		cout << "Your choice: \n";

		switch (_getch()) {
		case '1': {
			system("cls");
			ifstream inPacked("Packed", ios::binary);
			ifstream inFresh("Fresh", ios::binary);

			// displaying the list of packed products
			cout << left << setw(20) << "Name" << setw(15) << "UIC" << setw(20) << "Price" << setw(15) << "Quantity" << endl;
			while (inPacked.read((char*)&p, sizeof(PackedGroceries))) {
				p.display();
			}

			// displaying the list of fresh products
			while ( inFresh.read((char*)&f, sizeof(FreshGroceries))) {
				f.display();
			}

			// closing the files after execution
			inPacked.close();
			inFresh.close();	
			system("pause");
		}break;

		case '2': {
			system("cls");
			// inputing the info for the new item
			ofstream outPacked("Packed", ios::binary | ios::app);
			p.input();
			// writing to binary file
			outPacked.write((char*)&p, sizeof(PackedGroceries));
			outPacked.close();
		}break;

		case '3': {
			system("cls");
			ofstream outFresh("Fresh", ios::binary | ios::app);
			// inputing the info for the new item
			f.input();
			// writing to binary file the data inputted by user
			outFresh.write((char*)&f, sizeof(FreshGroceries));
			outFresh.close();
		}break;

		case '4': {
			Purchase(); // function for customer purchasing
		}break;


		default: {
			cout << "Your choise is not available in menu!\nPlese, try one more time.\n\n";
		}
		
		} // swich ends
	} // for loop ends
	return 0;
}