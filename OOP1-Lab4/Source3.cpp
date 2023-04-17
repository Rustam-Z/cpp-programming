// Lab assignment #5
// ID:U1910049; Name:Zokirov Rustam
// Control structure - Nested Loop

#include <iostream>
using namespace std;
int main4()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}