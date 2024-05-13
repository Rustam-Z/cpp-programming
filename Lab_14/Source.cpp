#include <iostream>
#include <string>
using namespace std;

// class 'Rectangle'
class Rectangle
{
private:
	double length, breadth;

public:
	double getArea()
	{
		return length * breadth;
	}
	void setLength(double length)
	{
		this->length = length;
	}
	void setBreadth(double breadth)
	{
		this->breadth = breadth;
	}
	Rectangle operator+(Rectangle &r2)
	{
		Rectangle temp;
		temp.setLength(length + r2.length);
		temp.setBreadth(breadth + r2.breadth);
		return temp;
	}
};
// void function for the inputing data for class 'Rectangle' & uisng the overloading
void RectangleFirst()
{
	Rectangle r3, r1, r2;
	int temp;
	cout << "Rectangle 1" << endl;
	cout << "Length: ";
	cin >> temp;
	r1.setLength(temp);
	cout << "Breadth: ";
	cin >> temp;
	r1.setBreadth(temp);
	cout << "Area: " << r1.getArea() << endl
		 << endl;

	cout << "Rectangle 2" << endl;
	cout << "Length: ";
	cin >> temp;
	r2.setLength(temp);
	cout << "Breadth: ";
	cin >> temp;
	r2.setBreadth(temp);
	cout << "Area: " << r2.getArea() << endl
		 << endl;

	r3 = r1 + r2; // overloading by the binary operator
	cout << "Rectangle 3 Area: " << r3.getArea() << endl;
}

class Distance
{
private:
	float Km, M;

public:
	void setKm(int Km)
	{
		this->Km = Km;
	}
	void setM(int M)
	{
		this->M = M;
	}
	Distance operator==(Distance &d)
	{
		if ((Km == d.Km) && (M == d.M))
		{
			cout << "They are EQUAL.\n";
			return *this;
		}
		else
		{
			cout << "NOT EQUAL.\n";
			return *this;
		}
	}
};
void DistanceSecond()
{
	Distance d1, d2;
	float k1, m1, k2, m2;
	cout << "First distance: \n";
	cout << "Kilometers: ";
	cin >> k1;
	cout << "Meters: ";
	cin >> m1;
	if (m1 > 1000)
	{
		k1 = m1 / 1000;
	}
	cout << endl
		 << endl;

	cout << "Second distance: \n";
	cout << "Kilometers: ";
	cin >> k2;
	cout << "Meters: ";
	cin >> m2;
	if (m2 > 1000)
	{
		k2 = m2 / 1000;
	}
	d1 == d2;
}
int main()
{
	int choice;

	do
	{

		cout << "1. Rectangle" << endl
			 << "2. Distance" << endl
			 << "3. Exit" << endl
			 << "Your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			RectangleFirst();
			system("pause");
		case 2:
			system("cls");
			DistanceSecond();
			system("pause");
		default:
			break;
		}
	} while (choice != 3);

	return 0;
}