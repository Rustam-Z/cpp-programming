//Lab assignment #5				
//ID:U1910049; Name:Zokirov Rustam
//A program to add first seven terms of the following series using for loop:1 / !1 + 2 / !2 + 3 / !3 + ………………….

#include <iostream>
using namespace std;
int main5() {
	float sum = 0,fact=1;
	for (int i = 1;i <= 7;i++) {
		fact = fact * i;
		sum += i / fact;
	}
cout << "Sum is : " << sum << endl;
	system("pause");
	return 0;
}