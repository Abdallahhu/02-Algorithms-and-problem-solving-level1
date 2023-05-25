#include <iostream>
using namespace std;
int main()
{
    float width, hight;
    float Area;

    cout << "Please enter hight:\n";
    cin >> hight; cout << "\n";
    cout << "Please enter width:\n";
    cin >> width; cout << "\n";

    Area = hight * width;

    cout << "Area = " << Area;

    return 0;
}