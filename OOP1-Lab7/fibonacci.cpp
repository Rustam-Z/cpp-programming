#include <iostream>

using namespace std;

int fibonacci(int num)
{ // new function 'fibonacci' for calculating fibonacci series
	if (num <= 1)
	{
		return num;
	}
	else
	{
		return (fibonacci(num - 1) + fibonacci(num - 2));
	}
}
int main()
{
	cout << "\t\t\t***Program to calculate the sum of natural numbers using recursion***" << endl;
	cout << "Enter how many numbers would you like to output : ";
	int num;
	cin >> num;
	cout << "Fibonnaci Series: ";	 // inputing the quantity of numbers
	for (int i = 0; i < num; i++)	 // for loop for displaying series
		cout << " " << fibonacci(i); // calling function
	cout << endl;
	system("pause");
	return 0;
}