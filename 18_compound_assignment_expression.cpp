#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Compound Assignment Expression is a compound assignment that gives a value and can be used inside another expression." << endl;
    cout << "--------------------------------" << endl;

    int a = 10;
    int b;

    b = (a += 5); // a=15 ho gaya, aur 15 hi b ko mila
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Value is: " << (a *= 2) << endl; // cout ke andar hi use ho gaya

    int c = (a -= 3) + 10; // pehle a=27, phir 27+10=37
    cout << "a = " << a << endl;
    cout << "c = " << c << endl;

    return 0;
}