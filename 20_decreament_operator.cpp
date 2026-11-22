#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Decrement Operator (--) decreases value by 1." << endl;
    cout << "--------------------------------" << endl;

    int a = 5;
    int b = 5;

    // Pre-Decrement: Pehle ghatao, phir use karo
    cout << "Pre-Decrement --a = " << --a << endl;
    cout << "After --a, a = " << a << endl;

    cout << "--------------------------------" << endl;

    // Post-Decrement: Pehle use karo, phir ghatao
    cout << "Post-Decrement b-- = " << b-- << endl;
    cout << "After b--, b = " << b << endl;

    return 0;
}