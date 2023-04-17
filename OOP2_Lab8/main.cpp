#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <Windows.h>
using namespace std;

double b;
double h; // global variables for base and height

// Functions for Main Menus
void F_First();
void F_Second();

// Base Class
class Shape
{ // Abstract class
protected:
	double base;
	double height;

public:
	void get_data(double base, double height)
	{
		this->base = base;
		this->height = height;
	}
	void virtual display_area() = 0; // pure virtual function
};

// Triangle class to calculate the area of triangle
class Triangle : public Shape
{
public:
	void display_area()
	{
		cout << "Area of triangle: " << 0.5 * base * height << endl;
	}
};

// Rectangle class to calculate the area of rectangle
class Rectanglee : public Shape
{
public:
	void display_area()
	{
		cout << "Area of Rectangle: " << base * height << endl;
	}
};

class Circle : public Shape
{
public:
	void display_area()
	{
		cout << "Area of Circle: " << base * base * 3.1415 << endl;
	}
};

int main()
{
	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << "       M A I N  M E N U\n"
			 << "-------------------------------\n"
			 << "1. First program\n"
			 << "2. Second program\n"
			 << "0. Exit\n"
			 << "-------------------------------\n"
			 << "Your choice: \n";
		switch (_getch())
		{
			// First program
		case 49:
			F_First();
			break;
			// second program
		case 50:
			F_Second();
			break;
		default:
			cout << "     Your choice is not available in Menu.\n     Please, enter one more time.\n";
			Sleep(0700);
			Sleep(0700);
			break;
		case 48:
			return 0;
			break;
		} // Switch
	}	  // For loop
	system("pause");
}

void F_First()
{
	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << "      C A L C U L A T I N G  A R E A S\n"
			 << "-------------------------------------------\n"
			 << "1. Triangle\n"
			 << "2. Rectangle\n"
			 << "0. Back\n"
			 << "Your choice: \n";
		switch (_getch())
		{
			// Case to Exit from the program
		case 48:
		{
			system("cls");
			main();
		}
		break;

			// First program
		case 49:
		{
			system("cls");
			cout << "       T R I A N G L E \n";
			cout << "----------------------------------\n";
			Shape *shape; //
			Triangle triangle;
			shape = &triangle; // overriding functions for triangle
			cout << "Enter the base: ";
			cin >> b;
			cout << "Entet the height: ";
			cin >> h;
			shape->get_data(b, h);
			shape->display_area();
			cout << "-----------------------------------\n\n";
			system("pause");
		}
		break;

			// second program
		case 50:
		{
			system("cls");
			cout << "      R E C T A N G L E \n";
			cout << "----------------------------------\n";
			Shape *shape; //
			Rectanglee rectangle;
			shape = &rectangle;
			cout << "Enter the base: ";
			cin >> b;
			cout << "Entet the height: ";
			cin >> h;
			shape->get_data(b, h);
			shape->display_area();
			cout << "------------------------------------\n\n";
			system("pause");
		}
		break;

		default:
		{
			cout << "Your choice is not available in Menu.\nPlease, enter one more time.\n";
			Sleep(0700);
			Sleep(0700);
		}
		break;
		} // Switch
	}	  // For loop
	system("pause");
}

void F_Second()
{
	for (int k = 0; k < 1000; k++)
	{
		system("cls");
		cout << "      S E C O N D  P R O G R A M\n"
			 << "-------------------------------------\n"
			 << "1. Triangle\n"
			 << "2. Rectangle\n"
			 << "3. Circle\n"
			 << "0. Back\n"
			 << "Your choice: \n";
		switch (_getch())
		{
			// Case to Exit from the program
		case 48:
		{
			system("cls");
			main();
		}
		break;

			// First program
		case 49:
		{
			system("cls");
			cout << "       T R I A N G L E \n";
			cout << "----------------------------------\n";
			Shape *shape; //
			Triangle triangle;
			shape = &triangle; // overriding functions for triangle
			cout << "Enter the base: ";
			cin >> b;
			cout << "Entet the height: ";
			cin >> h;
			shape->get_data(b, h);
			shape->display_area();
			cout << "-----------------------------------\n\n";
			system("pause");
		}
		break;

			// second program
		case 50:
		{
			system("cls");
			cout << "      R E C T A N G L E \n";
			cout << "----------------------------------\n";
			Shape *shape; //
			Rectanglee rectangle;
			shape = &rectangle;
			cout << "Enter the base: ";
			cin >> b;
			cout << "Entet the height: ";
			cin >> h;
			shape->get_data(b, h);
			shape->display_area();
			cout << "------------------------------------\n\n";
			system("pause");
		}
		break;
			// Third program
		case 51:
		{
			system("cls");
			cout << "         C I R C L E \n";
			cout << "----------------------------------\n";
			Shape *shape; //
			Circle circle1;
			shape = &circle1;
			cout << "Enter the radius: ";
			cin >> b;
			shape->get_data(b, 0.0);
			shape->display_area();
			cout << "------------------------------------\n\n";
			system("pause");
		}
		break;

		default:
		{
			cout << "Your choice is not available in Menu.\nPlease, enter one more time.\n";
			Sleep(0700);
			Sleep(0700);
		}
		break;
		} // Switch
	}	  // For loop
	system("pause");
}