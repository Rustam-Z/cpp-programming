//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to calculate sum of numbers from m to n.

#include <iostream>
using namespace std;
int main1() {
	int m, n, sum = 0;
	cout << "Enter the 1st number: ";
	cin >> n;
	cout << "Enter the 2nd number: ";
	cin >> m;
	if (n < m) {
		for (int x = n; x <= m; x++) {
			sum += x;
		}
		cout << "The sum of the integers between the two numbers is " << sum << ";" << endl;
	}
	else if (m < n)
		cout << "Invalid numbers! Please try again." << endl;
	else if (m == n) {
		sum = n;
		cout << "The sum is " << sum << endl;
	}
	system("pause");
	return 0;
}