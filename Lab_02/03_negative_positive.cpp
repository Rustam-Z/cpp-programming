// C++ Program to Check Whether a Number is Positive or Negative.

#include <iostream>

using namespace std;

int main() {
    float number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    system("pause");
    return 0;
}