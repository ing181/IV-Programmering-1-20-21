#include <iostream>

using namespace std;

int main()
{
    int hemligtTal = 790;
    int gissa;
    cout << "Gissa på ett tal mellan 0 och 1000 ";
    do { // Säkerställer att while-satsen körs minst en gång
        cin >> gissa; // Då behövs det bara inmatning på ett ställe i koden.
        if ( gissa < hemligtTal ) {
            cout << "Tyvärr, för litet" << endl;
        }
        else
            if ( gissa > hemligtTal ) {
                cout << "Tyvärr, för stort " << endl;
            }
    }
    while ( gissa != hemligtTal );
    cout << "Du gissade rätt!" << endl;
    return 0;
}
