// Rustam Zokirov
// C++ program to Calculate Area of Equilateral Triangle

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "\t\tC++ program to Calculate Area of Equilateral Triangle.\n ";
	float a, Area;
	cout << "Please enter the value for the side of Triangle: ";
	cin >> a;
	if (a > 0)
	{
		Area = sqrt(2) * a * a * 0.25;
		cout << "The Area of this triangle is " << Area << ";" << endl;
	}
	else
	{
		cout << "The sides of Triangle cannot be negative numbers ! " << endl;
	}
	system("pause");
	return 0;
}