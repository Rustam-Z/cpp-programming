#include <iostream>
#include <string>
using namespace std;

int main();

void read_display()
{
	system("cls");
	cout << "\t\tREAD AND DISPLAY\n";
	cout << "Please input information about 2D array: " << endl;
	int row_input, col_input;
	cout << "Rows (max 5): ";
	cin >> row_input;
	cout << "Columns (max 5): ";
	cin >> col_input;
	int a[5][5];
	cout << "Now input elements of Matrix: ";
	if (row_input > 0 && row_input <= 5 && col_input > 0 && col_input <= 5)
	{
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				cin >> a[row][col];
			}
		}
		cout << "Result: \n";
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{

				cout << a[row][col] << "  ";
			}
			cout << endl;
		}
		cout << endl;
		cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
		string respond;
		cout << "Your choice: ";
		cin >> respond;
		if (respond == "1")
		{
			system("cls");
			read_display();
		}
		else
		{
			system("cls");
			main();
		}
	}
	else
	{
		system("cls");
		cout << "Please input valid numbers from 1 to 5 ! " << endl;
		read_display();
	}
}

void transpose()
{
	system("cls");
	cout << "\t\tTRANSPOSE OF MATRIX\n";
	int a[5][5], trans[5][5], r, c, i, j;
	cout << "Please input information about 2D array: " << endl;
	cout << "Rows (max 5): ";
	cin >> r;
	cout << "Columns (max 5): ";
	cin >> c;
	// Storing element of matrix entered by user in array
	if (r > 0 && r <= 5 && c > 0 && c <= 5)
	{
		cout << "Enter elements of matrix: " << endl;
		for (i = 0; i < r; ++i)
			for (j = 0; j < c; ++j)
			{
				cin >> a[i][j];
			}
		// Displaying the matrix
		cout << "Entered Matrix: " << endl;
		for (i = 0; i < r; ++i)
			for (j = 0; j < c; ++j)
			{
				cout << " " << a[i][j];
				if (j == c - 1)
					cout << endl
						 << endl;
			}
		// Finding transpose of matrix
		for (i = 0; i < r; ++i)
			for (j = 0; j < c; ++j)
			{
				trans[j][i] = a[i][j];
			}
		// Displaying the transpose
		cout << "Transpose of Matrix: " << endl;
		for (i = 0; i < c; ++i)
			for (j = 0; j < r; ++j)
			{
				cout << " " << trans[i][j];
				if (j == r - 1)
					cout << endl
						 << endl;
			}
		cout << endl;
		cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
		string respond;
		cout << "Your choice: ";

		cin >> respond;
		if (respond == "1")
		{
			system("cls");
			transpose();
		}
		else
		{
			system("cls");
			main();
		}
	}
	else
	{
		system("cls");
		cout << "Please input valid numbers from 1 to 5 ! " << endl;
		transpose();
	}
}

void sum_matrices()
{
	system("cls");
	cout << "\t\tSUM TWO MATRICES\n";
	cout << "\tNOTE: Rows 1 = Rows 2 && Columns 1 = Columns 2\n";
	cout << "Please input details for the First Matrix: \n";
	int row_input, col_input;
	cout << "Rows (max 5): ";
	cin >> row_input;
	cout << "Columns (max 5): ";
	cin >> col_input;
	int a[5][5];
	cout << "Now input elements of First Matrix: ";
	if (row_input > 0 && row_input <= 5 && col_input > 0 && col_input <= 5)
	{
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				cin >> a[row][col];
			}
		}
		cout << "First Matrix: \n";
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				cout << a[row][col] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		system("cls");
		cout << "Please input valid numbers from 1 to 5 ! " << endl;
		read_display();
	}
	// for the second matrix
	cout << endl;
	cout << "Please input details for the Second Matrix: \n";
	int row_input2, col_input2;
	cout << "Rows (max 5): ";
	cin >> row_input2;
	cout << "Columns (max 5): ";
	cin >> col_input2;
	int b[5][5];
	cout << "Now input elements of Second Matrix: ";
	if (row_input2 > 0 && row_input2 <= 5 && col_input2 > 0 && col_input2 <= 5)
	{
		for (int row = 0; row < row_input2; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{
				cin >> b[row][col];
			}
		}
		cout << "Second Matrix: \n";
		for (int row = 0; row < row_input2; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{

				cout << b[row][col] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		system("cls");
		cout << "Please input valid numbers from 1 to 5 ! " << endl;
		read_display();
	}
	// validation for adding matrices
	int sum[5][5];
	if (row_input == row_input2 && col_input == col_input2)
	{
		// Adding Two matrices
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				sum[row][col] = a[row][col] + b[row][col];
			}
		}
		// Displaying the resultant sum matrix.
		cout << endl
			 << "Sum of two matrix is: " << endl;
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				cout << sum[row][col] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << endl;
		cout << "This Matrices cannot be added.";
	}
	// asking play again
	cout << endl;
	cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
	string respond;
	cout << "Your choice: ";
	cin >> respond;
	if (respond == "1")
	{
		system("cls");
		sum_matrices();
	}
	else
	{
		system("cls");
		main();
	}
}

void product()
{
	system("cls");
	cout << "\t\tMULTIPLY TWO MATRICES\n";
	cout << "\tNOTE: Rows 1 = Column 2 \n";
	cout << "Please input details for the First Matrix: \n";
	int row_input, col_input;
	cout << "Rows (max 5): ";
	cin >> row_input;
	cout << "Columns (max 5): ";
	cin >> col_input;
	int a[5][5];
	cout << "Now input elements of First Matrix: ";
	if (row_input > 0 && row_input <= 5 && col_input > 0 && col_input <= 5)
	{
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				cin >> a[row][col];
			}
		}
		cout << "First Matrix: \n";
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input; col++)
			{
				cout << a[row][col] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		system("cls");
		cout << "Please input valid numbers from 1 to 5 ! " << endl;
		read_display();
	}
	// for the second matrix
	cout << endl;
	cout << "Please input details for the Second Matrix: \n";
	int row_input2, col_input2;
	cout << "Rows (max 5): ";
	cin >> row_input2;
	cout << "Columns (max 5): ";
	cin >> col_input2;
	int b[5][5];
	cout << "Now input elements of Second Matrix: ";
	if (row_input2 > 0 && row_input2 <= 5 && col_input2 > 0 && col_input2 <= 5)
	{
		for (int row = 0; row < row_input2; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{
				cin >> b[row][col];
			}
		}
		cout << "Second Matrix: \n";
		for (int row = 0; row < row_input2; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{

				cout << b[row][col] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		system("cls");
		cout << "Please input valid numbers from 1 to 5 ! " << endl;
		read_display();
	}
	// validation for multiplication matrices
	int multi[5][5];
	if (row_input == col_input2)
	{
		// initializing the matrix of multiplication
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{
				multi[row][col] = 0;
			}
		}
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{
				for (int i = 0; i < col_input; i++)
				{
					multi[row][col] += a[row][col] * b[row][col];
				}
			}
		}
		// displaying multiplication of two matrices
		cout << endl;
		cout << "Result of Multiplication: \n";
		for (int row = 0; row < row_input; row++)
		{
			for (int col = 0; col < col_input2; col++)
			{
				cout << multi[row][col] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << endl;
		cout << "This Matrices cannot be multiplied.";
	}
	// asking play again
	cout << endl;
	cout << "Do you want to try again? (Yes = 1, No = Any Key)\n";
	string respond;
	cout << "Your choice: ";
	cin >> respond;
	if (respond == "1")
	{
		system("cls");
		sum_matrices();
	}
	else
	{
		system("cls");
		main();
	}
}

void main_menu_view()
{
	system("color 3F");
	cout << "\t\t\t===============================\n";
	cout << "\t\t\t\tM A I N  M E N U\n";
	cout << "\t\t\t===============================\n";
	cout << "\t\t\t[1] Read and Display Matrix\n";
	cout << "\t\t\t[2] Transpose\n";
	cout << "\t\t\t[3] Sum of two Matrices\n";
	cout << "\t\t\t[4] Product of two Matrices\n\n";
}
int main22()
{
	main_menu_view();
	cout << "\t\t\tYOUR CHOICE: ";
	string user_choice;
	cin >> user_choice;
	// validating the user input
	if (user_choice == "1" || user_choice == "2" || user_choice == "3" || user_choice == "4")
	{
		if (user_choice == "1")
			read_display();
		else if (user_choice == "2")
			transpose();
		else if (user_choice == "3")
			sum_matrices();
		else if (user_choice == "4")
			product();
	}
	else
	{
		system("cls"); // function for the clearing the screen of console
		cout << "\t\tYou have inputted wrong number, please try again!\n";
		main();
	}

	return 0;
}