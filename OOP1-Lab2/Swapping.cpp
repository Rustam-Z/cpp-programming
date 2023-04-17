// Program to show swap of two no's without using third variable
#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "We have swapped your numbers, result in below." << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}