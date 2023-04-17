// U1910049
// Lab assignment #3
// Program to find whether given number is even or odd.

#include <iostream>
using namespace std;
int main1()
{
	int a;
	cout << "Enter the number: ";
	cin >> a;
	if (a % 2 == 0)
		cout << "Your number is Even!" << endl;
	else
		cout << "Your number is Odd!" << endl;
	system("pause");
	return 0;
}