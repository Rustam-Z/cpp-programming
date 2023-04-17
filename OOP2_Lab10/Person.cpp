// Both programs are written here
// A menu driven program which allows to use all programs at the same time
// Done be Rustam Zokirov (U1910049)
// Last change done in April 20, 2020

#include <iostream>
#include <string>
#include <conio.h> // for getch()
#include <fstream> // library which allows to work with files
#include <iomanip> // for setw() - allignment

using namespace std;

// Functions Declarations
void F_First_Program();
void F_Second_Program();
int main();
int position = 1; // global variable for numbering the list of contacts

class Person
{
protected:
	string name;
	string tell_number;

public:
	void setData(string name, string tell_number)
	{
		this->name = name;
		this->tell_number = tell_number;
	}

	string getName()
	{
		return name;
	}

	string getTellNumber()
	{
		return tell_number;
	}

	void displayData()
	{
		cout << " " << position << ". " << left << setw(10) << name << "\t " << tell_number << endl;
		position++;
	}
};

void F_First_Program()
{

	Person p; // creating an object of a class Person

	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << " C O N T A C T S\n"
			 << "------------------\n"
			 << " 1. Add a contact\n"
			 << " 2. Contacts\n"
			 << " 0. Back\n"
			 << " Your choice: \n";

		string name, tell_number; // contact info which will be inputted by user

		switch (_getch())
		{
		// case 49 is for adding a new contact into a list
		case 49:
		{
			system("cls");

			ofstream out_contacts("contacts", ios::binary | ios::app); // creating a file | binary file | append mode

			cout << " ADD TO CONTACT \n-----------------------------\n Enter a contact information.\n\n";
			cout << " Enter the name: ";
			cin >> name;
			cout << " Enter the phone number: ";
			cin >> tell_number;

			p.setData(name, tell_number); // setting inputted data

			// storing the data in file
			out_contacts.write((char *)&p, sizeof(Person));
			out_contacts.close(); // closing the file

			cout << "\n Successfully added!\n\n";

			system("pause");
		}
		break;

		// case 50 lists all Contacts
		case 50:
		{
			system("cls");

			ifstream in_contacts("contacts", ios::binary); // getting data from the file

			cout << " ALL CONTACTS\n---------------------------\n";
			cout << " Name            Phone\n---------------------------\n";

			while (in_contacts.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts.close(); // closing the file

			cout << endl;
			system("pause");
		}
		break;

		// to back to main menu
		case 48:
		{
			main();
		}
		break;

		default:
		{
			cout << " Your choice is not available in Menu.\n Please try one more time\n\n";
			system("pause");
		}
		break;
		} // switch
	}	  // for loop
}

void F_Second_Program()
{

	Person p; // global object for each cases

	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << " C O N T A C T S\n"
			 << "--------------------------------------\n"
			 << " 1. Search contact by Phone number\n"
			 << " 2. Search contact by Name\n"
			 << " 3. Delete a contact\n"
			 << " 4. Add a record to a specific position\n"
			 << " 0. Back\n"
			 << " Your choice: \n";

		switch (_getch())
		{
		// case 49 for searching the contact by Phone Number
		case 49:
		{
			system("cls");
			cout << " SEARCH CONTACT BY PHONE NUMBER\n-------------------------------\n";

			string search_by_tell_number;
			bool isFound = 0;

			ifstream in_contacts_list("contacts", ios::binary); // getting data from the file
			cout << " List of all Contacts: \n";
			cout << " Name            Phone\n-------------------------------\n";
			while (in_contacts_list.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts_list.close();

			cout << "\n Enter the phone number: ";
			cin >> search_by_tell_number;

			ifstream in_contacts("contacts", ios::binary); // getting data from the file
			// in_contacts.seekg(0, ios::end);

			// cheaking the list for the specific data
			cout << " Found Contact(s): \n";
			while (in_contacts.read((char *)&p, sizeof(Person)))
			{
				if (search_by_tell_number == p.getTellNumber())
				{
					isFound = 1;
					p.displayData();
				}
			}
			position = 1;
			in_contacts.close(); // closing the file

			cout << endl;
			system("pause");
		}
		break;

		// case 50 for searching the contact by Name
		case 50:
		{
			system("cls");
			cout << " SEARCH CONTACT BY NAME\n-----------------------------\n";

			string search_by_name; // for searching the contact with his name
			bool isFound = 0;

			ifstream in_contacts_list("contacts", ios::binary); // getting data from the file
			cout << " List of all Contacts: \n";
			cout << " Name            Phone\n-----------------------------\n";
			while (in_contacts_list.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts_list.close();

			cout << "\n Enter the Name: ";
			cin >> search_by_name;

			ifstream in_contacts("contacts", ios::binary); // getting data from the file
			// in_contacts.seekg(0, ios::end);

			// cheaking the list for the specific data
			cout << " Found Contact(s): \n";
			while (in_contacts.read((char *)&p, sizeof(Person)))
			{
				if (search_by_name == p.getName())
				{
					isFound = 1;
					p.displayData();
				}
			}
			position = 1;
			in_contacts.close(); // closing the file

			cout << endl;
			system("pause");
		}
		break;

		// case 51 for deleting a contact
		case 51:
		{
			system("cls");
			cout << " DELETE A CONTACT\n---------------------\n";

			string tell_number_for_deletion;

			ifstream in_contacts_list("contacts", ios::binary); // getting data from the file
			cout << " List of all Contacts: \n";
			cout << " Name            Phone\n---------------------\n";
			while (in_contacts_list.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts_list.close();

			cout << endl;

			ofstream out_temp("temp", ios::binary);
			ifstream in_contacts("contacts", ios::binary);

			cout << " Enter phone number of contact to be deleted: ";
			cin >> tell_number_for_deletion;

			while (in_contacts.read((char *)&p, sizeof(Person)))
			{
				if (p.getTellNumber() != tell_number_for_deletion)
				{
					out_temp.write((char *)&p, sizeof(Person));
				}
				else if (p.getTellNumber() == tell_number_for_deletion)
				{
					cout << "\n Successfully deleted\n";
				}
			}
			out_temp.close();
			in_contacts.close();

			remove("contacts");
			rename("temp", "contacts");

			ifstream in_contacts_list2("contacts", ios::binary); // getting data from the file
			cout << "\n List of all Contacts: \n";
			cout << " Name            Phone\n---------------------\n";
			while (in_contacts_list2.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts_list2.close();

			cout << endl;
			system("pause");
		}
		break;

		// case 52 for adding a contact to a specific position
		case 52:
		{
			system("cls");
			cout << " ADD A RECORD TO A SPECIFIC POSITION\n-------------------------------------\n";

			ifstream in_contacts_list("contacts", ios::binary); // getting data from the file
			cout << " List of all Contacts: \n";
			cout << " Name            Phone\n-------------------------------------\n";
			while (in_contacts_list.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts_list.close();
			cout << endl;

			// position which should be searched
			int position_of_insertion;
			cout << " Enter the position: ";
			cin >> position_of_insertion;
			position_of_insertion--;

			// Adding a new contact
			string name, tell_number;
			cout << " Enter a contact information.\n";
			cout << " Enter the name: ";
			cin >> name;
			cout << " Enter the phone number: ";
			cin >> tell_number;

			ofstream out_temp("temp", ios::binary);
			ifstream in_contacts("contacts", ios::binary);

			while (in_contacts.read((char *)&p, sizeof(Person)))
			{
				if (position_of_insertion != position)
				{
					out_temp.write((char *)&p, sizeof(Person));
				}
				else
				{
					out_temp.write((char *)&p, sizeof(Person));
					p.setData(name, tell_number);
					out_temp.write((char *)&p, sizeof(Person));
				}
				position++;
			}
			position = 1;
			out_temp.close();
			in_contacts.close();

			remove("contacts");
			rename("temp", "contacts");

			ifstream in_contacts_list2("contacts", ios::binary); // getting data from the file
			cout << "\n List of all Contacts: \n";
			cout << " Name            Phone\n-------------------------------------\n";
			while (in_contacts_list2.read((char *)&p, sizeof(Person)))
			{
				// displaying the data
				p.displayData();
			}
			position = 1;
			in_contacts_list2.close();

			cout << endl;
			system("pause");
		}
		break;

		// Going back to Main Menu
		case 48:
		{
			main();
		}
		break;

		// default case
		default:
		{
			cout << " Your choice is not available in Menu.\n Please try one more time\n\n";
			system("pause");
		}
		break;
		} // switch
	}	  // for loop
}

int main()
{
	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << " M A I N  M E N U\n"
			 << "-------------------\n"
			 << " 1. First Program\n"
			 << " 2. Second Program\n"
			 << " Your choice: \n";

		switch (_getch())
		{
		// First Program
		case 49:
			system("cls");
			F_First_Program();
			system("pause");
			break;

		// Second Program
		case 50:
			system("cls");
			F_Second_Program();
			system("pause");
			break;

		default:
			cout << " Your choice is not available in Menu.\n Please try one more time\n\n";
			system("pause");
			break;

		} // switch
	}	  // for loop

	system("pause");
	return 0;
}
