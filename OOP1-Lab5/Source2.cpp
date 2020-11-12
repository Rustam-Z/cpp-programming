//Practical Lab Assignment-7(Week 9)
//ID:U1910049 Name:Rustam Zokirov
//Program to convert into minutes
#include <iostream>
using namespace std;
double converting1(double hours, double minutes, double seconds) {//initializing the variables
	return (hours * 60) + (minutes)+(seconds / 60);// returning the function "converting"
}
int main3() {
	double hours, minutes, seconds;
	cout << "Hours: ";
	cin >> hours;            //Prompting user for data and 
	cout << "Minutes: ";     //reading 3 numbers for user
	cin >> minutes;          //!
	cout << "Seconds: ";
	cin >> seconds;
	if (hours >= 0 && minutes >= 0 && seconds >= 0)//the program will be executed when all numbers are positive
		cout << "The time in minutes is " << converting1(hours, minutes, seconds) << endl;
	else                                      //calling function to calculate the main function
		cout << "Invalid inputs!" << endl;
	return 0;//indicates that the program will ended successfully
}