#include <iostream>
using namespace std;
int main()
{
    float mark1, mark2, mark3;
    float Result;

    cout << "Please enter mark1:\n";
    cin >> mark1; cout << "\n";
    cout << "Please enter mark2:\n";
    cin >> mark2; cout << "\n";
    cout << "Please enter mark3:\n";
    cin >> mark3; cout << "\n";

    Result = (mark1 + mark2 + mark3) / 3;

    cout << "Result of summation is: " << Result;

    return 0;
}