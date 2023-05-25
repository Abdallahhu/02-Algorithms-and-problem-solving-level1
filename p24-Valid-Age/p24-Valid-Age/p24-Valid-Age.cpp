#include <iostream>
using namespace std;
int main()
{
    short int Age;
    cout << "Please Enter your Age:\n";
    cin >> Age;

    if (Age >= 18 && Age <= 45)
    {
        cout << "Valid Age\n";
    }
    else { cout << "Invalid Age"; }
    
    return 0;
}
