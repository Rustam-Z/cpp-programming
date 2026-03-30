#include "Header.h"

#include <random>

int main()
{
    // PRECOGS_FIX: replace predictable srand/time + rand with C++ <random> seeded by non-deterministic random_device
    std::random_device rd; // non-deterministic seed (if supported by platform)
    std::mt19937_64 gen(rd()); // cryptographically stronger PRNG for non-cryptographic uses
    std::uniform_int_distribution<int> dist(0, 200000 - 1);
    ::available = dist(gen); // PRECOGS_FIX: secure, non-predictable generation of ::available

    MainMenu();

    system("color 9E");
    system("pause");
    return 0;
}

void MainMenu()
{
	system("color 9E");
	char num;
	char choice;
	do
	{

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
			for (int i = 0; i < ::increaments; i++)
			{

				if (oldData[i].name == checkName && oldData[i].password == hashPassword(checkPassword)) // PRECOGS_FIX: hash password before comparison
				{
					::accountNum = i;
					::balance = oldData[i].balance;
					::borrow = oldData[i].borrowed;
					checked = true;
				}
			}
			if (checked)
			{
				do
				{
					system("CLS");
					cout << "\n          Hello " << oldData[::accountNum].name << endl;
					cout << "\n          What would you like to do?" << endl;
					cout << "\n          1.Actions with card" << endl;
					cout << "\n          2.Check balance" << endl;
					cout << "\n          0.Exit" << endl;
					num = _getch();
					switch (num)
					{
					case 48:
						break;
					case 49:
						Menu(oldData);
						break;
					case 50:
						CheckBalance();
						break;
					default:
						cout << "\n          Error! Section not found. Please try one more time." << endl
							 << endl;
						system("pause");
						break;
					}

				} while (num != '0');
			}
			else
				cout << "\n          Wrong name or password\n";
			break;
		case 50:
			system("CLS");
			cout << "\n          Input your name without space";
			cout << "\n          ";
			cin >> data.name;
			cout << "\n          Input your password without space";
			cout << "\n          ";
			cin >> data.password;
			data.password = hashPassword(data.password); // PRECOGS_FIX: hash password before storing
			data.balance = 0;
			data.borrowed = 0;
			inputNewData(data);
			break;
		case 51:
			break;
		default:
			cout << "\n          There is no such section";
			cout << "\n          Please try one more time";
			break;
		}
	} while (choice != 51);

	cout << "\n          ";
}
