//U1910049 Rustam Zokirov
//Section 004
//Assignment-2(Operators)
//C++ program to Calculate Area and Circumference of Circle

#include <iostream>
using namespace std;
int main(){
	cout << "\t\tC++ program to Calculate Area and Circumference of Circle.\n";
	float R, Area, Circumference;
	cout << "Please enter the Radius of Circle: " ;
	cin >> R;
	if (R > 0) {
		Area = 3.14 * R * R;
		Circumference = 2 * 3.14 * R;
		cout << "Area of Circle is " << Area << ";" << endl;
		cout << "Circumference of Circle is " << Circumference << ";" << endl;
	 }
	else {
		cout << "Negetive numbers cannot be applied !!!"<<endl;
	 }
	system("pause");
	return 0;
}