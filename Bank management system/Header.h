#pragma once
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
#include <vector>
#include <windows.h>
#include <ctime>
#include <conio.h>

using namespace std;
int accountNum, increaments;
long double balance = 0;
long double available;
long double borrow = 0;
struct accounts {

	string name;
	string password;
	double balance;
	double borrowed;
};
//function declaring//////////////////////////////////////////
void CheckBalance();
void Borrow();
void Deposit();
void Return();
void Menu(accounts oldData[]);
void MainMenu();
void outData(accounts oldData[]);
void inputNewData(accounts data);
void inputUpgradeData(accounts data[]);
///////////////////////////////////////////////////////////////
//function defintion///////////////////////////////////////////
void Menu(accounts oldData[]) {
	char num = '1';
	while (num != '0')
	{
		system("CLS");
		cout << "\n          1.Deposit" << endl;
		cout << "\n          2.Borrow money from bank" << endl;
		cout << "\n          3.Return money to bank" << endl << endl;
		cout << "\n          If you want to quit from this section please press 0" << endl << endl;
		num = _getch();
		switch (num) {
		case 49:
			system("CLS");
			Deposit();
			oldData[accountNum].balance = ::balance;
			inputUpgradeData(oldData);
			break;
		case 50:
			system("CLS");
			Borrow();
			oldData[accountNum].balance = ::balance;
			oldData[accountNum].borrowed = ::borrow;
			inputUpgradeData(oldData);
			break;
		case 51:
			system("CLS");
			Return();
			oldData[accountNum].balance = ::balance;
			oldData[accountNum].borrowed = ::borrow;
			inputUpgradeData(oldData);
			break;
		}
	}
	cout << "\n          ";
}

void CheckBalance() {
	system("CLS");
	cout << "\n          You balance: " << ::balance << "$" << endl << endl;
	cout << "\n          ";
	system("pause");
}

void Deposit()
{
	double money;
	cout << "\n          Please enter amount of money - ";
	cin >> money;
	if (money == 0)
	{
		cout << "\n          You entered 0 value so now you are redirected to the menu" << endl;
		Sleep(2000);
	}
	else if (money > 0)
	{
		::balance = ::balance + money;
		
		cout << "\n          Please wait for a while, while we are transfering money to your account" << endl;
		Sleep(2000);
		cout << "\n          ";
		cout << money << "$ amount of money was added to your balance" << endl << endl;
	}
	else
	{
		cout << "\n          Error!" << endl;
		cout << "\n          Please enter valid amount of money!" << endl << endl;
	}
	cout << "\n          ";
	system("pause");
}

void Borrow()
{
	long double borrow;
	cout << "\n          In during time in our bank we have " << ::available << "$" << endl;
	cout << "\n          How much do you want to borrow?" << endl;
	cout << "\n          ";
	cin >> borrow;
	if (borrow == 0)
	{
		cout << "\n          You entered 0 value so now you are redirected to the menu" << endl << endl;
		Sleep(2000);
	}
	else if (borrow <= ::available && borrow > 0)
	{
		cout << "\n          We can give you such amount of money." << endl;
		cout << "\n          Please wait for a while, while we are transfering money to your account" << endl;
		Sleep(3000);
		::available = ::available - borrow;
		::balance = ::balance + borrow;
		::borrow = ::borrow + borrow;
		cout << "\n          Money is successfully transfered to your account." << endl << endl;
	}
	else if (::borrow < 0)
	{
		cout << "\n          Error!" << endl;
		cout << "\n          Please enter valid amount of money!" << endl << endl;
	}
	else {
		cout << "\n          We are sorry but we cant give you such amount of money" << endl << endl;
	}
	cout << "\n          ";
	system("pause");
}

void Return()
{
	char choise;
	long double retr;
	if (::borrow > 0) {
		cout << "\n          You have borrowed - " << ::borrow << "$" << endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
		cout << "\n          If you want to return some amount of money please press SPACE or press anything to go back to menu." << endl;
		choise = _getch();
		if (choise == 32) {
			cout << "\n          How much do you want to return?" << endl;
			cout << "\n          ";
			cin >> retr;
			if (retr == 0)
			{
				cout << "\n          You entered 0 value so now you are redirected to the menu" << endl;
				Sleep(2000);
			}
			else if (retr > 0 && retr <= ::borrow) {
				cout << "\n          Please wait while we are taking from your account money back." << endl;
				::borrow = ::borrow - retr;
				::balance = ::balance - retr;
				::available = ::available + retr;
				Sleep(3000);
				cout << "\n          Money is successfully taken from your account." << endl << endl;
			}
			else
			{
				cout << "\n          Error!" << endl;
				cout << "\n          Please enter valid amount of money!" << endl << endl;
			}
		}
	}
	else {
		cout << "\n          You haven't borrowed any money from us." << endl << endl;
	}
	cout << "\n          ";
	system("pause");
}

void outData(accounts oldData[]) {
	ifstream file;
	file.open("data.txt");
	if (!file.is_open()) {
		cout << "Error\n";

	}
	else {
		//cout << "file is opened\n";
		string str = "";
		int i = 0, j = 0;
		string strArr[4];
		do {
			getline(file, str, '|');
			if (j < 4) {
				strArr[j] = str;
				j++;
			}
			else {
				oldData[i].name = strArr[0];
				oldData[i].password = strArr[1];
				oldData[i].balance = stoi(strArr[2]);
				oldData[i].borrowed = stoi(strArr[3]);
				::increaments++;
				j = 0;
				strArr[j] = str;
				j++;
				i++;
			}



			//cout<<str<<"|";
		}while (!file.eof());
	}
}
void inputNewData(accounts data) {
	ofstream file;
	file.open("data.txt", ofstream::app);
	file << data.name;
	file << "|";
	file << data.password;
	file << "|";
	file << data.balance;
	file << "|";
	file << data.borrowed;
	file << "|";




	file.close();
}
void inputUpgradeData(accounts data[]) {
	ofstream file;
	file.open("data.txt");
	for (int i = 0; i <::increaments; i++) {
		
		file << data[i].name;
		file << "|";
		file << data[i].password;
		file << "|";
		file << data[i].balance;
		file << "|";
		file << data[i].borrowed;
		file << "|";
		
	}

	file.close();
}
