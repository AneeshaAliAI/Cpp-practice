#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Definition: setw is a manipulator used to set the width of output field." << endl;
    cout << "--------------------------------" << endl;

    cout << left << setw (10) <<"name"<<setw(5)<<"marks"<<endl;
    cout<<left<<setw(10)<<"Anisha"<<setw(5)<< 98 <<endl;
    cout<<left <<setw(10)<<"Mahnoor"<<setw(5)<< 96 <<endl;
cout <<left <<setw(10)<<"muskan"<<setw(5)<< 94 <<endl;
    return 0;
}