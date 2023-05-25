#include <iostream>
using namespace std;
int main()
{
    float a, b, c, p;
    float Area1;
    float Area;
    const float PI = 3.14;

    cout << "Please enter a:\n";
    cin >> a; cout << "\n";
    cout << "Please enter b:\n";
    cin >> b; cout << "\n";
    cout << "Please enter c:\n";
    cin >> c; cout << "\n";

    p = (a + b + c) / 2;
    Area =round(PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))),2));
    
    cout << "Area = " << Area << endl;

    return 0;
}