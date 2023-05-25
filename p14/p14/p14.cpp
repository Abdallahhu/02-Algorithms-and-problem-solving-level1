#include <iostream>
using namespace std;
int main()
{
    int N1, N2;
    int swaper;

    cout << "Please enter number1:\n";
    cin >> N1; cout << "\n";
    cout << "Please enter number2:\n";
    cin >> N2; cout << "\n";

    cout << "==========================\n";
    cout << N1 << "\n";
    cout << N2 << "\n\n";
    cout << "==========================\n";

    swaper = N1;
    N1 = N2;
    N2 = swaper;

    cout << N1 << endl;
    cout << N2 << endl << endl;
    cout << "==========================\n\n";

    return 0;
}