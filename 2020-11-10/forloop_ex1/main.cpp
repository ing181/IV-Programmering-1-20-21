/*
16. Skriv ett program som låter användaren gissa på ett
tal mellan 0 och 999. Användaren ska upplysas om
talet är för stort eller för litet. Låt användaren
få max 10 försök på sig att gissa rätt.
Använd break för att avbryta loopen om användaren gissar rätt.
*/
#include <iostream>
using namespace std;
int main() {
    int gissa;
    const int talet = 445;


    for (int i=0; i<10; i++) {

        cout << "Gissa på ett tal mellan 0 och 999";
        cin >> gissa;
        if ( gissa == talet) {
            cout << "Grattis! du gissade rätt." << endl;
            break;
        }

        if ( gissa < talet) {
            cout << "Du gissade på ett för litet tal" << endl;
        } else {
            cout << "Du gissade på ett för stort tal" << endl;
        }

    }


    return 0;
}
