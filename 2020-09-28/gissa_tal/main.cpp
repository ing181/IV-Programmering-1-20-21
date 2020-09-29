#include <iostream>

using namespace std;

int main()
{
	// Bra att gissa på ett tal i mitten av intervallet
	// Då snabbar du upp betydligt. Urvalet halveras vid
	// varje gissning.
    int hemligtTal = 790;
    int gissa;
    cout << "Gissa på ett tal mellan 0 och 1000 ";
    cin >> gissa;
    while ( gissa != hemligtTal ) {
        if ( gissa < hemligtTal ) {
            cout << "Tyvärr, för litet" << endl;
        }
        else {
            cout << "Tyvärr, för stort " << endl;
        }
        cin >> gissa;
    }

        cout << "Du gissade rätt!" << endl;

    return 0;
}
