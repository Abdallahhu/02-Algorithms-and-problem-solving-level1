#include <iostream>
using namespace std;
int main()
{
    float a, b;
    float Area;
    const float PI = 3.14;

    cout << "Please enter a:\n";
    cin >> a; cout << "\n";
    cout << "Please enter b:\n";
    cin >> b; cout << "\n";

    Area = floor((PI * pow(b,2) / 4) * ((2 * a - b) / (2 * a + b)));

    cout << "Area = " << Area;

    return 0;
}