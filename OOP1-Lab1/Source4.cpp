//U1910049 Rustam Zokirov
//Section 004
//Assignment-2(Operators)
//C++ program to Calculate Area of Rectangle

#include <iostream>
#include <math.h>
using namespace std;
int main4() {
	cout << "\t\tC++ program to Calculate Area of Rectangle. " << endl;
	float a, b, Area;
	cout << "Please enter the length of Rectangle: " ;
	cin >> a;
	cout << "Please enter the width of Rectangle: ";
	cin >> b;
	if (a > 0 && b > 0) {
		Area = a * b;
		cout << "The area of Rectangle is " << Area << ";" << endl;
	}
	else {
		cout << "The sides of Rectangle cannot be negetive numbers !" << endl;
	}
	system("pause");
	return 0;
}