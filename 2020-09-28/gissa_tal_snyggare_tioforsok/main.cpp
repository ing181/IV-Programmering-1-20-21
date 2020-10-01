#include <iostream>

using namespace std;

int main()
{
    int hemligtTal = 790;
    int gissa;
    int antal = 0;
    cout << "Gissa på ett tal mellan 0 och 1000 ";
    do { // Säkerställer att while-satsen körs minst en gång
        cin >> gissa; // Då behövs det bara inmatning på ett ställe i koden.
        antal++;
        cout << "Du har just gjort gissning nummer " << antal << endl;
        if ( gissa < hemligtTal ) {
            cout << "Tyvärr, för litet" << endl;
        }
        else
            if ( gissa > hemligtTal ) {
                cout << "Tyvärr, för stort " << endl;
            }
            else {
                cout << "Du gissade rätt!" << endl;
                break;
            }
    }
    while ( ( gissa != hemligtTal ) && ( antal <= 10 ) );
//    if ( hemligtTal == gissa) {
//    cout << "Du gissade rätt!" << endl;
//
//    }
    return 0;
}
