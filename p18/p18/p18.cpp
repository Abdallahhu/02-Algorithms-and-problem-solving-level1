#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r, Area, Area1;
    const float PI = 3.14;
    cout << "Please Enter R: ";
    cin >> r; cout << endl;
    
    Area = PI * pow(r, 2);
    Area1 = ceil(PI * pow(r, 2));


    cout << Area << endl;
    cout << Area1 << endl;

    return 0;
}