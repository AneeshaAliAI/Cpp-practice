#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Assignment Expression is an assignment that gives a value and can be used inside another expression." << endl;
    cout << "--------------------------------" << endl;

    int a, b, c;

    a = b = 10; // pehle b=10, phir a=10
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    c = (a = 5) + 2; // a=5 ek expression hai, iski value 5 hai
    cout << "a = " << a << endl;
    cout << "c = " << c << endl;

    cout << "Value is: " << (a = 20) << endl; // cout ke andar bhi use ho gaya

    return 0;
}