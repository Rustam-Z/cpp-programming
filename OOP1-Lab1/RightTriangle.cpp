// Rustam Zokirov
// C++ program to Calculate Area of Right angle Triangle

#include <iostream>

using namespace std;

int main()
{
	cout << "\t\tC++ program to Calculate Area of Right angle Triangle.\n ";
	float a, b, Area;
	cout << "Please enter the value for the first cathet of Triangle: ";
	cin >> a;
	cout << "Please enter the value for the second cathet of Triangle: ";
	cin >> b;
	if (a > 0 && b > 0)
	{
		Area = b * a * 0.5;
		cout << "The Area of this Triangle is " << Area << ";" << endl;
	}
	else
	{
		cout << "The sides of Triangle cannot be negative numbers ! " << endl;
	}
	system("pause");
	return 0;
}