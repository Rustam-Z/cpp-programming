//Practical Lab Assignment-7(Week 9)
//ID:U1910049 Name:Rustam Zokirov
//Program to calculate area of a circle using functions

#include <iostream>
#include <math.h>//C++ libriry which is including "pow" and PI=3.14
using namespace std;
float area(float radius) {//function for calculating the area
	float area;
	area = (atan(1) * 4) * (pow(radius, 2));//"atan" is the function which is finding the PI=3.14 
	return area;
}//end function "area"
int main1() {
	float radius;
	cout << "Please enter the radius of circle: ";
	cin >> radius;//inputing the radius
	
	if (radius > 0) 
		cout << area(radius) << endl;//calling the function "area" for calculating the Area of Circle
	
	else
		cout << "INVALID Radius!"<<endl;//if radius is a negative number or equal to zero the program will show "Invalid radius"
	system("pause");
	return 0;
}