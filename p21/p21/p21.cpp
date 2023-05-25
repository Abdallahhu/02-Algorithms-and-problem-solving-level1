#include <iostream>
using namespace std;
int main()
{
    float l;
    float Area;
    const float PI = 3.14;

    cout << "Please enter l:\n";
    cin >> l; cout << "\n";

    Area = floor(pow(l , 2) / (4 * PI));

    cout << "Area = " << Area;

    return 0;
}