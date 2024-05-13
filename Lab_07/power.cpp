#include <iostream>
#include <math.h>

using namespace std;

long long int power(long long int x, long long int y)
{
	if (y == 0)
		return 1;
	else
		return x * power(x, y - 1);
}

int main1()
{
	cout << "\t\t\t***Program to calculate the x^y using recursion***" << endl;
	int x, y;
	cout << "Please enter the numbers x^y: ";
	cin >> x >> y;					   // inpuing the interval of the numbers
	cout << "Result: " << power(x, y); // calling function 'power'
	cout << endl;
	system("pause");
	return 0;
}