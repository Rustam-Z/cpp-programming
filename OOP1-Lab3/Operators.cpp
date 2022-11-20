//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to display arithmetic operators using switch case.

#include <iostream>
using namespace std;
int main8() {
	char op;
	float num1, num2;
	cout << "Enter the 1st operand: ";
	cin >> num1;
	cout << "Enter operator either + or - or * or / : ";
	cin >> op;
	cout << "Enter 2nd operand: ";
	cin >> num2;
	cout << endl;
	switch (op)
	{
	case '+':
		cout << "Result is "<< num1 + num2 << endl;
		break;
	case '-':
		cout << "Result is " << num1 - num2 << endl;
		break;
	case '*':
		cout << "Result is " << num1 * num2 << endl;
		break;
	case '/':
		cout << "Result is " << num1 / num2 << endl;
		break;
	default:
		cout << "Error! Operator is not correct";
		break;
	}
	system("pause");
	return 0;
}