#include <iostream>

using namespace std;

long long int sum(long long int n)
{ // fuction called 'sum' foe calculating the sum of the natural numbers
	if (n == 0)
		return 0; // will return '0' when number will come to 0
	else
		return n + sum(n - 1); // using recursion
}

int main2()
{
	cout << "\t\t\t***Program to calculate the sum of natural numbers using recursion***" << endl;
	int num;
	cout << "Please enter the interval: ";
	cin >> num;							 // inpuing the interval of the numbers
	cout << "The sum is : " << sum(num); // calling function 'sum'
	return 0;
}