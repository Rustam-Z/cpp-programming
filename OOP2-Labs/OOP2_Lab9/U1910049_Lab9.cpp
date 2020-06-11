// All three programs are written here 
// A menu driven program which allows to use all programs at the same time
// Done be Rustam Zokirov (U1910049)
// Last change done in April 13, 2020

#include <iostream>
#include <string>
#include <conio.h> // for getch()
#include <fstream> // library which allows to work with files
#include <iomanip> // for using function setw()

using namespace std;

int main(); 

void F_First_Program() {

	// creating a text file one.txt
	ofstream out_one;
	out_one.open("one.txt");
	for (int i = 2; i <= 2 * 10; i = i + 2) {
		out_one << i << endl; // writing to file first ten even numbers
	}
	out_one.close(); // closing the file


	// creating a text file one.txt
	ofstream out_two;
	out_two.open("two.txt");
	for (int i = 5; i <= 5 * 10; i = i + 5) {
		out_two << i << endl; // writing to file first ten multiples of five
	}
	out_two.close(); // closing the file

	// calculting the sum
	ifstream in_one;
	ifstream in_two;
	in_one.open("one.txt"); // opening files
	in_two.open("two.txt");

	
	int total = 0;
	int num1 = 0;
	int num2 = 0;

	while (in_one && in_two) {
		total += num1 + num2; // calculating the total	
		in_one >> num1;
		in_two >> num2;
	}
	in_one.close(); // closing the files
	in_two.close();

	///////////////////////////////////////////////////////////////////
	// creating a file total for storingthe total sum of numbers
	ofstream out_total("total.txt");
	out_total << total << endl;
	out_total.close();

	// reading the file and outputing it on the screen
	ifstream in_total;
	in_total.open("total.txt");

	cout << "All three Files are created!\n";

	in_total >> total;
	cout << "TOTAL: " << total << "\n\n"; // displaying the total in console
	
	in_total.close(); // closing the file after executing
}


void F_Second_Program(){

	for (int k = 0; k < 1000; k++) {
		system("cls");
		cout << "C O N T A C T S\n" << "------------------\n" << "1. Add a contact\n" << "2. Contacts\n" << "0. Back\n" << "Your choice: \n";
		
		ofstream out_contacts("contacts.txt", ios::app);

		string name, phone;

		switch (_getch())
		{
			// case 49 is for adding a new contact into a list
		case 49: {
			system("cls");
			cout << "Adding a new contact. Input a contact info:\n\n";

			cout << "Enter the name: "; cin >> name;
			cout << "Enter the phone number: "; cin >> phone;

			// storing the data in file
			out_contacts << left << setw (12) << name << "\t" << phone << "\n";
			out_contacts.close(); //closing the file

			cout << "Successfully added!\n\n";
			
		    system("pause");
		}
			break;


		case 50: {
			system("cls");
			ifstream in_contacts("contacts.txt"); // getting data from the file
			while (in_contacts >> name >> phone) {
				// displaying the data
				cout << left << setw(12) << name << "\t" << phone << endl;
			}
			in_contacts.close(); // closing the file
			system("pause");
		}
			break;


		case 48: {
			main(); // to back to main menu
		}
			break;

		default: {
			cout << "Your choice is not available in Menu.\nPlease try one more time\n";
			system("pause");
		}
			   break;
		} // switch
	} // for loop
}


void F_Third_Program(){

	for (int k = 0; k < 1000; k++) {
		system("cls");
		cout << "S E A R C H I N G  F O R  N U M B E R \n" << "------------------------------------\n" << "1. Add numbers\n" << "2. Search for number\n" << "0. Back\n" << "Your choice: \n";

		ofstream out_numbers("numbers.txt", ios::app); // the list could be contiunied after the program execution

		int numbers;
			
		switch (_getch())
		{
		case 49: {
			system("cls");
			cout << "ENYER NUMBERS\n";

			// inputing numbers
			for (int i = 1; i <= 20; i++) {
				cout << "[ " << i << " ] -> "; cin >> numbers;
				out_numbers << numbers << endl;
			}
			out_numbers.close(); //closing the file

			
			system("pause");
		}
			break;


		case 50: {
			system("cls");
			ifstream in_numbers("numbers.txt");

			cout << "SEARCHING A NUMBER\n";

			int search_number;
			bool isAnswerHere = 0; // for finding the searching number from available list
			cout << "Enter the number to search: "; 
			cin >> search_number;

			while (in_numbers) {
				in_numbers >> numbers;
				if (search_number == numbers)
					isAnswerHere = 1;
			} // while loop

			if (isAnswerHere == 1)
				cout << "\nThe number is available in list.\n\n";
			else
				cout << "\nThe number is NOT in list\n\n";

			system("pause");
		}
			break;


		case 48: {
			main();
		}
			break;

		default: {
			cout << "Your choice is not available in Menu.\nPlease try one more time\n";
			system("pause");
		}
			break;
		} // switch
	} // for loop
}


int main(){
	for (int k = 0; k < 1000; k++) {
		system("cls");
	    cout << "M A I N  M E N U\n"<< "-------------------\n" << "1. First Program\n" << "2. Second Program\n" << "3. Third Program\n" << "Your choice: \n";

		switch (_getch())
		{
		case 49:
			system("cls");
			F_First_Program();
			system("pause");
			break;


		case 50:
			system("cls");
			F_Second_Program();
			system("pause");
			break;


		case 51:
			system("cls");
			F_Third_Program();
			system("pause");
			break;


		case 48:
			return 0;
			break;


		default:
			cout << "Your choice is not available in Menu.\nPlease try one more time\n";
			system("pause");
			break;

		} // switch
	} // for loop

	system("pause");
	return 0;
}