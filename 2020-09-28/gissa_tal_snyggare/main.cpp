#include <iostream>

using namespace std;

int main()
{
    int hemligtTal = 790;
    int gissa;
    cout << "Gissa p� ett tal mellan 0 och 1000 ";
    do { // S�kerst�ller att while-satsen k�rs minst en g�ng
        cin >> gissa; // D� beh�vs det bara inmatning p� ett st�lle i koden.
        if ( gissa < hemligtTal ) {
            cout << "Tyv�rr, f�r litet" << endl;
        }
        else
            if ( gissa > hemligtTal ) {
                cout << "Tyv�rr, f�r stort " << endl;
            }
    }
    while ( gissa != hemligtTal );
    cout << "Du gissade r�tt!" << endl;
    return 0;
}
