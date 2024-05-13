// Program to find greatest in 3 numbers

#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Enter the 3 numbres: ";
	cin >> a >> b >> c;

	if (a >= b && a >= c)
		cout << "The greatest number is " << a << ";" << endl;

	if (b >= a && b >= c)
		cout << "The greatest number is " << b << ";" << endl;

	if (c >= a && c >= b)
		cout << "The greatest number is " << c << ";" << endl;
	else if (a == b == c)
		cout << "All numbers are equal." << endl;

	system("pause");
	return 0;
}