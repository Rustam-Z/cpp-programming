// Practical Lab Assignment-7(Week 9)
// ID:U1910049 Name: Rustam Zokirov
// Program to sum the series up to n

#include <iostream>
#include <math.h>
using namespace std;

double qwerty(double n, double sum, double fact)
{
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;			 // calculating the factorial of the numbers
		sum += (pow(i, i) / (fact)); // executing the sum of numbers
	}								 //"pow" is raising 'i' to power 'i'
	return sum;						 //
} // end function qwerty

int main()
{
	double n;
	double sum = 0;
	double fact = 1;
	cout << "Please ebter the number: "; // outputing and inputing the number
	cin >> n;
	if (n > 0)												// the program will calculate the sum when numbers is positive
		cout << "Sum is: " << qwerty(n, sum, fact) << endl; // calling the function qwerty
	else													// when the number is negative 'else' will work
		cout << "INVALID INPUT!" << endl;
	system("pause");
	return 0;
} // ending the program successfully