//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to display sum of series 1+1/2+1/3+1/4+... .

#include <iostream>
using namespace std;
int main5() {
	int n;
	float sum = 0;
	cout << "Enter the value of n: ";
	cin >> n;
	for (int i = 1;i <= n;i++)
		sum += 1 / i;
	cout << "Sum is : " << sum << endl;
	system("pause");
	return 0;
}