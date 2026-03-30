#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

// Functions declaration
void F_First_Program_Menu();
void F_Second_Program_Menu();

// Main BASE class for ALL classes
class Staff
{
protected:
	string code;
	string name;

public:
	Staff()
	{
		code = "0000";
		name = "Unknown";
	}
	/*void set_code(string code) {
		this->code = code;
	}
	string get_code() {
		return code;
	}
	void set_name(string name) {
		this->name = name;
	}

	string get_name() {
		return name;
	}
	*/
	void getdata_name()
	{
		cout << " Enter employee name: ";
		cin >> name;
	}
	void getdata_code()
	{
		cout << " Enter employee code: ";
		cin >> code;
	}
	void showdata_name()
	{
		cout << " Name: " << name << endl;
	}
	void showdata_code()
	{
		cout << " Code: " << code << endl;
	}
};

void getdata()
{
    Staff::getdata_code();
    Staff::getdata_name();

    std::cout << " Enter subject: ";
    std::string tmp_subj;
    std::getline(std::cin >> std::ws, tmp_subj);
    const size_t MAX_SUBJECT_LEN = 100;
    if (tmp_subj.size() > MAX_SUBJECT_LEN) tmp_subj = tmp_subj.substr(0, MAX_SUBJECT_LEN);
    subject = tmp_subj;

    // Validate integer input for publications
    while (true)
    {
        std::cout << " Enter number of publications: ";
        std::string line;
        std::getline(std::cin, line);
        std::stringstream ss(line);
        int val;
        if (ss >> val && ss.eof() && val >= 0)
        {
            publications = val; // PRECOGS_FIX: validated numeric parse, rejects non-numeric or negative inputs
            break;
        }
        std::cout << " Invalid number, please enter a non-negative integer.\n";
    }
}

class Officer : public Staff
{
protected:
	float grade;

public:
	Officer()
	{
		grade = 0.0;
	}
	void getdata()
	{
		Staff::getdata_code();
		Staff::getdata_name();
		cout << " Enter the grade: ";
		cin >> grade;
	}
	void showdata()
	{
		Staff::showdata_code();
		Staff::showdata_name();
		cout << " Grade: " << grade << endl;
	}
};

class Typist : public Staff
{
protected:
	int speed;

public:
	Typist()
	{
		speed = 0;
	}
	void getdata()
	{
		Staff::getdata_code();
		Staff::getdata_name();
		cout << " Enter the speed (wprds/min): ";
		cin >> speed;
	}
	void showdata()
	{
		Staff::showdata_code();
		Staff::showdata_name();
		cout << " Speed (words/min): " << speed << endl;
	}
};

class Regular_Typist : public Typist
{
protected:
	float monthly_salary;

public:
	Regular_Typist()
	{
		monthly_salary = 0.0;
	}
	void getdata()
	{
		Typist::getdata();
		cout << " Enter the monthly salary: ";
		cin >> monthly_salary;
	}
	void showdata()
	{
		Typist::showdata();
		cout << " Monthly salary: " << monthly_salary << endl;
	}
};

class Casual_Typist : public Typist
{
protected:
	float daily_wage;

public:
	Casual_Typist()
	{
		daily_wage = 0.0;
	}
	void getdata()
	{
		Typist::getdata();
		cout << " Enter the daily wage: ";
		cin >> daily_wage;
	}
	void showdata()
	{
		Typist::showdata();
		cout << " Daily wage: " << daily_wage << endl;
	}
};

// Second program classes

class Person
{
protected:
	string name;
	string code;

public:
	Person()
	{
		name = "Unknown";
		code = "Unknown";
	}
	void getdetails()
	{
		cout << " Enter name: ";
		cin >> name;
		cout << " Enter code: ";
		cin >> code;
	}
	void showdetails()
	{
		cout << " NAME: " << name << endl;
		cout << " CODE: " << code << endl;
	}
};

class Account : virtual public Person
{
protected:
	float pay;

public:
	Account()
	{
		pay = 0.0;
	}
	void getpay()
	{
		cout << " Enter pay amount: ";
		cin >> pay;
	}
	void showpay()
	{
		cout << " PAY: " << pay << endl;
	}
};

class Admin : virtual public Person
{
protected:
	int experience;

public:
	Admin()
	{
		experience = 0;
	}
	void getexpr()
	{
		cout << " Enter experience in years: ";
		cin >> experience;
	}
	void showexpr()
	{
		cout << " EXPERIENCE: " << experience << endl;
	}
};

void update()
{
    for (int i = 0; i < 1000; i++)
    {
        // Replace system("cls") with platform-independent console-clearing simulation
        for (int _i = 0; _i < 50; ++_i) std::cout << "\n"; // PRECOGS_FIX: avoid system() call by printing newlines to simulate clear

        std::cout << "\t U P D A T E  D E T A I L S\n";
        std::cout << "=========================================\n";
        std::cout << " Choose detail you want to update\n";
        std::cout << " 1. NAME\n";
        std::cout << " 2. CODE\n";
        std::cout << " 3. EXPERIENCE\n";
        std::cout << " 4. PAY\n";
        std::cout << " 0. Back\n";
        std::cout << " Your choice: ";

        switch (_getch())
        {
        case 49:
        {
            std::cout << "\n\n Enter name: ";
            std::string tmp;
            std::getline(std::cin >> std::ws, tmp);
            const size_t MAX_NAME_LEN = 100;
            if (tmp.size() > MAX_NAME_LEN) tmp = tmp.substr(0, MAX_NAME_LEN);
            name = tmp;
            std::cout << " Successfully Updated!\n";
            Sleep(0700);
            Sleep(0700);
        }
        break;
        case 50:
        {
            std::cout << "\n\n Enter code: ";
            std::string tmp;
            std::getline(std::cin >> std::ws, tmp);
            const size_t MAX_CODE_LEN = 50;
            if (tmp.size() > MAX_CODE_LEN) tmp = tmp.substr(0, MAX_CODE_LEN);
            code = tmp;
            std::cout << " Successfully Updated!\n";
            Sleep(0700);
            Sleep(0700);
        }
        break;
        case 51:
        {
            std::cout << "\n\n Enter Experience: ";
            // validate integer
            while (true)
            {
                std::string line;
                std::getline(std::cin >> std::ws, line);
                std::stringstream ss(line);
                int val;
                if (ss >> val && ss.eof() && val >= 0)
                {
                    experience = val; // PRECOGS_FIX: validated numeric input for experience
                    break;
                }
                std::cout << " Invalid value. Enter a non-negative integer for experience: ";
            }
            std::cout << " Successfully Updated!\n";
            Sleep(0700);
            Sleep(0700);
        }
        break;
        case 52:
        {
            std::cout << "\n\n Enter pay: ";
            // validate float
            while (true)
            {
                std::string line;
                std::getline(std::cin >> std::ws, line);
                std::stringstream ss(line);
                float val;
                if (ss >> val && ss.eof() && val >= 0.0f)
                {
                    pay = val; // PRECOGS_FIX: validated numeric input for pay
                    break;
                }
                std::cout << " Invalid value. Enter a non-negative numeric pay amount: ";
            }
            std::cout << " Successfully Updated!\n";
            Sleep(0700);
            Sleep(0700);
        }
        break;
        case 48:
            i = 1000;
            break;
        default:
            std::cout << std::endl
                      << std::endl;
            std::cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
            Sleep(0700);
            Sleep(0700);
        } // switch
    }
}

int main()
{

	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << "\tM A I N  M E N U\n";
		cout << "      =====================\n";
		cout << "      1. First program\n";
		cout << "      2. Second program\n";
		cout << "      0. Exit\n";
		cout << "      Your choice: \n";
		switch (_getch())
		{
		case '1':
		{
			cout << "\t Educational institution database\n";
			// calling the menu of first program
			F_First_Program_Menu();
		}
		break;
		case '2':
		{
			cout << "\t Second program\n";
			// calling the menu of second program
			F_Second_Program_Menu();
		}
		break;
		case '0':
		{
			return 0;
			break;
		}
		default:
		{
			cout << endl
				 << endl;
			cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
			Sleep(0700);
			Sleep(0700);
		}
		break;

		} // switch
	}	  // for loop
	system("pause");
	return 0;
}

void F_First_Program_Menu()
{
	// objects
	Teacher teacher;
	Officer officer;
	Regular_Typist regular;
	Casual_Typist casual;

	// Local helpers to avoid use of system() (use Win32 console APIs / direct input instead)
	auto safeClear = []() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (hConsole == INVALID_HANDLE_VALUE) return;
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		DWORD count;
		if (!GetConsoleScreenBufferInfo(hConsole, &csbi)) return;
		DWORD cellCount = csbi.dwSize.X * csbi.dwSize.Y;
		COORD homeCoords = {0, 0};
		FillConsoleOutputCharacterA(hConsole, ' ', cellCount, homeCoords, &count);
		FillConsoleOutputAttribute(hConsole, csbi.wAttributes, cellCount, homeCoords, &count);
		SetConsoleCursorPosition(hConsole, homeCoords);
	};
	auto safePause = []() {
		std::cout << "\nPress any key to continue...";
		// PRECOGS_FIX: replace system("pause") with direct keyboard read to avoid shell invocation
		_getch();
		std::cout << "\n";
	};

	for (int k = 0; k < 1000; k++)
	{
		safeClear(); // PRECOGS_FIX: replace system("cls") with safeClear() to avoid shell invocation
		cout << "\tM A I N  M E N U\n";
		cout << "      =====================\n";
		cout << " 1. TEACHER\n";
		cout << " 2. OFFICER\n";
		cout << " 3. TYPIST\n";
		cout << " 0. Back\n";
		cout << " Your choice: \n";
		switch (_getch())
		{
		case '1':
		{
			safeClear();
			cout << "\t T E A C H E R\n";
			cout << "===================================\n";
			teacher.getdata();
			cout << "\n\n\tThe given information:\n";
			cout << "===================================\n";
			teacher.showdata();
			cout << endl
				 << endl;
			safePause();
		}
		break;

		case '2':
		{
			safeClear();
			cout << "\t O F F I C E R\n";
			cout << "===================================\n";
			officer.getdata();
			cout << "\n\n\tThe given information:\n";
			cout << "===================================\n";
			officer.showdata();
			cout << endl
				 << endl;
			safePause();
		}
		break;

		case '3':
		{
			for (int l = 0; l < 1000; l++)
			{
				safeClear();
				cout << "\t T Y P I S T\n";
				cout << "===================================\n";
				cout << " 1. Regular typist\n";
				cout << " 2. Casual typist\n";
				cout << " 0. Back\n";
				cout << " Your choice: \n";
				switch (_getch())
				{
				case '1':
				{
					safeClear();
					cout << "\t R E G U L A R  T Y P I S T\n";
					cout << "===================================\n";
					regular.getdata();
					cout << "\n\n\tThe given information:\n";
					cout << "===================================\n";
					regular.showdata();
					cout << endl
						 << endl;
					safePause();
				}
				break;

				case '2':
				{
					safeClear();
					cout << "\t C A S U A L  T Y P I S T\n";
					cout << "===================================\n";
					casual.getdata();
					cout << "\n\n\tThe given information:\n";
					cout << "===================================\n";
					casual.showdata();
					cout << endl
						 << endl;
					safePause();
				}
				break;
				case '0':
				{
					safeClear();
					l = 1000;
				}
				break;
				default:
				{
					cout << endl
						 << endl;
					cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
					Sleep(700);
					Sleep(700);
				}
				break;
				} // switch
			}      // for
		}
		break;
		case '0':
		{
			safeClear();
			k = 1000;
		}
		break;
		default:
		{
			cout << endl
				 << endl;
			cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
			Sleep(700);
			Sleep(700);
		}
		break;
		} // switch
	}      // for loop
}

void F_Second_Program_Menu()
{
	Master master1; // object

	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << "\t M A S T E R'S  D A T A B A S E\n";
		cout << "      ====================================\n";
		cout << " 1. Create  Record\n";
		cout << " 2. Display Record\n";
		cout << " 3. Update  Record\n";
		cout << " 0. Back\n";
		cout << " Your choice: \n";
		switch (_getch())
		{
		case '1':
			system("cls");
			cout << "\t C R E A T E  A  R E C O R D\n";
			cout << "===========================================\n";
			master1.create();
			cout << endl
				 << endl;
			system("pause");
			break;

		case '2':
			system("cls");
			cout << "\t D I S P L A Y  D E T A I L S\n";
			cout << "==========================================\n";
			master1.display();
			cout << endl
				 << endl;
			system("pause");
			break;

		case '3':
			system("cls");
			master1.update();
			cout << endl
				 << endl;
			// system("pause");
			break;

		case '0':
			k = 1000;
			break;

		default:
			cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
			Sleep(0700);
			Sleep(0700);
			break;
		} // switch
	}	  // for loop
}
