// Lab assignment #5
// ID:U1910049; Name:Zokirov Rustam
// Control structure - Nested Loop

#include <iostream>
using namespace std;
int main3()
{
	for (int i = 1; i <= 5; i += 2)
	{
		for (int j = 3; j >= i; j -= 2)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}