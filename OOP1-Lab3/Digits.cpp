//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to input a number and then calculate sum of its digits.

#include <iostream>
using namespace std;
int main3() {
	int a, sum = 0;
	cout << "Please enter the number: ";
	cin >> a;
	while (a != 0) {
		sum = sum + a % 10;
		a = a / 10;
	}
	cout <<"The sum of digits of given number is "<< sum <<";"<< endl;

	system("pause");
	return 0;
}