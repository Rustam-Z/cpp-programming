#include <iostream>
using namespace std;

int main()
{
	cout << "\t\t\tPalcal's Triangle\n";
	int a[7][7] = {};
	int row = 0, col = 0;
	for (int row = 0; row < 7; row++)
	{
		for (int col = 0; col < row; col++)
		{
			a[0][0] = 1;
			a[row + 1][1] = 1;

			cout << a[row][col];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}