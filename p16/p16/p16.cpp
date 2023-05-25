#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, d, Area;
    cout << "Please enter a: "; 
    cin >> a;
    cout << "Please enter d: ";
    cin >> d; cout << endl;
    
    Area = a * sqrt(pow(d,2) - pow(a,2));

    cout << Area;

    return 0;
}