// Program to Add/Subtract/Multiply/Divide Two Integers.

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << num1 / num2 << endl;
    cout << "Remainder: " << num1 % num2 << endl;
    system("pause");
    return 0;
}