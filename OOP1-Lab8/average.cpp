#include <iostream>
using namespace std;
int main2() {
	int a[10];
	//inputing the arrays
	cout << "Input an Array Elements. " << endl;
	for (int i = 0; i < 10;  i++) {
		cout << "array element [ " << i << " ] ";
		cin >> a[i];
    }
	cout << endl;
	double sum=0;
	//sum the elements of the array
	for (int i=0;i<10;i++) {
		sum += a[i];
	}
	double average;
	//finding the elements of the array
	average = sum / 10;
	cout << "Average of array elements: " << average << endl;
	system("pause");
	return 0;
}