#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float D;
    float Area, Area1;
    const float PI = 3.14;

    cout << "Please enter D:\n";
    cin >> D; cout << "\n";

    Area = (PI * (D * D)) / 4;
    Area1 = ceil(PI * pow(D,2) / 4);

    cout << "Area = " << Area << endl;
    cout << "Ceil Area = " << Area1 << endl;

    return 0;
}