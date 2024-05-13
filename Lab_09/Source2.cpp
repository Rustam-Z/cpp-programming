#include <iostream>
#include <string>
using namespace std;

void main_menu_view1()
{
	cout << "\t\t\t\tSALESMAN & PRODUCTS\n";
	cout << "===================================================================================\n";
	cout << "=           || Salesman 1 || Salesman 2 || Salesman 3 || Salesman 4 || Salesman 5 =\n";
	cout << "===================================================================================\n";
	cout << "= Product 1 ||            ||            ||            ||            ||            =\n";
	cout << "= Product 2 ||            ||            ||            ||            ||            =\n";
	cout << "= Product 3 ||            ||            ||            ||            ||            =\n";
	cout << "===================================================================================\n";
}

void salesman_sum(int a[3][5])
{
	int row, col, sum = 0;
	// finding the column sum
	for (row = 0; row < 5; ++row)
	{
		for (col = 0; col < 3; ++col)
		{

			// Add the element
			sum = sum + a[col][row];
		}
		// Print the column sum
		cout << "The Total sales of Salesman  " << row + 1 << " is " << sum << endl;
		// Reset the sum
		sum = 0;
	}
}

void sales_sum(int a[3][5])
{
	int sum = 0;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			sum += a[row][col]; // adding all arrays
		}
		cout << "The Total sales of Product " << row + 1 << " is " << sum << endl;
		sum = 0; // reset the sum
	}
}

int main()
{
	main_menu_view1();
	int a[3][5];
	// inputting numbers for the 2D array
	cout << "Please input 5 Sales for Salesman 1, Salesman 2 and Salesman 3: \n ";
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cin >> a[row][col];
		}
	}
	cout << "Main table of Salesman and Sales: \n";
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			cout << a[row][col] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	salesman_sum(a);
	cout << endl;
	sales_sum(a);
	system("pause");
	return 0;
}