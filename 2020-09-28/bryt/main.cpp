#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    // Inte s� bra kod
    while ( true ) {
        cout << "Hello world!" << endl;
        if ( i > 10 ) {
            break;  // F�r while-satsen att stoppa
        }
        i++;
    }
    // B�ttre kod
    i = 0;
    while ( i > 10 ) {
        cout << "Hello world!" << endl;
        i++;
    }
    // N�r �r det bra att anv�nda break?
    // N�r man inte vet n�r loopen ska avslutas
    // Till exempel vid inmatning av anv�ndaren
    return 0;
}
