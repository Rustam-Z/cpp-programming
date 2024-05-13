#include <iostream>
using namespace std;

int main()
{
	int a[10];
	// code for the input the elements of the array
	cout << "Input an Array Elements. " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "array element [ " << i << " ] ";
		cin >> a[i];
	}
	cout << endl;
	// output tje arrays
	cout << "Displaying arrays: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "a[ " << i << " ] = " << a[i] << endl;
	}

	system("pause");
	return 0;
}