//U1910049 Rustam Zokirov
//Section 004
//Assignment-2(Operators)
//C++ program to Calculate Area of Equilateral Triangle

#include <iostream>
#include <math.h>
using namespace std;
int main2(){
	cout << "\t\tC++ program to Calculate Area of Equilateral Triangle.\n ";
	float a, Area;
	cout << "Please enter the value for the side of Triangle: ";
	cin >> a;
	if (a > 0) {
		Area = sqrt(2) * a * a * 0.25;
		cout << "The Area of this triangle is " << Area << ";" << endl;
	}
	else {
		cout << "The sides of Triangle cannot be negative numbers ! " << endl;
	}
	system("pause");
	return 0;
}