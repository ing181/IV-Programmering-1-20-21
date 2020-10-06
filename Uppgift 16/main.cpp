#include <iostream>
#include <string>
/*
16. Skriv ett program som låter användaren gissa på ett tal mellan 0 och 999. Användaren ska upplysas om talet är för stort eller för litet. Låt användaren få max 10 försök på sig att gissa rätt.
Använd break för att avbryta loopen om användaren gissar rätt.
Läxa! Lämna in på "Klassuppgifter",
*/

using namespace std;
int main()
{
    // Det finns flera olika sätt. Här är ett.
    int hemligtTal = 650;
    int gissa;
    int raknare = 0; // En variabel för att hålla reda på antalet gissningar.
    cout << "Gissa på ett tal mellan 0 och 999 ";
    do {
        raknare++; // raknare ökar med 1
        cout << "Gissning nummer " << raknare << endl;
        cin >> gissa;
        if ( gissa < hemligtTal ) {
            cout << "Tyvarr, for litet" << endl;
        }
        else
            if ( gissa > hemligtTal ) {
                cout << "Tyvarr, for stort" << endl;
            }
            else {
                cout << "Grattis! Du gissade ratt" << endl;
                break;
            }
    }
    while ( ( gissa != hemligtTal ) && ( raknare < 10 ) ); // Så länge som gissa INTE är 650 och det är högst 10 försök.
    if ( raknare == 10 ) {
        cout << "Du har gjort 10 gissningar" << endl;
    }
	return 0;
}



