// C++ Program to Compute Quotient and Remainder.

#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;
    system("pause");
    return 0;
}