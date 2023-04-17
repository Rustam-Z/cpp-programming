// U1910049 Rustam Zokirov
// C++ program to Calculate Area of Square

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "\t\tC++ program to Calculate Area of Square." << endl;
	float a, Area;
	cout << "Please enter the value for the side of Square: ";
	cin >> a;
	if (a > 0)
	{
		Area = a * a;
		cout << "The area of Square is " << Area << ";" << endl;
	}
	else
	{
		cout << "Negetive numbers cannot be applied !!!" << endl;
	}
	system("pause");
	return 0;
}