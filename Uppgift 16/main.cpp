#include <iostream>
#include <string>
/*
16. Skriv ett program som l�ter anv�ndaren gissa p� ett tal mellan 0 och 999. Anv�ndaren ska upplysas om talet �r f�r stort eller f�r litet. L�t anv�ndaren f� max 10 f�rs�k p� sig att gissa r�tt.
Anv�nd break f�r att avbryta loopen om anv�ndaren gissar r�tt.
L�xa! L�mna in p� "Klassuppgifter",
*/

using namespace std;
int main()
{
    // Det finns flera olika s�tt. H�r �r ett.
    int hemligtTal = 650;
    int gissa;
    int raknare = 0; // En variabel f�r att h�lla reda p� antalet gissningar.
    cout << "Gissa p� ett tal mellan 0 och 999 ";
    do {
        raknare++; // raknare �kar med 1
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
    while ( ( gissa != hemligtTal ) && ( raknare < 10 ) ); // S� l�nge som gissa INTE �r 650 och det �r h�gst 10 f�rs�k.
    if ( raknare == 10 ) {
        cout << "Du har gjort 10 gissningar" << endl;
    }
	return 0;
}



