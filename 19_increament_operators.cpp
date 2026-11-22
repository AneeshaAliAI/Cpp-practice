#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Increment Operator (++) increases value by 1." << endl;
    cout << "--------------------------------" << endl;

    int a = 5;
    int b = 5;

    // Pre-Increment: Pehle barhao, phir use karo
    cout << "Pre-Increment ++a = " << ++a << endl;
    cout << "After ++a, a = " << a << endl;

    cout << "--------------------------------" << endl;

    // Post-Increment: Pehle use karo, phir barhao
    cout << "Post-Increment b++ = " << b++ << endl;
    cout << "After b++, b = " << b << endl;

    return 0;
}