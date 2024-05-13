// "ALIBAZAR Version 3.0" - ware updated all classes for products
//                        - was updated the password view (added *)
//                        - customers list
//                        - modified the the products view for owner
//                        - modified the main function for chnaging the proce and quantity of product
// Done by 'Rustam Zokirov - 'U1910049' and 'Alimov Abdullokh - U1910060'
// EightSoft Academy Product
// All rights reserved


#include <iostream>  // I/O stream
#include <string>    // Text
#include <ctime>     // Time 'sleep' function
#include <ctype.h>   // Validation check
#include <conio.h>   // 'getch' function
#include <Windows.h> // Loading_Page
#include <fstream>   // File handling 
#include <iomanip>   // 'setfill' function

// Header Files
// All extra classes are there
#include "Products.h"     // Classes for products
#include "Person.h"       // User part 
#include "Loading_Page.h" // Loading Animation
#include "Validation.h"   // Validation for User inputted information
#include "Password_Vali_Asterisk.h"   // Password "********"

using namespace std;

// Objects
Validation_C User_Validtaion;
User User_1(Name_Memory, TellNum_Memory, Login_Memory, Parol_Memory);

// Product Types
Class_Of_Products1 Product1_1("Potatoes", "Vegetables & Fruits", 7890.0, 10), Product1_2("Carrots", "Vegetables & Fruits", 4890.0, 10), Product1_3("Onion", "Vegetables & Fruits", 3600.0, 10);
Class_Of_Products2 Product2_1("Water", "Water & Beverages", 1590.0, 10), Product2_2("Pepsi", "Water & Beverages", 3590.0, 10), Product2_3("Nectar", "Water & Beverages", 7550.0, 10);
Class_Of_Products3 Product3_1("Pizza", "Fast Food Products", 48000.0, 10), Product3_2("Burger", "Fast Food Products", 19000.0, 10), Product3_3("Potatoe Fries", "Fast Food Products", 15000.0, 10);


// Global Values 
long double Overall_Sum;
float Ch_Price, Ch_Quantity;
string Product_Name = "" , Product_Class = "";


// Password and login for Owner
string Owner_Login_Sign = "1";
string Owner_Parol_Sign = "1";  

// Functions 
// Declaretion Functions
void F_General_Menu();
void F_Sign_in();
void F_Developers();
void F_Logo(); // Logo "AliBazar" for User
void F_Logo_Owner(); // Logo "AliBazar" for Owner


void F_User_Main_Menu(); // User's Main Menu
void F_Table_For_Increasing_And_Decreasing(); // User
void F_Class_Of_Products1_Menu();
void F_Class_Of_Products2_Menu();
void F_Class_Of_Products3_Menu();
void F_Cart_Check();


void F_Owner_Main_Menu(); // Owner's Main Menu
void F_Modify_Info_Products(int take_product_location);
void F_Owner_Products_Stotage();
void F_Owner_Customers_List();


///////////////////////////////////////////////////////////////////////////////
int main() {

	//Loading
	F_Loading();
	F_General_Menu();

	system("pause");
	return 0;
}


void F_General_Menu() {
	// Main Menu 
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
		case 49: { // Sign in
			system("cls");
			F_Sign_in();
			system("pause");
		}
			   break;

		case 50: {  // Register
					// Set details with validation 
			for (int i = 0; i != 1;) {
				system("cls");
				cout << "____________________________________________________________________________________________________ \n";
				cout << "        A L I B A Z A R                                             R E G I S T R A T I O N         \n";
				cout << "____________________________________________________________________________________________________\n\n";
				cout << "\t\t\t\t       Example of Registration: " << endl;
				cout << "\t\t\t\t       ________________________" << endl;
				cout << "\t\t\t\t        User Name : Abdullokh " << endl;
				cout << "\t\t\t\t        Telephone : 974006102 " << endl;
				cout << "\t\t\t\t        Login     : Alimov_8 " << endl;
				cout << "\t\t\t\t        Password  : Alimov808 " << endl;
				cout << "\t\t\t\t       ________________________" << endl << endl;
				User_Validtaion.SetUser();

				////////////

				ValidationParol(User_Validtaion);
				ValidationName(User_Validtaion);
				ValidationTellNum(User_Validtaion);

				if (Validation == 3) {
					////// File Handling For User Info
					ofstream User_Info;
					User_Info.open("User_Info.txt", ios::app);  // Opening File

					// Setting User Info in Memory
					User_Info << Name_Memory << endl;
					User_Info << TellNum_Memory << endl;
					User_Info << Login_Memory << endl;
					User_Info << Parol_Memory << endl;
					User_Info.close();
					///////// End of the File Handling

					cout << "\t\t\t\t __________________________________" << endl;
					cout << "\t\t\t\t      Correct Validation" << endl;
					i++;
					cout << "\t\t\t\tPlease press any key to continue..." << endl << endl;
					system("Pause");
					Validation = 0;
				}
				else {
					cout << "\t\t\t\t __________________________________" << endl;
					cout << "\t\t\t\t       Invalid Validation" << endl;
					cout << "\t\t   Please press '1' to rewrite || Press any key to go back to menu" << endl << endl;
					Validation = 0;
					switch (_getch()) {
					case 49: {
						// Rewriting i=0; 
					}
						   break;

					default: F_General_Menu(); 
						// Go back 
					}

				} // else
			}
		}
			   break;

		case 51: {  // Developers
			system("cls");
			F_Developers();
		}
			   break;

		case 48: {  // Developers
			system("cls");
			cout << "\n\n\n\n\t\t\t\tThank you for your attention!\n\n\n\n\n\n\n\n\n\t\t\t\t";

			system("pause");
		}
			   break;

		default: {  cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
			   break;
		}
	}

}


void F_Developers() {
	cout << "____________________________________________________________________________________________________ \n";
	cout << "        A L I B A Z A R                                                           A B O U T        \n";
	cout << "____________________________________________________________________________________________________\n\n";
	cout << "\n\t\t\t\t'AliBazar' Online Shopping Aplication " << endl << endl;
	cout << "\t\t\t\t   Team Name: EightSoft " << endl;
	cout << "\t\t\t\tTeam Section: OOP2 - 004                         " << endl;
	cout << "\t\t\t\tTeam Members: ";
	cout << "Alimov Abdullokh [U1910060]\n\t\t\t\t\t      Zokirov Rustam   [U1910049] " << endl;

	cout << "\n\n\t\t\t\tPress any key to go back to Menu \n\n" << endl;
	system("pause");
}


void F_Sign_in() {
	// Sign in Function
	for (int i = 0; i < 1000; i++) {
		system("cls");
		cout << "____________________________________________________________________________________________________ \n";
		cout << "        A L I B A Z A R                                                       S I G N  I N          \n";
		cout << "____________________________________________________________________________________________________\n\n";
		cout << "\t\t\t\t\t   Sign in\n\n";
		cout << "\t\t\t\t\t1. Sign in as Owner" << endl;
		cout << "\t\t\t\t\t2. Sign in as User" << endl;
		cout << "\t\t\t\t\t0. Back" << endl << endl;
		cout << "\t\t\t\t\t  Your Choice: ";

		switch (_getch()) {
		case 49: { // Sign in as Owner

			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                          O W N E R          \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t        Owner Authentication\n\n";
			cout << "\t\t\t\t\tLogin    : "; cin >> Login_Sign;
			//cout << "\t\t\t\t\tPassword : "; cin >> Parol_Sign;
			F_Password_Val();
			Parol_Sign = Password_Val;

			if (Login_Sign == Owner_Login_Sign && Parol_Sign == Owner_Parol_Sign) {
				/////// Owner's Menu
				F_Owner_Main_Menu();
				//////
				system("pause");
			}
			else {  // If Login hasn't Registered
				cout << "\n\n\t\t\t        Your Login and Password are Invalid." << endl;
				cout << "\t\t\t   Please press any key to go back to 'Sign in' Menu.\n\n" << endl;
				system("pause");
				F_Sign_in();
			}
		}   
			   break;

		case 50: {  // Sign in as User
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                     C U S T O M E R         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t      Customer Authentication\n\n";
			cout << "\t\t\t\t\tLogin    : "; cin >> Login_Sign;
			F_Password_Val();
			Parol_Sign = Password_Val;
			//////   File Handling For User Info
			ifstream Search;
			Search.open("User_Info.txt");

			while (Search) {
				Search >> Name_Memory;
				Search >> TellNum_Memory;
				Search >> Login_Memory;
				Search >> Parol_Memory;
				if (Login_Sign == Login_Memory && Parol_Sign == Parol_Memory) {
					User User_1(Name_Memory, TellNum_Memory, Login_Memory, Parol_Memory);
					F_User_Main_Menu();
				}
			}
			Search.close();
			///////// End of the File Handling

			cout << "\n\n\t\t\t        Your Login and Password are Invalid." << endl;
			cout << "\t\t\t   Please press any key to go back to 'Sign in' Menu.\n\n" << endl;
			system("pause");
			F_Sign_in();

		}
			   break;

		case 48: {  // Back
			system("cls");
			i = 1000;
			F_General_Menu();

		}
			   break;

		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
			   break;
		}
	}

}

// User
void F_Logo() {
	system("cls");
	cout << "____________________________________________________________________________________________________ \n";
	cout << "        A L I B A Z A R                                                    8. Account Info         \n";
	cout << "____________________________________________________________________________________________________\n\n";
}


void F_User_Main_Menu() {
	// Entering as a Guest
	for (int i = 0; i < 1000; i++) {

		F_Logo();

		cout << "       Categories\n\n";
		cout << "       1. Vegetables & Fruits\n\n";
		cout << "       2. Water & Beverages\n\n";
		cout << "       3. Fast Food Products\n\n";
		cout << "       4. Cart and Overall Sums\n\n";
		cout << "       0. Go Back\n\n";
		cout << "       Your choice: ";

		switch (_getch()) {
		case 49: {
			F_Class_Of_Products1_Menu();
		} break;

		case 50: {
			F_Class_Of_Products2_Menu();
		} break;

		case 51: {
			F_Class_Of_Products3_Menu();
		} break;

		case 52:{
			F_Cart_Check();
		}break;

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
			cout << "\t\t\t\t      User Information :" << endl << endl;
			cout << "\t\t\t\t      User Name : " << Name_Memory << endl;
			cout << "\t\t\t\t      Telephone : " << TellNum_Memory << endl;
			cout << "\t\t\t\t      Login     : " << Login_Memory << endl;
			cout << "\t\t\t\t      Password  : " << Parol_Memory << endl << endl << endl;
			system("pause");
		}
			   break;

		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
			   break;
		} // switch 
	} // for loop 
}


void F_Table_For_Increasing_And_Decreasing() {
	cout << "____________________________________________________________________________________________________\n";
	cout << "     (+)   'Press 1'                        \n";
	cout << "     (-)   'Press 2'                        \n";
	cout << "     (0)   'Back'                           \n";
	cout << "____________________________________________________________________________________________________\n\n";
	cout << "     Add to Cart:  \n";
	//cin >> VariableForIncreasingAndDecreasing;
}


void F_Class_Of_Products1_Menu() {
	for (int k = 0; k < 1000; k++) {
    	F_Logo();

		cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
		Product1_1.Display();
		Product1_2.Display();
		Product1_3.Display();
		position1 = 1;

		cout << " 0. Back\n\n";
		cout << " Your choice: ";

		switch (_getch()) {
			// for Product1_1
		case 49: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product1_1.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();

				switch (_getch()) {
				case 49:
					if (Product1_1.getQuantity() > 0) { // checking for storage and user needs
						User_1.Product1_1_User++;
						Product1_1.quantity--;
						cout << " Quantity of "<< Product1_1.getName() << " - " << User_1.Product1_1_User << endl;
						cout << "     Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product1_1_User > 0) { // Check for (-1 kg/pc)
						User_1.Product1_1_User--;
						Product1_1.quantity++;
						cout << " Quantity of " << Product1_1.getName() << " - "  << User_1.Product1_1_User << endl;
						cout << "     Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for potato
			}// 'for' loop for potato
		}
			   break;
		   // for Product1_2
		case 50: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product1_2.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();

				switch (_getch()) {
				case 49:
					if (Product1_2.getQuantity() > 0) { // checking for storage and user needs
						User_1.Product1_2_User++;
						Product1_2.quantity--;
						cout << " Quantity of " << Product1_2.getName() << " - " << User_1.Product1_2_User << endl;
						cout << "    Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product1_2_User > 0) { // Check for (-1 kg/pc)
						User_1.Product1_2_User--;
						Product1_2.quantity++;
						cout << " Quantity of " << Product1_2.getName() << " - " << User_1.Product1_2_User << endl;
						cout << "    Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for potato
			}// 'for' loop for potato
		}
			   break;
		   // for Product1_3
		case 51: {
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product1_3.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();

				switch (_getch()) {
				case 49:
					if (Product1_3.getQuantity() > 0) { // checking for storage and user needs
						User_1.Product1_3_User++;
						Product1_3.quantity--;
						cout << " Quantity of " << Product1_3.getName() << " - " << User_1.Product1_3_User << endl;
						cout << "    Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product1_3_User > 0) { // Check for (-1 kg/pc)
						User_1.Product1_3_User--;
						Product1_3.quantity++;
						cout << " Quantity of " << Product1_3.getName() << " - " << User_1.Product1_3_User << endl;
						cout << "    Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for potato
			}// 'for' loop for potato
		}
			   break;
		  // Back to F_User menu 
		case 48: {   k = 1000;
			//F_User_Main_Menu(); 
		}
			   break;
		case 56: { // User info   
			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                                   U S E R  I N F O         \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\t\t\t\t      User Information :" << endl << endl;
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


void F_Class_Of_Products2_Menu() {
	for (int k = 0; k < 1000; k++) {
		F_Logo();

		cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
		Product2_1.Display();
		Product2_2.Display();
		Product2_3.Display();
		position1 = 1;

		cout << " 0. Back\n\n";
		cout << " Your choice: ";
		switch (_getch()) {
		case 49: { // Product2_1
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product2_1.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Product2_1.getQuantity() > 0) { // checking for storage and user needs
						Product2_1.quantity--;
						User_1.Product2_1_User++;
						cout << " Quantity of " << Product2_1.getName() << " - " << User_1.Product2_1_User << endl;
						cout << "    Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product2_1_User > 0) { // Check for (-1 kg/pc)
						Product2_1.quantity++;
						User_1.Product2_1_User--;
						cout << " Quantity of " << Product2_1.getName() << " - "  << User_1.Product2_1_User << endl;
						cout << "    Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for Product2_1
			}// 'for' loop for Product2_1
		}
			   break;
		case 50: { // Product2_2
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product2_2.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Product2_2.getQuantity() > 0) { // checking for storage and user needs
						Product2_2.quantity--;
						User_1.Product2_2_User++;
						cout << " Quantity of " << Product2_2.getName() << " - " << User_1.Product2_2_User << endl;
						cout << "    Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product2_2_User > 0) { // Check for (-1 kg/pc)
						Product2_2.quantity++;
						User_1.Product2_2_User--;
						cout << " Quantity of " << Product2_2.getName() << " - " << User_1.Product2_2_User << endl;
						cout << "    Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for Product2_1
			}// 'for' loop for Product2_1
		}
			   break;
		case 51: { // Product2_3
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product2_3.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Product2_3.getQuantity() > 0) { // checking for storage and user needs
						Product2_3.quantity--;
						User_1.Product2_3_User++;
						cout << " Quantity of " << Product2_3.getName() << " - " << User_1.Product2_3_User << endl;
						cout << "    Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product2_3_User > 0) { // Check for (-1 kg/pc)
						Product2_3.quantity++;
						User_1.Product2_3_User--;
						cout << " Quantity of " << Product2_3.getName() << " - " << User_1.Product2_3_User << endl;
						cout << "    Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for Product2_1
			}// 'for' loop for Product2_1
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
			cout << "\t\t\t\t      User Information :" << endl << endl;
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


void F_Class_Of_Products3_Menu() {
	for (int k = 0; k < 1000; k++) {
		F_Logo();      
		cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
		Product3_1.Display();
		Product3_2.Display();
		Product3_3.Display();
		position1 = 1;

		cout << " 0. Back\n\n";
		cout << " Your choice: ";
		switch (_getch()) {
		case 49: { // Product3_1
			for (int j = 0; j < 1000; j++) {
				system("cls");

				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product3_1.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Product3_1.getQuantity() > 0) { // checking for storage and user needs
						Product3_1.quantity--;
						User_1.Product3_1_User++;
						cout << " Quantity of " << Product3_1.getName() << " - " << User_1.Product3_1_User << endl;
						cout << "     Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product3_1_User > 0) { // Check for (-1 kg/pc)
						Product3_1.quantity++;
						User_1.Product3_1_User--;
						cout << " Quantity of " << Product3_1.getName() << " - " << User_1.Product3_1_User << endl;
						cout << "     Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for bun bread
			}// 'for' loop for bun bread
		}
			   break;
		case 50: { // Product3_2
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product3_2.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Product3_2.getQuantity() > 0) { // checking for storage and user needs
						Product3_2.quantity--;
						User_1.Product3_2_User++;
						cout << " Quantity of " << Product3_2.getName() << " - " << User_1.Product3_2_User << endl;
						cout << "     Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product3_2_User > 0) { // Check for (-1 kg/pc)
						Product3_2.quantity++;
						User_1.Product3_2_User--;
						cout << " Quantity of " << Product3_2.getName() << " - " << User_1.Product3_2_User << endl;
						cout << "     Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for bun bread
			}// 'for' loop for bun bread
		}
			   break;
		case 51: { // Product3_3
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
				Product3_3.Display(); position1 = 1;

				F_Table_For_Increasing_And_Decreasing();
				switch (_getch()) {
				case 49:
					if (Product3_3.getQuantity() > 0) { // checking for storage and user needs
						Product3_3.quantity--;
						User_1.Product3_3_User++;
						cout << " Quantity of " << Product3_3.getName() << " - " << User_1.Product3_3_User << endl;
						cout << "     Successfully added \n";
						Sleep(0700); Sleep(0700);
					}
					else {
						cout << " Product is over / finished. Sorry!\n";
						Sleep(0700); Sleep(0700);
					}
					break;
				case 50:
					if (User_1.Product3_3_User > 0) { // Check for (-1 kg/pc)
						Product3_3.quantity++;
						User_1.Product3_3_User--;
						cout << " Quantity of " << Product3_3.getName() << " - " << User_1.Product3_3_User << endl;
						cout << "     Successfully decreased \n";
						Sleep(0700); Sleep(0700);
					}
					else { cout << " 0 (kg/pc) can not decrease \n"; Sleep(0700); Sleep(0700); }
					break;
				case 48:
					j = 1000;
					break;
				}// 'switch' for bun bread
			}// 'for' loop for bun bread
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
			cout << "\t\t\t\t      User Information :" << endl << endl;
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
		if (User_1.Product1_1_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product1_1.getName() << " --- " << User_1.Product1_1_User << " --- Price: " << User_1.Product1_1_User * Product1_1.getPrice();
			i++;
			Overall_Sum += User_1.Product1_1_User * Product1_1.getPrice();
		}

		if (User_1.Product1_2_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product1_2.getName() <<" --- " << User_1.Product1_2_User << " --- Price: " << User_1.Product1_2_User * Product1_2.getPrice();
			i++;
			Overall_Sum += User_1.Product1_2_User * Product1_2.getPrice();
		}

		if (User_1.Product1_3_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product1_3.getName() <<" --- " << User_1.Product1_3_User << " --- Price: " << User_1.Product1_3_User * Product1_3.getPrice();
			i++;
			Overall_Sum += User_1.Product1_3_User * Product1_3.getPrice();
		}

		if (User_1.Product2_1_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product2_1.getName() <<" --- " << User_1.Product2_1_User << " --- Price: " << User_1.Product2_1_User * Product2_1.getPrice();
			i++;
			Overall_Sum += User_1.Product2_1_User * Product2_1.getPrice();
		}
		if (User_1.Product2_2_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product2_2.getName() <<" --- " << User_1.Product2_2_User << " --- Price: " << User_1.Product2_2_User * Product2_2.getPrice();
			i++;
			Overall_Sum += User_1.Product2_2_User * Product2_2.getPrice();
		}
		if (User_1.Product2_3_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product2_3.getName() << " --- " << User_1.Product2_3_User << " --- Price: " << User_1.Product2_3_User * Product2_3.getPrice();
			i++;
			Overall_Sum += User_1.Product2_3_User * Product2_3.getPrice();
		}
		if (User_1.Product3_1_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product3_1.getName() << " --- " << User_1.Product3_1_User << " --- Price: " << User_1.Product3_1_User * Product3_1.getPrice();
			i++;
			Overall_Sum += User_1.Product3_1_User * Product3_1.getPrice();
		}
		if (User_1.Product3_2_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product3_2.getName() << " --- " << User_1.Product3_2_User << " --- Price: " << User_1.Product3_2_User * Product3_2.getPrice();
			i++;
			Overall_Sum += User_1.Product3_2_User * Product3_2.getPrice();
		}
		if (User_1.Product3_3_User > 0) {
			cout << "\n\t\t\t  " << i << ". " << Product3_3.getName()<< " --- " << User_1.Product3_3_User << " --- Price: " << User_1.Product3_3_User * Product3_3.getPrice();
			i++;
			Overall_Sum += User_1.Product3_3_User * Product3_3.getPrice();
		}

		if (i == 1) { // if nothing go to Menu
			cout << "\n\t You do not have any product in 'CART'.\n";
			cout << "\tPress any key to go to 'Products Menu'\n\n" << endl;
			system("pause");
			Overall_Sum = 0;
			F_User_Main_Menu();
		}
		if (i > 1) { // Menu for buying or back 
			cout << "\n\n\t\t\t  Overall Price: " << Overall_Sum << " Sums" << endl;
			cout << "\n\t   1. Buy now" << endl;
			cout << "\t   0. Products Menu" << endl;

			switch (_getch()) {
			case 49: { //buy
				system("cls");
				////
				cout << "____________________________________________________________________________________________________ \n";
				cout << "                                              C A R T \n";
				cout << "____________________________________________________________________________________________________\n\n";

				////
				cout << " Money will be taken from your 'Telephone Number': " << endl;
				cout << " 1. OK" << endl;
				cout << " Press any key to go back..." << endl;
				switch (_getch()) {
				case 49: {
					cout << "\n  Transaction Successful!\n  Congratulations ! :)" << endl;
					system("pause");
					Overall_Sum = 0;
					// Storage
					User_1.Product1_1_User = 0; User_1.Product1_3_User = 0; User_1.Product1_2_User = 0;
					User_1.Product2_1_User = 0; User_1.Product2_2_User = 0; User_1.Product2_3_User = 0;
					User_1.Product3_1_User = 0; User_1.Product3_2_User = 0; User_1.Product3_3_User = 0;
					F_User_Main_Menu();
				}
					   break;

				default:  F_Cart_Check();

				} // switch of case 49

				////
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
} // function ends


///////////////////////////////////////////////////////////////////////////////
//  Owner part

void F_Logo_Owner() {
	system("cls");
	cout << "____________________________________________________________________________________________________ \n";
	cout << "        A L I B A Z A R                                                  O W N E R  M E N U         \n";
	cout << "____________________________________________________________________________________________________\n\n";
}


void F_Owner_Main_Menu() {
	system("cls");
	cout << endl << endl;

	// Entering as a Owner of shop
	for (int k = 0; k < 1000; k++) {
		F_Logo_Owner();
		cout << "       Main Menu\n\n";
		cout << "       1. Products in stock \n\n";
		cout << "       2. Customers list \n\n";
		cout << "       0. Back\n\n";
		cout << "       Your choice: ";


		switch (_getch()) {
		case 49: {
			F_Owner_Products_Stotage();
		} break;

		case 50: {

			system("cls");
			cout << "____________________________________________________________________________________________________ \n";
			cout << "        A L I B A Z A R                                           C U S T O M E R S  L I S T        \n";
			cout << "____________________________________________________________________________________________________\n\n";
			cout << "\n\t\t\t   Customers list :" << endl << endl;

			F_Owner_Customers_List();

			system("pause");
		}
			   break;


		case 48: {  // Back to Menu
			system("cls");
			k = 1000;
			F_Sign_in();
		} break;

		default: { cout << "\n\n\t\t\t       Your choice is not available in Menu." << endl;
			cout << "\t\t\t\t    Please enter correct keys.\n" << endl;
			system("pause");
		}
			   break;
		} // switch 
	} // for loop 
}


void F_Owner_Products_Stotage() {
	for (int i = 0; i < 1000; i++) {
		F_Logo_Owner();

		cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
		Product1_1.Display();
		Product1_2.Display();
		Product1_3.Display();
		Product2_1.Display();
		Product2_2.Display();
		Product2_3.Display();
		Product3_1.Display();
		Product3_2.Display();
		Product3_3.Display();

		position1 = 1; // numbering of products return to 1
		
		cout << " \n   0. Back\n";
		cout << "   Make changes in: ";
		switch (_getch())
		{
		case '1':
			F_Modify_Info_Products(1);
			break;
		case '2':
			F_Modify_Info_Products(2);
			break;
		case '3':
			F_Modify_Info_Products(3);
			break;
		case '4':
			F_Modify_Info_Products(4);
			break;
		case '5':
			F_Modify_Info_Products(5);
			break;
		case '6':
			F_Modify_Info_Products(6);
			break;
		case '7':
			F_Modify_Info_Products(7);
			break;
		case '8':
			F_Modify_Info_Products(8);
			break;
		case '9':
			F_Modify_Info_Products(9);
			break;
		case '0':   // Back to Menu
			system("cls");
			i = 1000;
			F_Owner_Main_Menu();
		    break;

		case 'i' || 'I':  // User info   
			system("cls");
			cout << "\n\t\t\t   User Information:" << endl;;
			cout << "\t\t    _______________________________" << endl << endl;;
			cout << "\t\t      User Name  : " << Name_Memory << endl;
			cout << "\t\t      Telephone  : " << TellNum_Memory << endl;
			cout << "\t\t      Login      : " << Login_Memory << endl;
			cout << "\t\t      Password   : " << Parol_Memory << endl << endl << endl;
			system("pause");
		    break;
		
		default:  cout << "\n\t\t      Your choice is not available in Menu" << endl;
			cout << "\t\tPlease press any keyboard to continue program\n" << endl;
			system("pause");
		     break;

		} // switch

	} // for loop for products in stock  
}


void F_Modify_Info_Products(int take_product_location) {
	for (int j = 0; j < 1000; j++) {
		system("cls");

		// It is for Displaying the products in order
		cout << "    Products List  \t\t    Category\t\t       Price\t\t In Stock\n";
		if (take_product_location == 1) Product1_1.Display();
		else if (take_product_location == 2) Product1_2.Display();
		else if (take_product_location == 3) Product1_3.Display();
		else if (take_product_location == 4) Product2_1.Display();
		else if (take_product_location == 5) Product2_2.Display();
		else if (take_product_location == 6) Product2_3.Display();
		else if (take_product_location == 7) Product3_1.Display();
		else if (take_product_location == 8) Product3_2.Display();
		else if (take_product_location == 39) Product3_3.Display();
		position1 = 1;
		cout << "____________________________________________________________________________________________________ \n";

		cout << " 1. Change the price \n";
		cout << " 2. Change the quantity in storage\n";
		cout << " 3. Change the name of product\n";
		cout << " 4. Change the class of product\n";
		cout << " 0. Go back \n";
		cout << " Your choice:\n\n";

		switch (_getch()) {
			// FOR CHANGING A PRICE
		case 49:
			cout << " Enter a new price: ";
			cin >> Ch_Price;

			if (Ch_Price >= 0) {
				if (take_product_location == 1) Product1_1.price = Ch_Price;
				else if (take_product_location == 2) Product1_2.price = Ch_Price;
				else if (take_product_location == 3) Product1_3.price = Ch_Price;
				else if (take_product_location == 4) Product2_1.price = Ch_Price;
				else if (take_product_location == 5) Product2_2.price = Ch_Price;
				else if (take_product_location == 6) Product2_3.price = Ch_Price;
				else if (take_product_location == 7) Product3_1.price = Ch_Price;
				else if (take_product_location == 8) Product3_2.price = Ch_Price;
				else if (take_product_location == 39) Product3_3.price = Ch_Price;
				cout << " Successfully changed!\n";
				Sleep(0700); Sleep(0700);
			}
			else {
				cout << " Price cannot be negative! Please check one more time.\n";
				Sleep(0700); Sleep(0700);
			}
			break;
			// FOR CHANGING THE QUANTITY IN STORAGE
		case 50:
			cout << " Enter a new quantity in storage: ";
			cin >> Ch_Quantity;

			if (Ch_Quantity > 0) {
				if (take_product_location == 1) Product1_1.quantity = Ch_Quantity;
				else if (take_product_location == 2) Product1_2.quantity = Ch_Quantity;
				else if (take_product_location == 3) Product1_3.quantity = Ch_Quantity;
				else if (take_product_location == 4) Product2_1.quantity = Ch_Quantity;
				else if (take_product_location == 5) Product2_2.quantity = Ch_Quantity;
				else if (take_product_location == 6) Product2_3.quantity = Ch_Quantity;
				else if (take_product_location == 7) Product3_1.quantity = Ch_Quantity;
				else if (take_product_location == 8) Product3_2.quantity = Ch_Quantity;
				else if (take_product_location == 39) Product3_3.quantity = Ch_Quantity;
				cout << " Successfully changed!\n";
				Sleep(0700); Sleep(0700);
			}
			else {
				cout << " Quantity cannot be negative\n";
				Sleep(0700); Sleep(0700);
			}
			break;

			// FOR CHANGING THE NAME
		case 51:
			cout << " Enter a new name: ";
			getline(cin, Product_Name);

			if (take_product_location == 1) Product1_1.name = Product_Name;
			else if (take_product_location == 2) Product1_2.name = Product_Name;
			else if (take_product_location == 3) Product1_3.name = Product_Name;
			else if (take_product_location == 4) Product2_1.name = Product_Name;
			else if (take_product_location == 5) Product2_2.name = Product_Name;
			else if (take_product_location == 6) Product2_3.name = Product_Name;
			else if (take_product_location == 7) Product3_1.name = Product_Name;
			else if (take_product_location == 8) Product3_2.name = Product_Name;
			else if (take_product_location == 39) Product3_3.name = Product_Name;
			break;

			// FOR CHANGING THE CLASS OF PRODUCT
		case 52:
			cout << " Enter a new Class Name: ";
			getline(cin, Product_Class);

			if (take_product_location == 1) Product1_1.class_of_products = Product_Class;
			else if (take_product_location == 2) Product1_2.class_of_products = Product_Class;
			else if (take_product_location == 3) Product1_3.class_of_products = Product_Class;
			else if (take_product_location == 4) Product2_1.class_of_products = Product_Class;
			else if (take_product_location == 5) Product2_2.class_of_products = Product_Class;
			else if (take_product_location == 6) Product2_3.class_of_products = Product_Class;
			else if (take_product_location == 7) Product3_1.class_of_products = Product_Class;
			else if (take_product_location == 8) Product3_2.class_of_products = Product_Class;
			else if (take_product_location == 39) Product3_3.class_of_products = Product_Class;
			break;
		case 48:
			j = 1000;
			break;
		}// 'switch' 
	}// 'for' loop 
}

// Customer List
void F_Owner_Customers_List() {
	cout << endl;

	ifstream in;
	int Num = 1;
	string Info;

	in.open("User_Info.txt");
	while (in) {
		cout << "\t " << Num << "." << endl;
		cout << "\t-------------------------" << endl;
		getline(in, Info);
		cout << "\t User Name: " << Info << endl;
		getline(in, Info);
		cout << "\t Phone    : " << Info << endl;
		getline(in, Info);
		cout << "\t Login    : " << Info << endl;
		getline(in, Info);
		cout << "\t Password : " << Info << endl;
		Num++;
		cout << endl;
	}
	cout << "\t-------------------------" << endl;
	in.close();
}

