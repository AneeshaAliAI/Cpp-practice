#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Assignment Statement is used to assign a value to a variable using = operator." << endl;
    cout << "--------------------------------" << endl;

    int a;
    int b;

    a = 10; // 10 is assigned to a
    b = a + 5; // a+5 is assigned to b

    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;

    a = 20; // old value change ho gayi
    cout << "New value of a = " << a << endl;

    return 0;
}