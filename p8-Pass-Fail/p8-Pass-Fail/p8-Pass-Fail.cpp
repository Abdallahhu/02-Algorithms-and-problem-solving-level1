#include <iostream>
using namespace std;

int main()
{
    float Mark;
    cout << "Please Enter the Mark\n";
    cin >> Mark; cout << endl;

    if (Mark >= 50)
    {
        cout << "PASS";
    }
    else { cout << "FAIL"; }

}