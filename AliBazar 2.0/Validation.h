#include <iostream>
#include <string>    // Text
#include <ctime>     // Time
#include <ctype.h>   // Validation
#include <conio.h>   // Getch
#include <windows.h> // Loading

using namespace std;


// Global Identifires for validation
int Num_Upper = 0, Num_Lower = 0, Num_Number = 0, Validation = 0;
string Login_Sign, Parol_Sign;


// Identifires for File Hendling
string Name_Memory, Login_Memory, Parol_Memory, TellNum_Memory;


class Validation_C {
private:
	// Identifires
	string Name, Login, Parol, TellNum;
public:

	// Defoult Constructor
	Validation_C() {
		Name = "";
		Login = "";
		Parol = "";
		TellNum = "";
	}

	//Function display
	void Display() {
		cout << "\t\t\tUser Information:" << endl << endl;
		cout << "\t\tUser Name  : " << Name << endl;
		cout << "\t\tTelephone  : " << TellNum << endl;
		cout << "\t\tLogin      : " << Login << endl;
		cout << "\t\tPassword   : " << Parol << endl;
	}

	// Set Info of User
	void SetUser() {
		cout << "\t\t\t\t       Register User:" << endl << endl;
		cout << "\t\t\t\t        User Name : "; cin >> Name;
		cout << "\t\t\t\t        Telephone : "; cin >> TellNum;
		cout << "\t\t\t\t        Login     : "; cin >> Login;
		cout << "\t\t\t\t        Password  : "; cin >> Parol;

		// Info sended to Memory
		Name_Memory = Name;
		Parol_Memory = Parol;
		Login_Memory = Login;
		TellNum_Memory = TellNum;
	}

	// Friend Functions
	//Validation Check for parol
	friend void ValidationParol(Validation_C User) {
		if (User.Parol.length() >= 6 && User.Parol.length() <= 15) {
			for (int i = 0; i < User.Parol.length(); i++) {
				if (isupper(User.Parol[i])) {  // Number of Upper Letters
					Num_Upper += 1;
				}
				if (islower(User.Parol[i])) {  // Number of Lower Letters
					Num_Lower += 1;
				}
				if (isdigit(User.Parol[i])) {  // Number of Digits 
					Num_Number += 1;
				}
			}
			if (Num_Upper >= 1 && Num_Upper <= 10 && Num_Lower >= 4 && Num_Lower <= 10 && Num_Number >= 2 && Num_Number <= 10) {
				Validation++;
				Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
			}
			else { Num_Upper = 0; Num_Lower = 0; Num_Number = 0; }
		}
		else { Num_Upper = 0; Num_Lower = 0; Num_Number = 0; }
	}
	//Validation Check for Name
	friend void ValidationName(Validation_C  User) {
		if (User.Name.length() >= 1 && User.Name.length() <= 15) {
			for (int i = 0; i < User.Name.length(); i++) {
				if (isupper(User.Name[i])) {
					Num_Upper += 1;
				}
				if (islower(User.Name[i])) {
					Num_Lower += 1;
				}
				if (isdigit(User.Name[i])) {
					Num_Number += 1;
				}
			}

			if (Num_Upper <= 1 && Num_Lower >= 1 && Num_Lower <= 14 && Num_Number == 0) {
				Validation++;
				Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
			}
			else { Num_Upper = 0; Num_Lower = 0; Num_Number = 0; }
		}
		else { Num_Upper = 0; Num_Lower = 0; Num_Number = 0; }
	}
	//Validation Check for TellNum
	friend void ValidationTellNum(Validation_C User) {
		if (User.TellNum.length() >= 9 && User.TellNum.length() <= 12) {
			for (int i = 0; i < User.TellNum.length(); i++) {
				if (isupper(User.TellNum[i])) {
					Num_Upper += 1;
				}
				if (islower(User.TellNum[i])) {
					Num_Lower += 1;
				}
				if (isdigit(User.TellNum[i])) {
					Num_Number += 1;
				}
			}
			if (Num_Upper == 0 && Num_Lower == 0 && Num_Number >= 9 && Num_Number <= 12) {
				Validation++;
				Num_Upper = 0; Num_Lower = 0; Num_Number = 0;
			}
			else { Num_Upper = 0; Num_Lower = 0; Num_Number = 0; }
		}
		else { Num_Upper = 0; Num_Lower = 0; Num_Number = 0; }
	}

};