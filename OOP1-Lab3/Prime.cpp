//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to find whether the given number is a prime number or not.

#include <iostream>
using namespace std;
int main4() {
	int num, j = 0;
	cout << "Enter the number: ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if ((num % i) == 0)
		{
			j++;
		}
	}
	if (j == 2)
		cout << num << " is a prime number." << endl;
	else
		cout << num << " is not a prime number." << endl;
	system("pause");
	return 0;
}