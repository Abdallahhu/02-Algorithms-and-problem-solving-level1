#include <iostream>
using namespace std;
int main()
{
    float Base, hight;
    float Area;

    cout << "Please enter hight:\n";
    cin >> hight; cout << "\n";
    cout << "Please enter base:\n";
    cin >> Base; cout << "\n";

    Area = (hight * Base) / 2;

    cout << "Area = " << Area;

    return 0;
}