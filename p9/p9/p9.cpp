#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3;
    float Result;

    cout << "Please enter number1:\n";
    cin >> num1; cout << "\n";
    cout << "Please enter number2:\n";
    cin >> num2; cout << "\n";
    cout << "Please enter number3:\n";
    cin >> num3; cout << "\n";

    Result = num1 + num2 + num3;

    cout << "Result of summation is: " << "\a" << Result;

    return 0;
}