#include <iostream>
#include <string>
#include "test.h"

using namespace std;
int main()
{
    Test myTest;
    string mittnamn;
    myTest.setNamn("Ingemar");
    mittnamn = myTest.getNamn();
    cout << mittnamn.size() << endl;
    cout << "Från klassen Test: " << mittnamn << endl;

    return 0;
}
