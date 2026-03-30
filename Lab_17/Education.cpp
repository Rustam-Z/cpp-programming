#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

// Functions declaration
void F_First_Program_Menu();

class Education {
protected:
	int HPQ;
public:
	Education() {
		HPQ = 0;
	}
	void getdata() {
			cout << "\n1. Undergraduate     2. Graduate     3. Masters Degree     4. PHD\n";
			cout << "Enter Educational Qualification: " ;
			cin >> HPQ;
			if (HPQ == 1 || HPQ == 2 || HPQ == 3 || HPQ == 4) {
			}
			else {
				cout << "Invalid Educational Qualification. Try one more time.\n";
				//Sleep(0700); Sleep(0700);
				Education::getdata();
			}
	}

	void showdata() {
		if (HPQ == 1) {
			cout << "Educational Qualification: Undergraduate\n";
		}
		else if (HPQ == 2) {
			cout << "Educational Qualification: Graduate\n";
		}
		else if (HPQ == 3) {
			cout << "Educational Qualification: Masters Degree\n";
		}
		else if (HPQ == 4) {
			cout << "Educational Qualification: PHD\n";
		}
	}
};

class Staff {
protected:
	string code;
	string name;
public:
	Staff() {
		code = "0000";
		name = "Unknown";
	}
	void getdata_name() {
		cout << "Enter employee name: " ; cin >> name;
	}
	void getdata_code() {
		cout << "Enter employee code: " ; cin >> code;
	}
	void showdata_name() {
		cout << "Employee name: " << name << endl;
	}
	void showdata_code() {
		cout << "Employee code: " << code << endl;
	}
};

void Teacher::getdata() {
    Staff::getdata_code();
    Staff::getdata_name();
    Education::getdata();

    // Read subject allowing spaces and validate length
    std::string line;
    while (true) {
        std::cout << "Enter subject: ";
        if (!std::getline(std::cin, line)) { std::cin.clear(); continue; }
        if (!line.empty() && line.size() <= 256) { // PRECOGS_FIX: use getline to capture multi-word subject and bound length
            subject = line;
            break;
        }
        std::cout << "Invalid subject. Try again.\n";
    }

    // Read number of publications robustly
    while (true) {
        std::cout << "Enter number of publications: ";
        if (!std::getline(std::cin, line)) { std::cin.clear(); continue; }
        try {
            long val = std::stol(line);
            if (val >= 0 && val <= 1000000) {
                publications = static_cast<int>(val); // PRECOGS_FIX: validated numeric parse and range
                break;
            }
        } catch (const std::exception &) {
            // continue
        }
        std::cout << "Invalid number. Please enter a non-negative integer.\n";
    }
}

class Officer : public Staff, public Education {
protected:
	float grade;
public:
	Officer() {
		grade = 0.0;
	}
	void getdata() {
		Staff::getdata_code();
		Staff::getdata_name();
		Education::getdata();
		cout << "Enter the grade: ";  cin >> grade;
	}
	void showdata() {
		Staff::showdata_code();
		Staff::showdata_name();
		Education::showdata();
		cout << "Officer Grade: " << grade << endl;
	}
};

class Typist : public Staff {
protected:
	int speed;
public:
	Typist() {
		speed = 0;
	}
	void getdata() {
		Staff::getdata_code();
		Staff::getdata_name();
		cout << "Enter the speed (wprds/min): "; cin >> speed;
	}
	void showdata() {
		Staff::showdata_code();
		Staff::showdata_name();
		cout << "Speed (words/min): " << speed << endl;
	}
};

class Regular_Typist : public Typist {
protected:
	float monthly_salary;
public:
	Regular_Typist() {
		monthly_salary = 0.0;
	}
	void getdata() {
		Typist::getdata();
		cout << "Enter the monthly salary: "; cin >> monthly_salary;
	}
	void showdata() {
		Typist::showdata();
		cout << "Monthly salary: " << monthly_salary << endl;
	}
};

class Casual_Typist : public Typist {
protected:
	float daily_wage;
public:
	Casual_Typist() {
		daily_wage = 0.0;
	}
	void getdata() {
		Typist::getdata();
		cout << "Enter the daily wage: "; cin >> daily_wage;
	}
	void showdata() {
		Typist::showdata();
		cout << "Daily wage: " << daily_wage << endl;
	}
};

int main() {
	//
	F_First_Program_Menu();

	system("pause");
	return 0;
}
void F_First_Program_Menu() {
    // objects
    Teacher teacher;
    Officer officer;
    Regular_Typist regular;
    Casual_Typist casual;

    auto clear_screen = []() {
        // PRECOGS_FIX: avoid system("cls"); simulate clear in a portable manner
        std::cout << std::string(50, '\n');
    };

    auto pause_console = []() {
        // PRECOGS_FIX: avoid system("pause"); use a simple Enter-wait
        std::cout << "Press Enter to continue..." << std::endl;
        std::string _tmp;
        std::getline(std::cin, _tmp);
    };

    for (int k = 0; k < 1000; k++) {
        clear_screen();
        std::cout << "\tM A I N  M E N U\n";
        std::cout << "      =====================\n";
        std::cout << " 1. Teacher\n";
        std::cout << " 2. Officer\n";
        std::cout << " 3. Typist\n";
        std::cout << " 0. Back\n";
        std::cout << " Your choice: \n";
        switch (_getch())
        {
        case '1': {
            clear_screen();
            std::cout << "\t T E A C H E R\n";
            std::cout << "===================================\n";
            teacher.getdata();
            std::cout << "\n\n\tThe given information:\n";
            std::cout << "===================================\n";
            teacher.showdata();
            std::cout << std::endl << std::endl;
            pause_console();
        }break;

        case '2': {
            clear_screen();
            std::cout << "\t O F F I C E R\n";
            std::cout << "===================================\n";
            officer.getdata();
            std::cout << "\n\n\tThe given information:\n";
            std::cout << "===================================\n";
            officer.showdata();
            std::cout << std::endl << std::endl;
            pause_console();
        }break;

        case '3': {
            for (int l = 0; l < 1000; l++) {
                clear_screen();
                std::cout << "\t T Y P I S T\n";
                std::cout << "===================================\n";
                std::cout << " 1. Regular typist\n"; std::cout << " 2. Casual typist\n"; std::cout << " 0. Back\n"; std::cout << " Your choice: \n";
                switch (_getch())
                {
                case '1': {
                    clear_screen();
                    std::cout << "\t R E G U L A R  T Y P I S T\n";
                    std::cout << "===================================\n";
                    regular.getdata();
                    std::cout << "\n\n\tThe given information:\n";
                    std::cout << "===================================\n";
                    regular.showdata();
                    std::cout << std::endl << std::endl;
                    pause_console();
                }
                        break;

                case '2': {
                    clear_screen();
                    std::cout << "\t C A S U A L  T Y P I S T\n";
                    std::cout << "===================================\n";
                    casual.getdata();
                    std::cout << "\n\n\tThe given information:\n";
                    std::cout << "===================================\n";
                    casual.showdata();
                    std::cout << std::endl << std::endl;
                    pause_console();
                }
                        break;
                case '0': {
                    clear_screen();
                    l = 1000;
                }break;
                default: {std::cout << std::endl << std::endl;
                    std::cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
                    Sleep(0700); Sleep(0700);
                }break;
                } // switch
            } // for
        }break;
        case '0': {
            clear_screen();
            k = 1000;
        } break;
        default: { std::cout << std::endl << std::endl;
            std::cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
            Sleep(0700); Sleep(0700);
        }break;
        } // switch 
    } // for loop
}