#include <iostream>

using namespace std;

int main()
{
    system ( "chcp 1252" );
    /* F�r att f� �ka en attraktion p� Liseberg
    m�ste man vara 110 cm l�ng eller �lder m�ste vara
    mer �n 6 �r gammal */
    int alder;
    int langd;
    cout << "Hur gammal �r du?" << endl;
    cin >> alder;
    cout << "Hur l�ng �r du?" << endl;
    cin >> langd;
    // Med logisk operator
    if ( ( alder > 6 ) && ( langd >= 110 ) ) {
        cout << "Du f�r �ka! G� till kassan och betala!" << endl;
    }
    else {
        cout << "Tyv�rr, du f�r inte �ka!" << endl;
        if ( alder <= 6 ) {
            cout << "Du f�r v�nta " << ( 6 - alder ) << " �r!" << endl;
        }
        if ( langd < 110 ) {
            cout << "Du m�ste v�xa " << ( 110 - langd ) << " cm!" << endl;
        }
    }
        return 0;
    }
