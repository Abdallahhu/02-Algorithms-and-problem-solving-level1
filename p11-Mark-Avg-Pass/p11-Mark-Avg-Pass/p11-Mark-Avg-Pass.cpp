#include <iostream>
using namespace std;

int main()
{
    float Mark1, Mark2, Mark3;
    float Avg;
    
    cout << "Please Enter the Mark1:\n";
    cin >> Mark1; cout << endl;
    
    cout << "Please Enter the Mark:\n";
    cin >> Mark2; cout << endl;
    
    cout << "Please Enter the Mark:\n";
    cin >> Mark3; cout << endl;

    Avg = (Mark1 + Mark2 + Mark3) / 3;

    if (Avg >= 50)
    {
        cout << "PASS";
    }
    else { cout << "FAIL"; }

}