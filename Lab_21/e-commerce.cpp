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

    // PRECOGS_FIX: add a virtual destructor to ensure derived destructors run when deleted via Item*
    virtual ~Item() {}

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
        // Use getline to accept spaces and perform simple validation to avoid malformed UIC/name
        cout << "Enter the name of a new product: ";
        {
            string tmp;
            getline(cin >> ws, tmp);
            if (tmp.empty()) tmp = "Unknown";
            if (tmp.size() > 200) tmp = tmp.substr(0, 200); // PRECOGS_FIX: basic length check
            name = tmp;
        }
        cout << "Enter the UIC of a new product: ";
        {
            string tmp;
            getline(cin >> ws, tmp);
            if (tmp.empty()) tmp = "Unknown";
            if (tmp.size() > 64) tmp = tmp.substr(0, 64); // PRECOGS_FIX: basic length check
            // simple character whitelist (alphanumeric and -,_)
            string filtered;
            for (char c : tmp) if (isalnum((unsigned char)c) || c=='-' || c=='_') filtered.push_back(c);
            UIC = filtered.empty() ? tmp.substr(0, min((size_t)16, tmp.size())) : filtered;
        }
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
			return; // PRECOGS_FIX: prevent uncontrolled recursion by returning instead of calling main()
		}
			break;

		default: {
			cout << "Your choise is not available in menu!\nPlese, try one more time.\n\n";
		}

		} // swich ends
	} // for loop ends
}

int main() {
	using namespace std;
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

			// Validate that files opened successfully
			if (!inPacked.is_open() && !inFresh.is_open()) {
				cout << "No product files found.\n";
				system("pause");
				break;
			}

			cout << left << setw(20) << "Name" << setw(15) << "UIC" << setw(20) << "Price" << setw(15) << "Quantity" << endl;

			// Safe read: check file size and bounds before reading records
			if (inPacked.is_open()) {
				inPacked.seekg(0, ios::end);
				streampos packedSize = inPacked.tellg();
				inPacked.seekg(0, ios::beg);

				if (packedSize <= 0) {
					// empty file, nothing to display
				} else if (packedSize % sizeof(PackedGroceries) != 0) {
					cout << "Packed file corrupted or has unexpected format. Skipping.\n";
				} else {
					size_t count = static_cast<size_t>(packedSize / sizeof(PackedGroceries));
					// PRECOGS_FIX: limit number of records to a sane maximum to avoid resource exhaustion
					const size_t MAX_RECORDS = 10000;
					if (count > MAX_RECORDS) count = MAX_RECORDS;
					for (size_t idx = 0; idx < count; ++idx) {
						PackedGroceries tmp{}; // ensure zero-initialized
						inPacked.read(reinterpret_cast<char*>(&tmp), sizeof(PackedGroceries));
						if (!inPacked) break;
						// Note: further field-level validation should be performed inside display()/class methods
						tmp.display();
					}
				}
				inPacked.close();
			}

			if (inFresh.is_open()) {
				inFresh.seekg(0, ios::end);
				streampos freshSize = inFresh.tellg();
				inFresh.seekg(0, ios::beg);

				if (freshSize <= 0) {
					// no records
				} else if (freshSize % sizeof(FreshGroceries) != 0) {
					cout << "Fresh file corrupted or has unexpected format. Skipping.\n";
				} else {
					size_t count = static_cast<size_t>(freshSize / sizeof(FreshGroceries));
					// PRECOGS_FIX: limit number of records to a sane maximum to avoid resource exhaustion
					const size_t MAX_RECORDS = 10000;
					if (count > MAX_RECORDS) count = MAX_RECORDS;
					for (size_t idx = 0; idx < count; ++idx) {
						FreshGroceries tmp{}; // ensure zero-initialized
						inFresh.read(reinterpret_cast<char*>(&tmp), sizeof(FreshGroceries));
						if (!inFresh) break;
						// Note: further field-level validation should be performed inside display()/class methods
						tmp.display();
					}
				}
				inFresh.close();
			}

			system("pause");
		}break;

		case '2': {
			system("cls");
			// inputing the info for the new item
			ofstream outPacked("Packed", ios::binary | ios::app);
			if (!outPacked.is_open()) {
				cout << "Failed to open Packed file for writing.\n";
				break;
			}
			p.input();
			// PRECOGS_FIX: check/validate object fields inside p.input() or before writing; ensure file opened
			outPacked.write(reinterpret_cast<const char*>(&p), sizeof(PackedGroceries));
			outPacked.close();
		}break;

		case '3': {
			system("cls");
			ofstream outFresh("Fresh", ios::binary | ios::app);
			if (!outFresh.is_open()) {
				cout << "Failed to open Fresh file for writing.\n";
				break;
			}
			f.input();
			// PRECOGS_FIX: check/validate object fields inside f.input() or before writing; ensure file opened
			outFresh.write(reinterpret_cast<const char*>(&f), sizeof(FreshGroceries));
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
