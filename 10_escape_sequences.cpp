#include <iostream>
using namespace std;

int main()
{
    cout << "Definition: Escape Sequence is a combination of backslash and a character, used to give special effect in output." << endl;
    cout << "--------------------------------" << endl;

    cout << "\\n : Moves to new line" << endl;
    cout << "\\t : Gives tab space" << endl;
    cout << "\\b : Removes one character / Backspace" << endl;
    cout << "\\r : Moves cursor to start of line" << endl;
    cout << "\\f : Moves to new page / Form Feed" << endl;
    cout << "\\\\ : Prints backslash" << endl;
    cout << "\\a : Produces beep / alarm sound" << endl;
    cout << "\\\" : Prints double quote" << endl;
    cout << "--------------------------------" << endl;

    cout << "Example:" << endl;
    cout << "Hello\nAneesha" << endl;
    cout << "Hello\tAneesha" << endl;
    cout << "Hello\bAneesha" << endl;
    cout << "Hello\rAneesha" <<
 endl;
    cout << "Hellow\"Hellow Anisha \""<<endl;

    return 0;
}