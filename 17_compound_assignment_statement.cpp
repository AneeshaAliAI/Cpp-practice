#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Compound Assignment is short form to do operation and assign result in same variable." << endl;
    cout << "--------------------------------" << endl;

    int a = 10;

    a += 5;  // a = a + 5
    cout << "a += 5 : " << a << endl;

    a -= 3;  // a = a - 3
    cout << "a -= 3 : " << a << endl;

    a *= 2;  // a = a * 2
    cout << "a *= 2 : " << a << endl;

    a /= 4;  // a = a / 4
    cout << "a /= 4 : " << a << endl;

    a %= 3;  // a = a % 3
    cout << "a %= 3 : " << a << endl;

    return 0;
}