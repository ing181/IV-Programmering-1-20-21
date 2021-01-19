#include <iostream>
#include <string>
using namespace std;
void test();
string test2();

int main()
{
    test(); // "HEJ" skrivs ut på skärmen, skrivs ut från funktionen "test", rad 20
    test();
    string  s = test2(); // Det som kommer från funktionen, tilldelas variabeln "s"
    cout << s << endl; // "HEJ2" skrivs ut
    cout << test2() << endl;
    return 0;
}

void test() // Här skickas inget tillbaka till main
{
    cout << "HEJ" << endl;
}

string test2()
{
    return "HEJ2"; // "HEJ2" skickas till huvudprogrammet
    // och tas emot av variabeln "s" på rad 12
}
