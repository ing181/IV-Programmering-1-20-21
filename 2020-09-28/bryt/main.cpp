#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    // Inte så bra kod
    while ( true ) {
        cout << "Hello world!" << endl;
        if ( i > 10 ) {
            break;  // Får while-satsen att stoppa
        }
        i++;
    }
    // Bättre kod
    i = 0;
    while ( i > 10 ) {
        cout << "Hello world!" << endl;
        i++;
    }
    // När är det bra att använda break?
    // När man inte vet när loopen ska avslutas
    // Till exempel vid inmatning av användaren
    return 0;
}
