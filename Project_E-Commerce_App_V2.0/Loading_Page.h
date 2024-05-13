#pragma once
#include <iostream>
#include <ctime>     // Time
#include <windows.h> // Loading

void gotoXY(int x, int y) {
	//'COORD' is a built in function for positioning the objects
	COORD d;
	d.X = x;
	d.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), d);
}

void F_Loading() {
	cout << "\n\n\n\n\n\n";
	cout << "\t\t\t       -------------------------------------  \n";
	cout << "\t\t\t         E I G H T S O F T  A C A D E M Y      \n";
	cout << "\t\t\t       -------------------------------------  \n";
	cout << "\t\t\t                   A L I B A Z A R             \n";
	cout << "\t\t\t       _____________________________________  \n";

	char a = 219;
	gotoXY(45, 14);

	cout << "LOADING... " << endl;

	gotoXY(37, 16);
	for (int r = 1; r <= 26; r++)
	{
		//for speed
		for (int speed = 0; speed <= 12000000; speed++);
		cout << a;
	}
	cout << endl;
}
