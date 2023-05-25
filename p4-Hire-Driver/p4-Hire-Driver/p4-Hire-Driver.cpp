#include <iostream>
using namespace std;

int main()
{
    short int Age;
    bool HasDriLic = true;
    string YesNo;

    cout << "Please Enter your Age: \n";
    cin >> Age;

    cout << "Has you Driver License? (Ansuer yes or no)\n";
    cin >> YesNo;

    if (YesNo == "yes")
    {
        HasDriLic = true;
    }
    else { HasDriLic = false; };

    if (Age > 21 && (HasDriLic == true))
    {
        cout << "Hired";
    }
    else { cout << "Rejecter"; }

    return 0;
}
