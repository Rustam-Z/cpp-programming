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

class Teacher : public Staff, public Education {
protected:
	string subject;
	int publications;
public:

	Teacher() {
		subject = "Unknown";
		publications = 0;
	}
	void getdata() {
		Staff::getdata_code();
		Staff::getdata_name();
		Education::getdata();
		cout << "Enter subject: " ; cin >> subject;
		cout << "Enter number of publications: " ; cin >> publications;
	}
	void showdata() {
		Staff::showdata_code();
		Staff::showdata_name();
		Education::showdata();
		cout << "Subject: " << subject << endl << "Publications: " << publications << endl;
	}
};

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

	for (int k = 0; k < 1000; k++) {
		system("cls");
		cout << "\tM A I N  M E N U\n";
		cout << "      =====================\n";
		cout << " 1. Teacher\n";
		cout << " 2. Officer\n";
		cout << " 3. Typist\n";
		cout << " 0. Back\n";
		cout << " Your choice: \n";
		switch (_getch())
		{
		case '1': {
			system("cls");
			cout << "\t T E A C H E R\n";
			cout << "===================================\n";
			teacher.getdata();
			cout << "\n\n\tThe given information:\n";
			cout << "===================================\n";
			teacher.showdata();
			cout << endl << endl;
			system("pause");
		}break;

		case '2': {
			system("cls");
			cout << "\t O F F I C E R\n";
			cout << "===================================\n";
			officer.getdata();
			cout << "\n\n\tThe given information:\n";
			cout << "===================================\n";
			officer.showdata();
			cout << endl << endl;
			system("pause");
		}break;

		case '3': {
			for (int l = 0; l < 1000; l++) {
				system("cls");
				cout << "\t T Y P I S T\n";
				cout << "===================================\n";
				cout << " 1. Regular typist\n"; cout << " 2. Casual typist\n"; cout << " 0. Back\n"; cout << " Your choice: \n";
				switch (_getch())
				{
				case '1': {
					system("cls");
					cout << "\t R E G U L A R  T Y P I S T\n";
					cout << "===================================\n";
					regular.getdata();
					cout << "\n\n\tThe given information:\n";
					cout << "===================================\n";
					regular.showdata();
					cout << endl << endl;
					system("pause");
				}
						break;

				case '2': {
					system("cls");
					cout << "\t C A S U A L  T Y P I S T\n";
					cout << "===================================\n";
					casual.getdata();
					cout << "\n\n\tThe given information:\n";
					cout << "===================================\n";
					casual.showdata();
					cout << endl << endl;
					system("pause");
				}
						break;
				case '0': {
					system("cls");
					l = 1000;
				}break;
				default: {cout << endl << endl;
					cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
					Sleep(0700); Sleep(0700);
				}break;
				} // switch
			} // for
		}break;
		case '0': {
			system("cls");
			k = 1000;
		} break;
		default: { cout << endl << endl;
			cout << "\t\t Your choice is not abailable in Menu. \n\t\t Please try one more time.\n";
			Sleep(0700); Sleep(0700);
		}break;
		} // switch 
	} // for loop
}