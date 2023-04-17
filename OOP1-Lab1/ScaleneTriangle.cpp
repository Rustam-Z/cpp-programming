// Rustam Zokirov
// C++ program to Calculate Area of Scalene Triangle

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "\t\tC++ program to Calculate Area of Scalene Triangle.\n";
	float a, b, c, S, Area;
	cout << "Please enter the values for the first side of Triangle: ";
	cin >> a;
	cout << "Please enter the values for the second side of Triangle: ";
	cin >> b;
	cout << "Please enter the values for the third side of Triangle: ";
	cin >> c;
	if (a > 0 && b > 0 && c > 0)
	{
		if (c < a + b && a < b + c && b < a + c)
		{
			S = (a + b + c) / 2;
			Area = sqrt(S * (S - a) * (S - b) * (S - c));
			cout << "The Area of Triangle is " << Area << endl;
			return 0;
		}
		else
		{
			cout << "This triangle is wrong try another values." << endl;
			return 0;
		}
	}
	else
	{
		cout << "The sides of Triangle cannot be negative numbers!" << endl;
	}
	system("pause");
	return 0;
}