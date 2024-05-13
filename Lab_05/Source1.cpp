// Practical Lab Assignment-7(Week 9)
// ID:U1910049 Name: Rustam Zokirov
// Program to swap two values using functions

#include <iostream>
#include <math.h> //C++ libriry which is calculating "pow" and PI=3.14
using namespace std;

int main2()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	swap(a, b);						 // C++ function to swap two numbers
	cout << a << " & " << b << endl; // swap is the function which is contained in c++ ==>
									 //==> there is no need to open new function to swap
	return 0;
} // ending the function main