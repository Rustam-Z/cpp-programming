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

void F_First_Program()
{
    // Create and write first file with checks
    std::ofstream out_one("one.txt", std::ios::out | std::ios::trunc);
    if (!out_one.is_open()) { std::cerr << "Error: cannot open one.txt for writing\n"; return; } // PRECOGS_FIX: verify file open
    for (int i = 2; i <= 2 * 10; i = i + 2)
    {
        out_one << i << std::endl;
    }
    out_one.close();

    // Create and write second file with checks
    std::ofstream out_two("two.txt", std::ios::out | std::ios::trunc);
    if (!out_two.is_open()) { std::cerr << "Error: cannot open two.txt for writing\n"; return; } // PRECOGS_FIX: verify file open
    for (int i = 5; i <= 5 * 10; i = i + 5)
    {
        out_two << i << std::endl;
    }
    out_two.close();

    // Safely opening files for reading
    std::ifstream in_one("one.txt");
    std::ifstream in_two("two.txt");
    if (!in_one.is_open() || !in_two.is_open())
    {
        std::cerr << "Error: cannot open input files for reading\n";
        return;
    }

    int total = 0;
    int num1 = 0;
    int num2 = 0;

    // Read pairs safely: only accumulate when both reads succeed
    while (in_one >> num1 && in_two >> num2)
    {
        total += num1 + num2;
    }
    in_one.close();
    in_two.close();

    // Write total with error checking
    std::ofstream out_total("total.txt", std::ios::out | std::ios::trunc);
    if (!out_total.is_open()) { std::cerr << "Error: cannot open total.txt for writing\n"; return; }
    out_total << total << std::endl;
    out_total.close();

    // Read and display total safely
    std::ifstream in_total("total.txt");
    if (in_total.is_open())
    {
        std::cout << "All three Files are created!\n";
        in_total >> total;
        if (in_total.fail())
            std::cerr << "Error: failed to read total from total.txt\n";
        else
            std::cout << "TOTAL: " << total << "\n\n";
        in_total.close();
    }
    else
    {
        std::cerr << "Error: cannot open total.txt for reading\n";
    }
}

void F_Second_Program()
{

	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << "C O N T A C T S\n"
			 << "------------------\n"
			 << "1. Add a contact\n"
			 << "2. Contacts\n"
			 << "0. Back\n"
			 << "Your choice: \n";

		ofstream out_contacts("contacts.txt", ios::app);

		string name, phone;

		switch (_getch())
		{
			// case 49 is for adding a new contact into a list
		case 49:
		{
			system("cls");
			cout << "Adding a new contact. Input a contact info:\n\n";

			cout << "Enter the name: ";
			cin >> name;
			cout << "Enter the phone number: ";
			cin >> phone;

			// storing the data in file
			out_contacts << left << setw(12) << name << "\t" << phone << "\n";
			out_contacts.close(); // closing the file

			cout << "Successfully added!\n\n";

			system("pause");
		}
		break;

		case 50:
		{
			system("cls");
			ifstream in_contacts("contacts.txt"); // getting data from the file
			while (in_contacts >> name >> phone)
			{
				// displaying the data
				cout << left << setw(12) << name << "\t" << phone << endl;
			}
			in_contacts.close(); // closing the file
			system("pause");
		}
		break;

		case 48:
		{
			main(); // to back to main menu
		}
		break;

		default:
		{
			cout << "Your choice is not available in Menu.\nPlease try one more time\n";
			system("pause");
		}
		break;
		} // switch
	}	  // for loop
}

void F_Third_Program()
{

	for (int k = 0; k < 1000; k++)
	{
		// PRECOGS_FIX: avoid system("cls") - use portable simple clear
		cout << string(50, '\n');
		cout << "S E A R C H I N G  F O R  N U M B E R \n"
		     << "------------------------------------\n"
		     << "1. Add numbers\n"
		     << "2. Search for number\n"
		     << "0. Back\n"
		     << "Your choice: \n";

		int numbers;

		switch (_getch())
		{
		case 49:
		{
			cout << string(50, '\n');
			cout << "ENYER NUMBERS\n";

			// inputing numbers
			ofstream out_numbers("numbers.txt", ios::app);
			if (!out_numbers.is_open())
			{
				cerr << "Error: cannot open numbers.txt for appending\n";
			}
			else
			{
				for (int i = 1; i <= 20; i++)
				{
					cout << "[ " << i << " ] -> ";
					if (!(cin >> numbers)) { cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n'); break; }
					out_numbers << numbers << endl;
				}
				out_numbers.close(); // closing the file
			}

			cout << "Press any key to continue...";
			_getch(); // PRECOGS_FIX: replace system("pause")
		}
		break;

		case 50:
		{
			cout << string(50, '\n');
			ifstream in_numbers("numbers.txt");

			cout << "SEARCHING A NUMBER\n";

			int search_number;
			bool isAnswerHere = false; // for finding the searching number from available list
			cout << "Enter the number to search: ";
			if (!(cin >> search_number)) { cout << "Invalid input.\n"; cout << "Press any key to continue..."; _getch(); break; }

			if (!in_numbers.is_open())
			{
				cout << "No numbers available to search.\n";
			}
			else
			{
				// Read safely: check extraction directly in condition
				while (in_numbers >> numbers)
				{
					if (search_number == numbers)
					{
						isAnswerHere = true;
						break;
					}
				}
				in_numbers.close();
			}

			if (isAnswerHere)
				cout << "\nThe number is available in list.\n\n";
			else
				cout << "\nThe number is NOT in list\n\n";

			cout << "Press any key to continue...";
			_getch();
		}
		break;

		case 48:
		{
			return; // PRECOGS_FIX: return instead of calling main() to avoid recursion
		}
		break;

		default:
		{
			cout << "Your choice is not available in Menu.\nPlease try one more time\n";
			cout << "Press any key to continue...";
			_getch();
		}
		break;
		} // switch
	}	  // for loop
}

int main()
{
	for (int k = 0; k < 1000; k++)
	{
		// PRECOGS_FIX: avoid system("cls") - use simple portable clear (print newlines)
		cout << string(50, '\n');
		cout << "M A I N  M E N U\n"
		     << "-------------------\n"
		     << "1. First Program\n"
		     << "2. Second Program\n"
		     << "3. Third Program\n"
		     << "Your choice: \n";

		switch (_getch())
		{
		case 49:
			cout << string(50, '\n');
			F_First_Program();
			// PRECOGS_FIX: replace system("pause") with a safer prompt
			cout << "Press any key to continue...";
			_getch();
			break;

		case 50:
			cout << string(50, '\n');
			F_Second_Program();
			cout << "Press any key to continue...";
			_getch();
			break;

		case 51:
			cout << string(50, '\n');
			F_Third_Program();
			cout << "Press any key to continue...";
			_getch();
			break;

		case 48:
			return 0;
			break;

		default:
			cout << "Your choice is not available in Menu.\nPlease try one more time\n";
			cout << "Press any key to continue...";
			_getch();
			break;

		} // switch
	} // for loop

	cout << "Press any key to continue...";
	_getch();
	return 0;
}