#include <iostream> // Input & output
#include <string>  // Text
#include <ctime>   // Time sleep
#include <ctype.h> // Validation
#include <conio.h> // _getch()
#include <windows.h> // Loading
#include <fstream> // File handling 
#include <chrono>

// Header files
#include "Header.h"
#include "Loading.h"
#include "Vegetables.h"
#include "Water.h"
#include "BreadBakery.h"

using namespace std;

//Owner price & storage quantity changers
int price;
int quantity;
int Overall_Sum; // Calculating Overall sum "���"

//Password and login for Owner
string Owner_Login_Sign = "Rustam202";
string Owner_Parol_Sign = "Rustam202";

//string Owner_Login_Sign = "1";
//string Owner_Parol_Sign = "1";

// Objects
Security User_1;
Product_VegetablesFruits Test;
Product_WaterBeverages Test1;
Product_BreadBakery Test2;

// Declaretion Functions
void F_General_Menu();
void F_Sign_in();
void F_Developers();
void F_Logo(); // Logo "AliBazar" for User
void F_Logo_Owner(); // Logo "AliBazar" for Owner

void F_Owner_Main_Menu(); // Owner's Main Menu
void F_Owner_Products_Stotage();
void F_Owner_Customers_List();

void F_User_Main_Menu(); // User's Main Menu
void F_Table_For_Increasing_And_Decreasing(); // User
void F_Vegetables_Fruits_Menu(); // User
void F_Water_Beverages_Menu(); // User
void F_Bread_Bakery_Menu(); // User
void F_Cart_Check();

// Main Function
int main() {
	// Loading Time
    F_Loading();
	F_General_Menu();
	
	cout << "\n\n\t\t\t\t   Thank you for Attention!!!\n\n" << endl;
	system("pause");
	return 0;
}

void F_General_Menu() {
	// Main Authentication Menu 
	for (int i = 0; i < 1000; i++) {
		system("cls");
		cout << "____________________________________________________________________________________________________ \n";
		cout << "        A L I B A Z A R                                             A U T H E N T I C A T I O N     \n";
		cout << "____________________________________________________________________________________________________\n\n";
		cout << "\t\t\t\t\t  Authentication \n" << endl;
		cout << "\t\t\t\t\t   1. Sign in" << endl;
		cout << "\t\t\t\t\t   2. Sign up" << endl;
		cout << "\t\t\t\t\t   3. About" << endl;
		cout << "\t\t\t\t\t   0. Exit" << endl << endl;
		cout << "\t\t\t\t\t  Your Choice: ";
		switch (_getch()) {
		case 49: // Sign in
			system("cls");
			F_Sign_in();
			system("pause");
		    break;

		case 50: {   // Register ('sign up')   // Set details with validation    
			for (int i = 0; i != 1;) {
				system("cls");
				cout << "____________________________________________________________________________________________________ \n";
				cout << "        A L I B A Z A R                                             R E G I S T R A T I O N         \n";
				cout << "____________________________________________________________________________________________________\n\n";
				cout << "\t\t\t\t       Example of Registration: " << endl ;
				cout << "\t\t\t\t        ______________________" << endl;
				cout << "\t\t\t\t        User Name  : Abdullokh " << endl;
				cout << "\t\t\t\t        Telephone  : 974006102 " << endl;
				cout << "\t\t\t\t        Login      : Alimov_8 " << endl;
				cout << "\t\t\t\t        Password   : Alimov808 " << endl;
				cout << "\t\t\t\t        ______________________" << endl << endl;
				User_1.SetUser();   
				ValidationParol(User_1);
				ValidationName(User_1);
				ValidationTellNum(User_1);
				if (Validation == 3) {
					//////   File Handling For User Info
					ofstream User_1_Info;
					User_1_Info.open("User_Info.txt");  // Opening File
					// Setting User Info to Memory
					User_1_Info << Name_Memory << endl;
					User_1_Info << TellNum_Memory << endl;
					User_1_Info << Login_Memory << endl;
					User_1_Info << Parol_Memory << endl;
					User_1_Info.close();
					///////// End of the File Handling
					cout << "\t\t              __________________________________" << endl;
					cout << "\t\t                      Correct Validation" << endl;
					i++; 
					cout << "                          Please press any keyboard to continue program" << endl << endl; system("Pause");
					Validation = 0;
				}
				else {
					cout << "\t\t              __________________________________" << endl;
					cout << "\t\t                      Invalid Validation" << endl;
					cout << "                          Please press any keyboard to rewrite details" << endl << endl;
					system("Pause"); system("cls");
					Validation = 0;
				} // switch case ends
			} // for loop ends
		}break;

		case 51:   // Developers
			system("cls");
			F_Developers();
	        break;
		case 48:
			//i = 1000;
			system("exit");
			break;

		default:  cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
			
		} // switch case ends
	} // for loop ends
}

// Sign in Function
void F_Sign_in() {

	for (int i = 0; i < 1000; i++) {
		system("cls");
		cout << "____________________________________________________________________________________________________ \n";
		cout << "        A L I B A Z A R                                                       S I G N  I N          \n";
		cout << "____________________________________________________________________________________________________\n\n";
		cout << "\t\t\t\t\t     Sign in\n\n";
		cout << "\t\t\t\t\t1. Sign in as Owner" << endl;
		cout << "\t\t\t\t\t2. Sign in as User" << endl;
		cout << "\t\t\t\t\t0. Back" << endl << endl;
		cout << "\t\t\t\t\t   Your Choice: ";

		switch (_getch()) {
		case 49: {  // Sign in as Owner
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                          O W N E R          \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t         Owner Authentication\n\n";
			cout << "\t\t\t\t\t  Login    : "; cin >> Login_Sign;
			cout << "\t\t\t\t\t  Password : "; cin >> Parol_Sign;
			if (Login_Sign == Owner_Login_Sign && Parol_Sign == Owner_Parol_Sign) {
				// Owner's Menu
				F_Owner_Main_Menu();
				system("pause");
			}
			else {  // If Login hasn't Registered
				cout << "\n\n\t\t\t        Your Login and Password are Invalid." << endl;
				cout << "\t\t\t     Please press any key back to 'Sign in' Menu.\n\n" << endl;
				system("pause");
				F_Sign_in();
			} // else ends
		}break;

		case 50: {   // Sign in as User
			system("cls");
			//////   File Handling For User Info
			ifstream User_1_Info;
			User_1_Info.open("User_Info.txt");
			User_1_Info >> Name_Memory;
			User_1_Info >> TellNum_Memory;
			User_1_Info >> Login_Memory;
			User_1_Info >> Parol_Memory;
			User_1_Info.close();
			///////// End of the File Handling
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                     C U S T O M E R         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t         Customer Authentication\n\n";
			cout << "\t\t\t\t\t  Login    : "; cin >> Login_Sign;
			cout << "\t\t\t\t\t  Password : "; cin >> Parol_Sign;
			if (Login_Sign == Login_Memory && Parol_Sign == Parol_Memory) {
				/////// User Menu
				F_User_Main_Menu();
				///////
			}
			else {  // If Login didnt Register
				cout << "\n\n\t\t\t        Your Login and Password are Invalid." << endl;
				cout << "\t\t\t     Please press any key back to 'Sign in' Menu.\n\n" << endl;
				system("pause");
				F_Sign_in();
			} // else ends 
		}break;

		case 48: {   // Back
			system("cls");
			i = 1000;
			F_General_Menu();
		}break;

		default: 
			cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");

		} // switch
	} // for
}

void F_Developers() {
	cout << "____________________________________________________________________________________________________ \n";
	cout << "        A L I B A Z A R                                                           A B O U T        \n";
	cout << "____________________________________________________________________________________________________\n\n";
	cout << "\n\t\t\t\t'AliBazar' Online Shopping Aplication " << endl << endl;
	cout << "\t\t\t  Team Name: EightSoft " << endl;
	cout << "\t\t\t  Team Section: OOP2 - 004                         " << endl;
	cout << "\t\t\t  Team Members: " << endl;
	cout << "                             -----------------------------------------------\n";
	cout << "\t\t\t\t      Alimov Abdullokh  [U1910060]\n\t\t\t\t      Zokirov Rustam [U1910049] " << endl;
	cout << "                             -----------------------------------------------\n";

	cout << "\n\n\t\t           Press any keyboard for back to Menu \n\n" << endl;
	system("pause");
	F_General_Menu();
}

void F_Logo() {
	system("cls");
	cout << "____________________________________________________________________________________________________ \n";
	cout << "        A L I B A Z A R                                                    8. Account Info         \n";
	cout << "____________________________________________________________________________________________________\n\n";
}

void F_Logo_Owner() {
	system("cls");
	cout << "____________________________________________________________________________________________________ \n";
	cout << "        A L I B A Z A R                                                  O W N E R  M E N U         \n";
	cout << "____________________________________________________________________________________________________\n\n";
}

//Owner's Part lines 252 - 727
void F_Owner_Main_Menu() {
	// Entering as a Owner of shop
	for (int k = 0; k < 1000; k++) {
		F_Logo_Owner();
		cout << "      Main Menu\n\n";
		cout << "      1. Products in stock \n\n";
		cout << "      2. Customers list \n\n";
		cout << "      0. Back\n\n";
		cout << "      Your choice: ";

		switch (_getch()) {
		case 49: {
			  F_Owner_Products_Stotage();
		} break;

		case 50: {
			/*F_Owner_Customers_List();*/
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                           C U S T O M E R S  L I S T        \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\n\t\t\t   Customers list :" << endl << endl;
			cout << "\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t      Telephone  : " << TellNum_Memory << endl << endl << endl;
			
			system("pause");
		} break;

		
		case 48: {  // Back to Menu
			system("cls");
			k = 1000;
			F_Sign_in();
		} break;

		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
		} // switch 
	} // for loop 
}

void F_Owner_Products_Stotage(){
	for (int i = 0; i < 1000; i++) {
		F_Logo_Owner();
		cout << "  Products List                                Category                    Price          In Stock\n";
		cout << "____________________________________________________________________________________________________ \n";
		cout << " 1. Potatoes, Weight                          Vegetables & Fruits          " << Test.get_price_potatoes()                << "\t\t  " << Test.get_storage_quantity_potatoes()               << endl;
		cout << " 2. Yellow Carrot, Weight                     Vegetables & Fruits          " << Test.get_price_carrot()                  << "\t\t  " << Test.get_storage_quantity_carrot()                 << endl;
		cout << " 3. Onion, Weight                             Vegetables & Fruits          " << Test.get_price_onion()                   << "\t\t  " << Test.get_storage_quantity_onion()                  << endl;
		cout << " 4. Water, Hydrolife without gas 750ml        Water & Beverages            " << Test1.get_price_water_hydrolife_750ml()  << "\t\t  " << Test1.get_storage_quantity_water_hydrolife_750ml() << endl;
		cout << " 5. Drink, Aloe Original 500ml                Water & Beverages            " << Test1.get_price_drink_aloe_500ml()       << "\t\t  " << Test1.get_storage_quantity_drink_aloe_500ml()      << endl;
		cout << " 6. Nectar, Zet Apple 125ml                   Water & Beverages            " << Test1.get_price_nectar_zet_125ml()       << "\t\t  " << Test1.get_storage_quantity_nectar_zet_125ml()      << endl;
		cout << " 7. Bun Smart Food                            Bread & Bakery Products      " << Test2.get_price_bun_smart_food()         << "\t\t  " << Test2.get_storage_quantity_bun_smart_food()        << endl;
		cout << " 8. Cracker Tuc cheese 100g                   Bread & Bakery Products      " << Test2.get_price_cracker_tuc_cheese_100g() << "\t\t  " << Test2.get_storage_quantity_cracker_tuc_cheese_100g() << endl;
		cout << " 9. Bread Of SAMARKAND                        Bread & Bakery Products      " << Test2.get_price_bread_samarkand()         << "\t\t  " << Test2.get_storage_quantity_bread_samarkand() << endl;
		cout << " \n 0. Back\n";
		cout << " Make changes in: ";
		switch (_getch())
		{
		case '1': 			
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Potatoes, Weight                          Vegetables & Fruits             " << Test.get_price_potatoes() << "\t\t " << Test.get_storage_quantity_potatoes()+Test.get_storage_quantity_potatoes() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n";
				
				switch (_getch()) {
				case 49:
					cout << " Enter a new price: ";
					cin >> price;
					if (price >= 0) {
						Test.set_price_potatoes(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << " Enter a new quantity in storage: ";
					cin >> quantity;
					if (quantity > 0) {
						Test.set_storage_quantity_potatoes(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '2':			
		    for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Yellow Carrot, Weight                     Vegetables & Fruits             " << Test.get_price_carrot() << "\t\t " << Test.get_storage_quantity_carrot() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 3. Go back \n Press '1' or '2' or '0'\n\n ";
				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;
					if (price >= 0) {
						Test.set_price_carrot(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;

					if (quantity > 0) {
						Test.set_storage_quantity_carrot(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}

					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '3': 			
		    for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Onion, Weight                             Vegetables & Fruits             " << Test.get_price_onion() << "\t\t " << Test.get_storage_quantity_onion() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";
				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;
					if (price >= 0) {
						Test.set_price_onion(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;
					if (quantity > 0) {
						Test.set_storage_quantity_onion(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '4':		
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Water, Hydrolife without gas 750ml        Water & Beverages               " << Test1.get_price_water_hydrolife_750ml() << "\t\t " << Test1.get_storage_quantity_water_hydrolife_750ml() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";

				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;
					
					if (price >= 0) {
						Test1.set_price_water_hydrolife_750ml(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;					
					if (quantity > 0) {
						Test1.set_storage_quantity_water_hydrolife_750ml(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '5': 		
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Drink, Aloe Original 500ml                Water & Beverages               " << Test1.get_price_drink_aloe_500ml() << "\t\t " << Test1.get_storage_quantity_drink_aloe_500ml() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";

				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;

					if (price >= 0) {
						Test1.set_price_drink_aloe_500ml(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;
					
					if (quantity > 0) {
						Test1.set_storage_quantity_drink_aloe_500ml(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '6':		
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Nectar, Zet Apple 125ml                   Water & Beverages               " << Test1.get_price_nectar_zet_125ml() << "\t\t " << Test1.get_storage_quantity_nectar_zet_125ml() << endl;
					cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";

				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;	
					if (price >= 0) {
						Test1.set_price_nectar_zet_125ml(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;
					if (quantity > 0) {
						Test1.set_storage_quantity_nectar_zet_125ml(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '7':			
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Bun Smart Food                            Bread & Bakery Products         " << Test2.get_price_bun_smart_food() << "\t\t " << Test2.get_storage_quantity_bun_smart_food() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";
				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;	
					if (price >= 0) {
						Test2.set_price_bun_smart_food(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;
					if (quantity > 0) {
						Test2.set_storage_quantity_bun_smart_food(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '8':			
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Cracker Tuc cheese 100g                   Bread & Bakery Products         " << Test2.get_price_cracker_tuc_cheese_100g() << "\t\t " << Test2.get_storage_quantity_cracker_tuc_cheese_100g() << endl;
				cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";
				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;
					if (price >= 0) {
						Test2.set_price_cracker_tuc_cheese_100g(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;				
					if (quantity > 0) {
						Test2.set_storage_quantity_cracker_tuc_cheese_100g(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '9':			
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "\n  Product                                     Category                     Price         In Stock\n";
				cout << "____________________________________________________________________________________________________ \n";
				cout << " Bread Of SAMARKAND                        Bread & Bakery Products         " << Test2.get_price_bread_samarkand() << "\t\t " << Test2.get_storage_quantity_bread_samarkand() << endl;
	 		    cout << "\n 1. Change price \n 2. Change the quantity in storage\n 0. Go back \n Press '1' or '2' or '0'\n\n ";
				switch (_getch()) {
				case 49:
					cout << "Enter a new price: ";
					cin >> price;
					
					if (price >= 0) {
						Test2.set_price_bread_samarkand(price);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Price cannot be negative! Please check one more time.\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					cout << "Enter a new quantity in storage: ";
					cin >> quantity;					
					if (quantity > 0) {
						Test2.set_storage_quantity_bread_samarkand(quantity);
						cout << " Successfully changed!\n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Quantity cannot be negative\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' 
			}// 'for' loop 
			break;
		case '0': {  // Back to Menu
			system("cls");
			i = 1000;
			F_Sign_in();
		} break;

		case 'i' || 'I': { // User info   
			system("cls");
			cout << "\n\t\t\t   User Information:" << endl;;
			cout << "\t\t    _______________________________" << endl << endl;;
			cout << "\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t      Telephone  : " << TellNum_Memory << endl;
			cout << "\t\t      Login      : " << Login_Memory << endl;
			cout << "\t\t      Password   : " << Parol_Memory << endl << endl << endl;
			system("pause");
		}
			   break;
			
		default: { cout << "\n\t\t      Your choice is not available in Menu" << endl;
			cout << "\t\tPlease press any keyboard to continue program\n" << endl;
			system("pause");
		}
		} 
		
	} // for loop for products in stock  
}

void F_Owner_Customers_List(){
	system("cls");
	ofstream User_1_Info;
	User_1_Info.open("User_Info.txt");  // Opening File
	// Setting User Info to Memory
	User_1_Info << Name_Memory << endl;
	User_1_Info << TellNum_Memory << endl;
	//User_1_Info.close();
	cout << "\n\t\t\t   Customers list :" << endl;;
	cout << "\t\t    _______________________________" << endl << endl;;
	cout << "\t\t      User Name  : " << Name_Memory << endl;
	cout << "\t\t      Telephone  : " << TellNum_Memory << endl << endl << endl;
	system("pause");
}

// User's Part lines 728 - 1282
void F_User_Main_Menu() {
	// Entering as a Guest
	for (int i = 0; i < 1000; i++) {
		F_Logo();
		cout << "      Categories\n\n";
		cout << "      1. Vegetables & Fruits\n\n";
		cout << "      2. Water & Beverages\n\n";
		cout << "      3. Bread & Bakery Products\n\n";
		cout << "      4. Cart and Overall Sums\n\n";
		cout << "      0. Go Back\n\n";
		cout << "      Your choice: ";

		switch (_getch()) {
		case 49: {
			F_Vegetables_Fruits_Menu();
		} break;

		case 50: {
			F_Water_Beverages_Menu();
		} break;

		case 51: {
			F_Bread_Bakery_Menu();
		}
		case 52:
		{
			F_Cart_Check();
		}
			   break;
		case 48: {  // Back to Menu
			system("cls");
			i = 1000;
			F_Sign_in();
		} break;

		case 56: { // User info   
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                   U S E R  I N F O         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t    User Information:" << endl << endl;
			cout << "\t\t\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t\t\t      Telephone  : " << TellNum_Memory << endl;
			cout << "\t\t\t\t      Login      : " << Login_Memory << endl;
			cout << "\t\t\t\t      Password   : " << Parol_Memory << endl << endl << endl;
			system("pause");
		}
			   break;

		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
		} // switch 
	} // for loop 
}

void F_Table_For_Increasing_And_Decreasing() {

	cout << "     (+)   'Press 1'                        \n";
	cout << "     (-)   'Press 2'                        \n";
	cout << "     (0)   'Back'                           \n";
	cout << "____________________________________________________________________________________________________\n\n";
	cout << "     Add to Cart:  \n";
	//cin >> VariableForIncreasingAndDecreasing;
}

void F_Vegetables_Fruits_Menu() {
	for (int k = 0; k < 1000; k++) {
		F_Logo();
		cout << "      Categories -> Vegetables & Fruits \t\t Cart \n";
		cout << "____________________________________________________________________________________________________\n\n";
		cout << " 1. Potatoes, Weight \t\t\t\t\t"; cout << Test.get_quantity_potatoes() << " (kg)" << endl;
		cout << "    " << Test.get_price_potatoes() << " UZS for 1 kg\n\n";
		cout << " 2. Yellow Carrot, Weight \t\t\t\t"; cout << Test.get_quantity_carrot() << " (kg)" << endl;
		cout << "    " << Test.get_price_carrot() << " UZS for 1 kg\n\n";
		cout << " 3. Onion, Weight \t\t\t\t\t"; cout << Test.get_quantity_onion() << " (kg)" << endl;
		cout << "    " << Test.get_price_onion() << " UZS for 1 kg\n\n";
		cout << " 0. Back\n\n";
		cout << " Your choice: ";
		switch (_getch()) {
			// for potatoes
		case 49: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "      Categories -> Vegetables & Fruits \t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Potatoes, Weight \t\t\t\t\t"; cout << Test.get_quantity_potatoes() << " (kg)" << endl;
				cout << "     " << Test.get_price_potatoes() << " UZS for 1 kg\n\n";
				//
				
	            F_Table_For_Increasing_And_Decreasing();
				
				switch (_getch()) {
				case 49:
					if (Test.get_storage_quantity_potatoes() > 0) { // checking for storage and user needs
						Test.set_quantity_potatoes_incrementing();
						cout << " Quantity of Potatoes (kg): " << Test.get_quantity_potatoes() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test.get_quantity_potatoes() > 0) { // Check for (-1 kg)
						Test.set_quantity_potatoes_decrementing();
						cout << " Quantity of Potatoes (kg): " << Test.get_quantity_potatoes() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for potato
			}// 'for' loop for potato
		}
			   break;
			   // case 2 - for carrot
		case 50: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				// Rustam have changed
				cout << "      Categories -> Vegetables & Fruits \t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Yellow Carrot, Weight \t\t\t\t"; cout << Test.get_quantity_carrot() << " (kg)" << endl;
				cout << "     " << Test.get_price_carrot() << " UZS for 1 kg\n\n";
			
				F_Table_For_Increasing_And_Decreasing();
		
				switch (_getch()) {
				case 49:
				
					//
					if (Test.get_storage_quantity_carrot() > 0) { // checking for storage and user needs
						Test.set_quantity_carrot_incrementing();
						cout << " Quantity of Carrot (kg): " << Test.get_quantity_carrot() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);

					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					//
					break;
				case 50:
					if (Test.get_quantity_carrot() > 0) { // Check for (-1 kg)
						Test.set_quantity_carrot_decrementing();
						cout << " Quantity of Carrot (kg): " << Test.get_quantity_carrot() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg) cannot  decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for carrot
			}// 'for' loop for carrot
		}
			   break;
			   // case 3 - for onion
		case 51: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				// Rustam have changed
				cout << "      Categories -> Vegetables & Fruits \t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Onion, Weight \t\t\t\t\t"; cout << Test.get_quantity_onion() << " (kg)" << endl;
				cout << "     " << Test.get_price_onion() << " UZS for 1 kg\n\n";
				//
				F_Table_For_Increasing_And_Decreasing();

				switch (_getch()) {
				case 49:				
					if (Test.get_storage_quantity_onion() > 0) { // checking for storage and user needs
						Test.set_quantity_onion_incrementing();
						cout << " Quantity of Onion (kg): " << Test.get_quantity_onion() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
			       	}
					else {
					cout << " Product is over / finished. Sorry!\n";
					Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test.get_quantity_onion() > 0) { // Check for (-1 kg)
						Test.set_quantity_onion_decrementing();
						cout << " Quantity of Onion (kg): " << Test.get_quantity_onion() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg) cannot  decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for onion
			}// 'for' loop for onion
		}
			   break;
			   // Back to F_User menu 
		case 48: {   k = 1000;
			F_User_Main_Menu(); }
			   break;
		case 56: { // User info   
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                   U S E R  I N F O         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t    User Information:" << endl << endl;
			cout << "\t\t\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t\t\t      Telephone  : " << TellNum_Memory << endl;
			cout << "\t\t\t\t      Login      : " << Login_Memory << endl;
			cout << "\t\t\t\t      Password   : " << Parol_Memory << endl << endl << endl;
			system("pause");
		}
			   break;
		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}	
		} // switch ends
	} // loop ends
} // function ends

void F_Water_Beverages_Menu() {
	for (int k = 0; k < 1000; k++) {
		F_Logo();
		cout << "      Categories -> Water & Beverages \t\t\t Cart \n";
		cout << "____________________________________________________________________________________________________\n\n";
		cout << " 1. Water, Hydrolife without gas 750ml \t\t\t"; cout << Test1.get_quantity_water_hydrolife_750ml() << " (pc)" << endl;
		cout << "    " << Test1.get_price_water_hydrolife_750ml() << " UZS for 1 pc\n\n";
		cout << " 2. Drink, Aloe Original 500ml \t\t\t\t"; cout << Test1.get_quantity_drink_aloe_500ml() << " (pc)" << endl;
		cout << "    " << Test1.get_price_drink_aloe_500ml() << " UZS for 1 pc\n\n";
		cout << " 3. Nectar, Zet Apple 125ml \t\t\t\t"; cout << Test1.get_quantity_nectar_zet_125ml() << " (pc)" << endl;
		cout << "    " << Test1.get_price_nectar_zet_125ml() << " UZS for 1 pc\n\n";
		cout << " 0. Back\n\n";
		cout << " Your choice: ";
		switch (_getch()) {
		case 49: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "      Categories -> Water & Beverages \t\t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Water, Hydrolife without gas 750ml \t\t  "; cout << Test1.get_quantity_water_hydrolife_750ml() << " (pc)" << endl;
				cout << "     " << Test1.get_price_water_hydrolife_750ml() << " UZS for 1 pc\n\n";

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Test1.get_storage_quantity_water_hydrolife_750ml() > 0) { // checking for storage and user needs
						Test1.set_quantity_water_hydrolife_750ml_incrementing();
						cout << " Quantity of Bottles (pc): " << Test1.get_quantity_water_hydrolife_750ml() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test1.get_quantity_water_hydrolife_750ml() > 0) { // Check for (-1 kg)
						Test1.set_quantity_water_hydrolife_750ml_decrementing();
						cout << " Quantity of Bottles (pc): " << Test1.get_quantity_water_hydrolife_750ml() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for water
			}// 'for' loop for water
		}
			   break;
			   // case 2 - for drink_aloe_500ml
		case 50: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				// Rustam have changed
				cout << "      Categories -> Water & Beverages \t\t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Drink, Aloe Original 500ml \t\t\t  "; cout << Test1.get_quantity_drink_aloe_500ml() << " (pc)" << endl;
				cout << "     " << Test1.get_price_drink_aloe_500ml() << " UZS for 1 pc\n\n";
				//
				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Test1.get_storage_quantity_drink_aloe_500ml() > 0) { // checking for storage and user needs
						Test1.set_quantity_drink_aloe_500ml_incrementing();
						cout << " Quantity of Bottles (pc): " << Test1.get_quantity_drink_aloe_500ml() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test1.get_quantity_drink_aloe_500ml() > 0) { // Check for (-1 kg)
						Test1.set_quantity_drink_aloe_500ml_decrementing();
						cout << " Quantity of Bottles (pc): " << Test1.get_quantity_drink_aloe_500ml() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (pc) cannot  decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for aloe drink
			}// 'for' loop for aloe drink
		}
			   break;
			   // case 3 - for nectar_zet_125ml
		case 51: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				// Rustam have changed
				cout << "      Categories -> Water & Beverages \t\t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Nectar, Zet Apple 125ml \t\t\t\t"; cout << Test1.get_quantity_nectar_zet_125ml() << " (pc)" << endl;
				cout << "     " <<Test1.get_price_nectar_zet_125ml() << " UZS for 1 pc\n\n";
				//
				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					//
					if (Test1.get_storage_quantity_nectar_zet_125ml() > 0) { // checking for storage and user needs
						Test1.set_quantity_nectar_zet_125ml_incrementing();
						cout << " Quantity of Nectar 125ml (pc): " << Test1.get_quantity_nectar_zet_125ml() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test1.get_quantity_nectar_zet_125ml() > 0) { // Check for (-1 kg)
						Test1.set_quantity_nectar_zet_125ml_decrementing();
						cout << " Quantity of Nectar 125ml (pc): " << Test1.get_quantity_nectar_zet_125ml() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (pc) cannot  decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for nectar_zet_125ml
			}// 'for' loop for nectar_zet_125ml
		}
			   break;
			   // Back to F_User menu 
		case 48: {   k = 1000;
			F_User_Main_Menu(); }
			   break;
		case 56: { // User info   
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                   U S E R  I N F O         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t    User Information:" << endl << endl;
			cout << "\t\t\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t\t\t      Telephone  : " << TellNum_Memory << endl;
			cout << "\t\t\t\t      Login      : " << Login_Memory << endl;
			cout << "\t\t\t\t      Password   : " << Parol_Memory << endl << endl << endl;
			system("pause");
		}
			   break;
		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
		} // switch ends

	} // loop ends

} // function ends

void F_Bread_Bakery_Menu() {
	for (int k = 0; k < 1000; k++) {
		F_Logo();
		cout << "      Categories -> Bread & Bakery Products \t\t Cart \n";
		cout << "____________________________________________________________________________________________________\n\n";
		cout << " 1. Bun Smart Food \t\t\t\t\t"; cout << Test2.get_quantity_bun_smart_food() << " (pc)" << endl;
		cout << "    " << Test2.get_price_bun_smart_food() << " UZS for 1 pc\n\n";
		cout << " 2. Cracker Tuc cheese 100g \t\t\t\t"; cout << Test2.get_quantity_cracker_tuc_cheese_100g() << " (pc)" << endl;
		cout << "    " << Test2.get_price_cracker_tuc_cheese_100g() << " UZS for 1 pc\n\n";
		cout << " 3. Bread Of SAMARKAND \t\t\t\t\t"; cout << Test2.get_quantity_bread_samarkand() << " (pc)" << endl;
		cout << "    " << Test2.get_price_bread_samarkand() << " UZS for 1 pc\n\n";
		cout << " 0. Back\n\n";
		cout << " Your choice: ";
		switch (_getch()) {
		case 49: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "      Categories -> Bread & Bakery Products \t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Bun Smart Food \t\t\t\t\t"; cout << Test2.get_quantity_bun_smart_food() << " (pc)" << endl;
				cout << "     " << Test2.get_price_bun_smart_food() << " UZS for 1 pc\n\n";

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Test2.get_storage_quantity_bun_smart_food() > 0) { // checking for storage and user needs
						Test2.set_quantity_bun_smart_food_incrementing();
						cout << " Quantity of Bun Smart Food (pc): " << Test2.get_quantity_bun_smart_food() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test2.get_quantity_bun_smart_food() > 0) { // Check for (-1 pc)
						Test2.set_quantity_bun_smart_food_decrementing();
						cout << " Quantity of Bun Smart Food (pc): " << Test2.get_quantity_bun_smart_food() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for bun bread
			}// 'for' loop for bun bread
		}
			   break;
			   // case 2 - for cracker_tuc_cheese_100g
		case 50: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				// Rustam have changed
				cout << "      Categories -> Bread & Bakery Products \t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Cracker Tuc cheese 100g  \t\t\t\t"; cout << Test2.get_quantity_cracker_tuc_cheese_100g() << " (pc)" << endl;
				cout << "     " << Test2.get_price_cracker_tuc_cheese_100g() << " UZS for 1 pc\n\n";
				//
				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					
					if (Test2.get_storage_quantity_cracker_tuc_cheese_100g() > 0) { // checking for storage and user needs
						Test2.set_quantity_cracker_tuc_cheese_100g_incrementing();
						cout << " Quantity of Cracker Tuc Cheese 100g (pc): " << Test2.get_quantity_cracker_tuc_cheese_100g() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
						
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test2.get_quantity_cracker_tuc_cheese_100g() > 0) { // Check for (-1 pc)
						Test2.set_quantity_cracker_tuc_cheese_100g_decrementing();
						cout << " Quantity of Cracker Tuc Cheese 100g (pc): " << Test2.get_quantity_cracker_tuc_cheese_100g() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (pc) cannot  decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for cracker_tuc_cheese_100g
			}// 'for' loop for cracker_tuc_cheese_100g
		}
			   break;
			   // case 3 - for bread_samarkand
		case 51: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				// Rustam have changed
				cout << "      Categories -> Bread & Bakery Products \t\t Cart \n";
				cout << "____________________________________________________________________________________________________\n";
				cout << "     Bread Of SAMARKAND \t\t\t\t  "; cout << Test2.get_quantity_bread_samarkand() << " (pc)" << endl;
				cout << "     " << Test2.get_price_bread_samarkand() << " UZS for 1 pc\n\n";
				
				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Test2.get_storage_quantity_bread_samarkand() > 0) { // checking for storage and user needs
						Test2.set_quantity_bread_samarkand_incrementing();
						cout << " Quantity of Bread Of SAMARKAND (pc): " << Test2.get_quantity_bread_samarkand() << endl;
						cout << "   Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (Test2.get_quantity_bread_samarkand() > 0) { // Check for (-1 pc)
						Test2.set_quantity_bread_samarkand_decrementing();
						cout << " Quantity of Bread Of SAMARKAND (pc): " << Test2.get_quantity_bread_samarkand() << endl;
						cout << "   Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (pc) cannot  decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for bread_samarkand
			}// 'for' loop for bread_samarkand
		}
			   break;
			   // Back to F_User menu 
		case 48: {   k = 1000;
			F_User_Main_Menu(); }
			   break;
		case 56: { // User info   
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                   U S E R  I N F O         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t    User Information:" << endl << endl;
			cout << "\t\t\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t\t\t      Telephone  : " << TellNum_Memory << endl;
			cout << "\t\t\t\t      Login      : " << Login_Memory << endl;
			cout << "\t\t\t\t      Password   : " << Parol_Memory << endl << endl << endl;
			system("pause");
		}
			   break;
		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
		} // switch ends

	} // loop ends

} // function ends

// Cart Function 
void F_Cart_Check() {
	system("cls");
	cout << "____________________________________________________________________________________________________ \n";
	cout << "                                              C A R T \n";
	cout << "____________________________________________________________________________________________________\n\n";
	// Check
	for (int i = 1; i <= 1; i++) {
		if (Test.get_quantity_potatoes() > 0) {
			cout << "\n\t  " << i << "." << "Potatoes, Weight    " << Test.get_quantity_potatoes() << " (kg)     Price: " << Test.get_quantity_potatoes() * Test.get_price_potatoes();
			i++;
			Overall_Sum += Test.get_quantity_potatoes() * Test.get_price_potatoes();
		}
		if (Test.get_quantity_carrot() > 0) {
			cout << "\n\t  " << i << "." << "Carrot, Weight      " << Test.get_quantity_carrot() << " (kg)     Price: " << Test.get_quantity_carrot() * Test.get_price_carrot();
			i++;
			Overall_Sum += Test.get_quantity_carrot() * Test.get_price_carrot();
		}
		if (Test.get_quantity_onion() > 0) {
			cout << "\n\t  " << i << "." << "Onion, Weight       " << Test.get_quantity_onion() << " (kg)     Price: " << Test.get_quantity_onion() * Test.get_price_onion();
			i++;
			Overall_Sum += Test.get_quantity_onion() * Test.get_price_onion();
		}
		if (Test1.get_quantity_drink_aloe_500ml() > 0) {
			cout << "\n\t  " << i << "." << "Aloe 500ml          " << Test1.get_quantity_drink_aloe_500ml() << " (pc)     Price: " << Test1.get_quantity_drink_aloe_500ml() * Test1.get_price_drink_aloe_500ml();
			i++;
			Overall_Sum += Test1.get_quantity_drink_aloe_500ml() * Test1.get_price_drink_aloe_500ml();
		}
		if (Test1.get_quantity_nectar_zet_125ml() > 0) {
			cout << "\n\t  " << i << "." << "Nectar Zet 125ml    " << Test1.get_quantity_nectar_zet_125ml() << " (pc)     Price: " << Test1.get_quantity_nectar_zet_125ml() * Test1.get_price_nectar_zet_125ml();
			i++;
			Overall_Sum += Test1.get_quantity_nectar_zet_125ml() * Test1.get_price_nectar_zet_125ml();
		}
		if (Test1.get_quantity_water_hydrolife_750ml() > 0) {
			cout << "\n\t  " << i << "." << "Hydrolife 750ml     " << Test1.get_quantity_water_hydrolife_750ml() << " (pc)     Price: " << Test1.get_quantity_water_hydrolife_750ml() * Test1.get_price_water_hydrolife_750ml();
			i++;
			Overall_Sum += Test1.get_quantity_water_hydrolife_750ml() * Test1.get_price_water_hydrolife_750ml();
		}
		if (Test2.get_quantity_bread_samarkand() > 0) {
			cout << "\n\t  " << i << "." << "Samarkand Bread ,   " << Test2.get_quantity_bread_samarkand() << " (pc)     Price: " << Test2.get_quantity_bread_samarkand() * Test2.get_price_bread_samarkand();
			i++;
			Overall_Sum += Test2.get_quantity_bread_samarkand() * Test2.get_price_bread_samarkand();
		}
		if (Test2.get_quantity_bun_smart_food() > 0) {
			cout << "\n\t  " << i << "." << "Bun Smart Food ,    " << Test2.get_quantity_bun_smart_food() << " (pc)     Price: " << Test2.get_quantity_bun_smart_food() * Test2.get_price_bun_smart_food();
			i++;
			Overall_Sum += Test2.get_quantity_bun_smart_food() * Test2.get_price_bun_smart_food();
		}
		if (Test2.get_quantity_cracker_tuc_cheese_100g() > 0) {
			cout << "\n\t  " << i << "." << "Tuc Cheese 100g ,   " << Test2.get_quantity_cracker_tuc_cheese_100g() << " (pc)     Price: " << Test2.get_quantity_cracker_tuc_cheese_100g() * Test2.get_price_cracker_tuc_cheese_100g();
			i++;
			Overall_Sum += Test2.get_quantity_cracker_tuc_cheese_100g() * Test2.get_price_cracker_tuc_cheese_100g();
		}

		if (i == 1) { // if nothing go to Menu
			cout << "\n\t You do not have any product in CART.\n";
			cout << "\tEnter any keyboard go to Menu\n\n" << endl;
			system("pause");
			Overall_Sum = 0;
			F_User_Main_Menu();
		}
		if (i > 1) { // Menu for buying or back 
			cout << "\n\n\t\t Overall Price: " << Overall_Sum << " Sum" << endl;
			cout << "\n 1. Buy it now" << endl;
			cout << " 0. Go Back to Menu" << endl;

			switch (_getch()) {
			case 49: { //buy
				system("cls");
				////
				// We need to add
				////
				cout << "Works !" << endl;
				system("pause");
			}
				   break;
			case 48: { // Back
				system("cls");
				Overall_Sum = 0;
				F_User_Main_Menu();
			}
				   break;
			default: F_Cart_Check();
			} // switch ends

		} //if ends

	}// loop end
	//system("pause");
	cout<<"Hello,Kishore!";
} // function ends

