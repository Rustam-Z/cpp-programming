#include <iostream>
using namespace std;
int main1()
{
	cout << "\t\t\tPascal's triangl\n";
	int row = 0, col = 0;
	int a[7][7] = { };
	a[0][0] = 1;//ginving the value for the array with addres a[0][0]
	for (row = 0; row < 7; row++)//rows
	{
		for (col = 0; col <= row; col++)//columns
		{
			//code for the borders of the triangle
			//giving to then the value 1
			if (col == 0 || row == col)
			{
				a[row][col] = 1;
				cout << " " << a[row][col];
			}
			//code for the finding the values for the inside numbers of the triangle 
			else 
			{
				a[row][col] = a[row - 1][col - 1] + a[row - 1][col];
				cout << " " << a[row][col];
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}