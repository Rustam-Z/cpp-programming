#include <iostream>
using namespace std;

int main()
{
	int a[15], value, i, pos;
	int size = 10;
	cout << "Enter array elements: ";
	for (i = 0; i < 10; i++) // input the array elements
	{
		cout << "a[ " << i << " ] = ";
		cin >> a[i];
	}
	// code for asking the value and the position to be inserted
	cout << "Enter element to be insert : ";
	cin >> value;
	cout << "At which position: ";
	cin >> pos;
	// changing the place of arrays
	for (i = 10; i > pos; i--)
	{
		a[i] = a[i - 1];
	}
	a[pos] = value;
	// outputing correct araays order
	for (i = 0; i < size + 1; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}