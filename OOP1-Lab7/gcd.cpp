#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	if (x == 0 || y == 0)
		return y, x; // will input non-zero number when even one number input in zero
	if (x == y)
		return x; // will return first number when both of the numbers are equal
	if (x > y)
		return gcd(x - y, y); // when first number is greater than second
	if (y > x)
		return gcd(x, y - x); // when second number is greater than first
}

int main4()
{
	cout << "\t\t\t***Program to calculate the G.C.D for two integers using recursion.***" << endl;
	cout << "Please enter two integers: " << endl;
	int x, y;
	cin >> x >> y;
	cout << "The G.C.D of " << x << "and " << y << " is " << gcd(x, y); // calling function in the main function
	return 0;
}