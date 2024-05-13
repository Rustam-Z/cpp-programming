#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

void first()
{
	// when the case 1 in the main menu
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << "\t\t\t\t***Area of Geometrical figures.***\n";
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << " [1] Circle" << endl;
	cout << " [2] Rectangle" << endl;
	cout << " [3] Triangle" << endl;
	cout << " [4] Square" << endl;
	cout << " [5] EXIT to MAIN MENU" << endl;
	cout << endl;
}

void second()
{
	// when the case 2 in the main menu
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << "\t\t\t\t***Circumference of Geometrical figures.***\n";
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << " [1] Circle" << endl;
	cout << " [2] Rectangle" << endl;
	cout << " [3] Triangle" << endl;
	cout << " [4] Square" << endl;
	cout << " [5] EXIT to MAIN MENU" << endl;
	cout << endl;
}

void third()
{
	// when the case 3 in the main menu
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << "\t\t\t\t***Find the Largest number among 3 numbers.***\n";
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
}

/////Overloading functions for the Finding AREA/////
double area(double radius)
{ // overloading function for finding the area of circle
	double area1;
	double input_radius;
	area1 = 3.141592653589793238463 * pow(radius, 2);
	cout << "The area of Circle: " << area1 << endl;
	cout << endl;
	return area1;
}

double area(double sideA, double sideB)
{ // overloading function for finding the area of rectengle
	double area2;
	area2 = sideA * sideB;
	cout << "The area of Rectangle: " << area2 << endl;
	cout << endl;
	return area2;
}

double area(double sidetriangleA, double sidetriangleB, double sidetriangleC)
{ // overloading function for finding the area of triangle
	double area3, S;
	S = (sidetriangleA + sidetriangleB + sidetriangleC) / 2;
	area3 = sqrt(S * (S - sidetriangleA) * (S - sidetriangleB) * (S - sidetriangleC));
	cout << "The area of triangle: " << area3 << endl;
	cout << endl;
	return area3;
}

float area(float sidesquare) ////overloading function for finding the area of square
{
	float area4;
	area4 = pow(sidesquare, 2);
	cout << "The area of square: " << area4 << endl;
	cout << endl;
	return area4;
}

//////Overloading functions for finding CIRCUMFERENCE///////
double circumference(double radius)
{
	double circumference1;
	double input_radius;
	circumference1 = 2 * 3.141592653589793238463 * radius;
	cout << "The circumference of Circle: " << circumference1 << endl;
	cout << endl;
	return circumference1;
}

double circumference(double sideA, double sideB)
{
	double circumference2;
	circumference2 = 2 * (sideA + sideB);
	cout << "The circumference of Rectangle: " << circumference2 << endl;
	cout << endl;
	return circumference2;
}

double circumference(double sidetriangleA, double sidetriangleB, double sidetriangleC)
{
	double circumference3;
	circumference3 = sidetriangleA + sidetriangleB + sidetriangleC;
	cout << "The circumference of triangle: " << circumference3 << endl;
	cout << endl;
	return circumference3;
}

float circumference(float sidesquare)
{
	float circumference4;
	circumference4 = 4 * sidesquare;
	cout << "The circumference of square: " << circumference4 << endl;
	cout << endl;
	return circumference4;
}

// Overloading function for inputing 3 in the main menu
int findlargest(int n1, int n2, int n3)
{

	if (n1 >= n2 && n1 >= n3)
	{
		cout << "Largest number: " << n1 << endl;
	}
	if (n2 >= n1 && n2 >= n3)
	{
		cout << "Largest number: " << n2 << endl;
	}
	if (n3 >= n1 && n3 >= n2)
	{
		cout << "Largest number: " << n3 << endl;
	}

	return n1, n2, n3;
}

double findlargest(double n1, double n2, double n3)
{

	if (n1 >= n2 && n1 >= n3)
	{
		cout << "Largest number: " << n1 << endl;
	}
	if (n2 >= n1 && n2 >= n3)
	{
		cout << "Largest number: " << n2 << endl;
	}
	if (n3 >= n1 && n3 >= n2)
	{
		cout << "Largest number: " << n3 << endl;
	}
	else if (n1 == n2 == n3)
		cout << "Largest number : " << n3 << endl;
	return n1, n2, n3;
}

// overloading function with templates
template <class T>
T Large(T n1, T n2, T n3)
{
	if (n1 >= n2 && n1 >= n3)
	{
		cout << "Largest number: " << n1 << endl;
	}
	if (n2 >= n1 && n2 >= n3)
	{
		cout << "Largest number: " << n2 << endl;
	}
	if (n3 >= n1 && n3 >= n2)
	{
		cout << "Largest number: " << n3 << endl;
	}
	else if (n1 == n2 == n3)
		cout << "Largest number : " << n3 << endl;

	return n1, n2, n3;
}

/////////////////////////////////////***STARTING POINT***////////////////////////////////////////////////////
int main()
{
	system("color 3E");
	int numberforoperation = 0;
	double radius1;
	double sideA, sideB;
	double sidetriangleA, sidetriangleB, sidetriangleC;
	float sidesquare;
	double n1, n2, n3;

	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << "\t\t\t\t\tHello! Welcome to the main menu.\n";
	cout << "\t\t   WARNING!!! Enter only numbers!!! And the 'y/n' when you will be asked!\n";
	for (int l = 0; l < 120; l++)
	{
		cout << "=";
	}
	cout << endl;
	cout << "\t[1] Area of Geometrical Figures.\n";
	cout << "\t[2] Circumference of geometrical figures.\n";
	cout << "\t[3] Find the largest number.\n";
	cout << "\t[4] finding the largest number with function template.\n";
	cout << "\t[5] EXIT\n";
	cout << endl;
b:
	cout << " Please enter the number of operation you would like to execute:  ";
	cin >> numberforoperation;
	if (numberforoperation > 0 && numberforoperation < 6)
	{
		system("cls");
		switch (numberforoperation)
		{
		case 1: // first11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
			first();
			int firstfirst;
		f:
			cout << " Choose one figure: ";
			cin >> firstfirst;
			if (firstfirst > 0 && firstfirst < 6)
			{
				system("cls");		// ends the main menu
				switch (firstfirst) // firstfirst
				{
					system("cls"); // ends the main menu
				case 1:
					cout << "\t\t\t\t***CIRCLE***\n";
				a:
					cout << "Enter the radius of the circle: ";
					cin >> radius1;
					if (radius1 > 0)
					{
						area(radius1);
						first();
						goto f;
					}
					else
						goto a;
					break;

				case 2:
					cout << "\t\t\t\t***RECTANGLE***\n";
				c:
					cout << "Enter the height of rectangle: ";
					cin >> sideA;
					cout << "Enter the width of the rectangle: ";
					cin >> sideB;
					cout << endl;
					if (sideA > 0 && sideB > 0)
					{
						area(sideA, sideB);

						first();
						goto f;
					}
					else
						goto c;
					break;
				case 3:
					cout << "\t\t\t\t***TRIANGLE***" << endl;
				d:
					cout << "Enter the first side of the triangle: ";
					cin >> sidetriangleA;
					cout << "Enter the second side of the triangle: ";
					cin >> sidetriangleB;
					cout << "Enter the third side of the triangle: ";
					cin >> sidetriangleC;
					cout << endl;
					if (sidetriangleA > 0 && sidetriangleB > 0 && sidetriangleC > 0 && sidetriangleC < sidetriangleA + sidetriangleB && sidetriangleA < sidetriangleB + sidetriangleC && sidetriangleB < sidetriangleC + sidetriangleA)
					{
						area(sidetriangleA, sidetriangleB, sidetriangleC);

						first();
						goto f;
					}
					else
						goto d;
					break;
				case 4:
					cout << "\t\t\t\t***Square***" << endl;
				e:
					cout << "Enter the side of square: ";
					cin >> sidesquare;
					if (sidesquare > 0)
					{
						area(sidesquare);

						first();
						goto f;
					}
					else
						goto e;
					break;
				case 5:
				{
					main();
					break;
				}
				default:
					break;
				}
				break;
			}
			else
				goto f;
			break;

		case 2: // second2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
			second();
			int secondsecond;
		g:
			cout << " Choose one figure: ";
			cin >> secondsecond;
			if (secondsecond > 0 && secondsecond < 6)
			{
				system("cls");		  // ends the main menu
				switch (secondsecond) // firstfirst
				{
					system("cls"); // ends the main menu
				case 1:
					cout << "\t\t\t\t***CIRCLE***\n";
				h:
					cout << "Enter the radius of the circle: ";
					cin >> radius1;
					if (radius1 > 0)
					{
						circumference(radius1);
						second();
						goto g;
					}
					else
						goto h;
					break;

				case 2:
					cout << "\t\t\t\t***RECTANGLE***\n";
				j:
					cout << "Enter the height of rectangle: ";
					cin >> sideA;
					cout << "Enter the width of the rectangle: ";
					cin >> sideB;
					cout << endl;
					if (sideA > 0 && sideB > 0)
					{
						circumference(sideA, sideB);
						second();
						goto g;
					}
					else
						goto j;
					break;
				case 3:
					cout << "\t\t\t\t***TRIANGLE***" << endl;
				d1:
					cout << "Enter the first side of the triangle: ";
					cin >> sidetriangleA;
					cout << "Enter the second side of the triangle: ";
					cin >> sidetriangleB;
					cout << "Enter the third side of the triangle: ";
					cin >> sidetriangleC;
					cout << endl;
					if (sidetriangleA > 0 && sidetriangleB > 0 && sidetriangleC > 0 && sidetriangleC < sidetriangleA + sidetriangleB && sidetriangleA < sidetriangleB + sidetriangleC && sidetriangleB < sidetriangleC + sidetriangleA)
					{
						circumference(sidetriangleA, sidetriangleB, sidetriangleC);
						second();
						goto g;
					}
					else
						goto d1;
					break;

				case 4:
					cout << "\t\t\t\t***Square***" << endl;
				e1:
					cout << "Enter the side of square: ";
					cin >> sidesquare;
					if (sidesquare > 0)
					{
						circumference(sidesquare);
						second();
						goto g;
					}
					else
						goto e1;
					break;
				case 5:
					main();
					break;
				default:
					break;
				}
				break;
			}
			else
				goto g;
			break;
			///////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 3: // third333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
			third();
			cout << "\t\t\tPlease enter 3 numbers to compare.\n\t\t\tYou can write even an integer or decimal number. For example: 123, 12.123, 0,123 \n";
		x:
			cout << endl;
			cout << "Enter the first number: ";
			cin >> n1;
			cout << "Enter the second number: ";
			cin >> n2;
			cout << "Enter the third number: ";
			cin >> n3;
			findlargest(n1, n2, n3);
			char quit;
			cout << "Do you want to try again(y/n)? ";
			if (cin >> quit && quit == 'y') // when user will input 'y' the code will again ask you to input a 3 numbers
				goto x;						// when it will be 'n' the code will go to the main menu
			else
			{
				system("cls");
				main();
			}
			break;

			/////////////////////////////////////////////////////////////////////////////////////////////////////////////
		case 4: // four4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
			third();
			cout << "\t\t\tPlease enter 3 numbers to compare.\n\t\t\tYou can write even an integer or decimal number. For example: 123, 12.123, 0,123 \n";
		qw:
			cout << endl;
			cout << "Enter the first number: ";
			cin >> n1;
			cout << "Enter the second number: ";
			cin >> n2;
			cout << "Enter the third number: ";
			cin >> n3;
			findlargest(n1, n2, n3);
			char quit2;
			cout << "Do you want to try again(y/n)? "; // when user will input 'y' the code will again ask you to input a 3 numbers
			if (cin >> quit2 && quit2 == 'y')		   // when it will be 'n' the code will go to the main menu
				goto qw;
			else
			{
				system("cls");
				main();
			}
			break; // breaking the case 4 of the main menu
		default:
			break; // breaking the default
		}
	}
	else
		goto b;
	system("pause");
	return 0;
}

// bad practices with goto
// never use it next time
// Rustam_Z
