#include "Header.h"

int main() {	
	srand(time(0));
	::available = rand() % 200000;
	MainMenu();

	system("color 9E");
	system("pause");
	return 0;
}

void MainMenu() {
	system("color 9E");
	char num;
	char choice;
	do {
		
		bool checked = false;
		string checkName, checkPassword;
		accounts data;
		accounts oldData[50];
		cout << "\n          Choose what you want:";
		cout << "\n          1.Sign in";
		cout << "\n          2.Registration";
		cout << "\n          3.Exit";
		cout << "\n          ";
		choice = _getch();
		switch (choice)
		{
		case 49:
			outData(oldData);
			system("CLS");
			cout << "\n          Please enter your name:";
			cout << "\n          ";
			cin >> checkName;
			cout << "\n          Please enter your password:";
			cout << "\n          ";
			cin >> checkPassword;
			for (int i = 0;i<::increaments; i++) {
				
				if (oldData[i].name == checkName && oldData[i].password == checkPassword) {
					::accountNum = i;
					::balance = oldData[i].balance;
					::borrow = oldData[i].borrowed;
					checked = true;
				}

			}
			if (checked) {
				do {
					system("CLS");
					cout << "\n          Hello "<<oldData[::accountNum].name << endl;
					cout << "\n          What would you like to do?" << endl;
					cout << "\n          1.Actions with card" << endl;
					cout << "\n          2.Check balance" << endl;
					cout << "\n          0.Exit" << endl;
					num = _getch();
					switch (num) {
					case 48:
						break;
					case 49: Menu(oldData);
						break;
					case 50: CheckBalance();
						break;
					default:
						cout << "\n          Error! Section not found. Please try one more time." << endl << endl;
						system("pause");
						break;
					}

				} while (num != '0');
			}
			else cout << "\n          Wrong name or password\n";
			break;
		case 50:
			system("CLS");
			cout << "\n          Input your name without space";
			cout << "\n          ";
			cin >> data.name;
			cout << "\n          Input yuor password without space";
			cout << "\n          ";
			cin >> data.password;
			data.balance = 0;
			data.borrowed = 0;
			inputNewData(data);
			break;
		case 51:
			break;
		default:
			cout << "\n          There is no such ssection";
			cout << "\n          Please try one more time";
			break;
		}
	} while (choice != 51);

	


	
	cout << "\n          ";
}




