#include <iostream>
#include <string>
#include <conio.h> // for _getch() function
using namespace std;
//balance = balance * pow((1 + (ROI / 100)), year);

// Functions
void F_First_Program(); // showing first program in main
void F_Second_Program(); // showing second program in main

// For the first program
class Publication { // base class for classes 'Book' and 'Tape'
private:
	string title;
	float price;

public:
	void getdata() {
		cout << " Book title: ";
		cin >> title;
		cout << " Price 'USA $': ";
		cin >> price;
	}
	void showdata() {
		cout << " Book title: '" << title << "'" << endl;
		cout << " Price: " << price << "$"<< endl;
	}
};

class Book : public Publication { // derived class from Publication
private:
	int page_count;
public:
	void getdata() {
		Publication::getdata(); // getdata() of class Publicaton
		cout << " Number of pages: ";
		cin >> page_count;
	}
	void showdata() {
		Publication::showdata(); // showdata() of class Publication
		cout << " Number of pages: " << page_count << endl;
	}
};

class Tape : public Publication { // derived class from Publication
private:
	float playing_time;
public:
	void getdata() {
		Publication::getdata();
		cout << " Playing time of audiobook: ";
		cin >> playing_time;
	}
	void showdata() {
		Publication::showdata();
		cout << " Playing time of audionbook: " << playing_time << endl;
	}
};

// For the second program
class ACCOUNT {
private:
	// customer name, account number and type of account. 
	string name;
	string account_number;
	string type_account;
public:
	void getdata() {
		cout << " Name: ";
		cin >> name;
		cout << " Account Number: ";
		cin >> account_number;
		cout << " Type of Account: ";
		cin >> type_account;
	}

	void showdata() {
		cout << " Name: " << name << endl;
		cout << " Account Number: " << account_number << endl;
		cout << " Type of Account: " << type_account << endl;
	}
};

class CURR_ACCT:public ACCOUNT {
private:
	int amount;
	int penalty = 2;
	int balance = 0;
	int withdraw;
public:
	void Deposit() {
		cout << " Enter your deposit balance: ";
		cin >> amount;

		if (amount >= 100) {
			balance = balance + amount;
			cout << " Successfully added!\n\n";
		}
		else {
			cout << " Deposit cannot be less than 100$\n\n";
			system("pause"); system("cls");
			Deposit();
		}
	}

	void Balance() {
		ACCOUNT::showdata();
		cout << " Balance: " << balance << endl << endl;
	}

	void Withdraw() {
		cout << " Enter the balance you want to withdraw: ";
		cin >> withdraw;
	}

	void Penalty() {
		if (balance - withdraw > 100) {
			balance = balance - withdraw;
			cout << " Successfully done!\n\n";

		}
		else if (balance - withdraw < 0) {
			cout << " You do not have such balance of money in your account!\n";
			cout << " Your balance is " << balance << endl;
			system("pause"); system("cls");
			Withdraw();
		}
		else
		{
			cout << " Your account balance is less than 100$.\n You got penalty -2$.\n\n";
			balance = balance - withdraw - penalty;
		}
	}
};

class SAV_ACCT :public ACCOUNT {
private:
	int amount;
	int balance = 0;
	int withdraw;
	float year;
public:
	void Deposit() {
		cout << " Enter your deposit balance: ";
		cin >> amount;
		balance = balance + amount;
	}

	void Balance() {
		ACCOUNT::showdata();
		cout << " Balance: " << balance << endl << endl;
	}

	void Withdraw() {
		cout << " Enter the balance you want to withdraw: ";
		cin >> withdraw;
		if (balance - withdraw > 100) {
			balance = balance - withdraw;
			cout << " Successfully done!\n\n";
		}
		else if (balance - withdraw < 0) {
			cout << " You do not have such balance of money in your account!\n";
			cout << " Your balance is " << balance << endl;
			system("pause"); system("cls");
			Withdraw();
		}
	}

	void Compute_Interest() {
		Balance();
		cout << " ROI (Return on Investment) = 4%\n";
		cout << " Enter the year of investment: ";
		cin >> year;
		cout << " Your balance after " << year << " year(s) will be " << balance * pow( 1.04 , year) << "\n\n";
	}
};

int main() {
	
	for (int k = 0; k < 1000; k++) {
		system("cls");
		cout << "\n\t\t 1. First program (Books)\n\t\t 2. Second program (Bank account) \n\t\t 0. Exit \n\n\t Your choice: ";
		switch (_getch())
		{
			// case '1' for the first program
		case '1':
			F_First_Program();
			break;
			// case '2' for the second program
		case '2':
			F_Second_Program();
			break;
			// case '0' to exit
		case '0':
			k = 1000;
			break;
		default:
			cout << "\tYour choice is not available in Menu. \n\t Please try one more time.\n";
			break;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}

// For outputing programs
void F_First_Program() {
	system("cls");

	Book book;
	Tape tape;
	
	for (int j = 0; j < 1000; j++) {
		system("cls");
		cout << " Welcome to Bookshop 'AliBooks' \n 1. Paper version \n 2. Audiobook \n 0. Go back\n Your choice: ";
		switch (_getch())
		{
			// case 1 for the first program
		case '1': system("cls");
			book.getdata();
			cout << "\n\n Your given info:\n";
			book.showdata();
			system("pause");
			break;

			// case 2 for the second program
		case '2': system("cls");
			tape.getdata();
			cout << "\n\nYour given info:\n";
			tape.showdata();
			system("pause");
			break;

			// case 0 to exit
		case '0':
			j = 1000;
			break;

		default:
			cout << "\t Your choice is not available in Menu. \n\t Please try one more time.\n";
			break;
		} // switch
	} // for loop
}

void F_Second_Program() {
	system("cls");

	CURR_ACCT account1;
	SAV_ACCT account2;

	for (int i = 0; i < 1000; i++) {
		system("cls");
		cout << "\t WELCOME TO 'AliBank' \n Chooce your account rate: \n 1. Current account\n 2. Saving account\n 0. Go back \n Your choice: ";
		switch (_getch())
		{
			// current account
		case '1':	system("cls");
			account1.getdata(); // calling the function from base class
			for (int l = 0; l < 1000; l++) {
				system("cls");
				cout << " 1. Deposit \n 2. Display the balance \n 3. Withdraw money \n 0. Go back \n Your choice: ";
				switch (_getch())
				{
					// case 1 for the first program
				case '1': system("cls");
					account1.Deposit();
					system("pause");
					break;
					// case 2 for the second program
				case '2': 	system("cls");
					account1.Balance();
					system("pause");
					break;
				case '3': 	system("cls");
					account1.Withdraw();
					account1.Penalty();
					system("pause");
					break;
				case '0':
					l = 1000;
					F_Second_Program();
					break;
				default:
					cout << "\tYour choice is not available in Menu. \n\t Please try one more time.\n";
					break;
					
					} // switch
				}// for loop

			// saving account
		case '2': system("cls");
			account2.getdata(); // calling the function from base class
			for (int j = 0; j < 1000; j++) {
				system("cls");
				cout << " 1. Deposit \n 2. Display the balance \n 3. Withdraw money \n 4. Compute Interest \n 0. Go back \n Your choice: ";
				switch (_getch())
				{
				case '1':  system("cls");
					account2.Deposit();
					system("pause");
					break;
				case '2': system("cls");
					account2.Balance();
					system("pause");
					break;
				case '3': 	system("cls");
					account2.Withdraw();
					system("pause");
					break;
				case '4': 	system("cls");
					account2.Compute_Interest();
					system("pause");
					break;
				case '0':
					j = 1000;
					F_Second_Program();
					break;
				default:
					cout << "\tYour choice is not available in Menu. \n\t Please try one more time.\n";
					break;
				}
			}
			// go back to start
		case '0':
			i = 1000;
			break;
			// default case for big switch
		default:
			cout << "\tYour choice is not available in Menu. \n\t Please try one more time.\n";
			break;
			} // big switch
	} // big for
}
