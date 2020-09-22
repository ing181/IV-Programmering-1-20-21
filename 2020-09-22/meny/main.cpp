#include <iostream>
using namespace std;
/*
Program som låter användaren välja mellan att
addera eller subtrahera två tal.
*/
int main()
{
    char val;
    do {  // Körs alltid
        cout << "Addera, välj (+)" << endl;
        cout << "Subtrahera, välj (-)" << endl;
        cout << "Avsluta, välj (a)" << endl;
        cin >> val;
        if ( val == '+' ) {  // Om +, görs ingen mer koll
                float a, b;
                cout << "Tal nr. 1" << endl;
                cin >> a;
                cout << "Tal nr. 2" << endl;
                cin >> b;
                cout << a << '+' << b << '=' << (a+b) << endl;
        }
        else // Om inte +, fortsätter kollen
            if ( val == '-' ) {  // Om - görs ingen mer koll
                float a, b;
                cout << "Tal nr. 1" << endl;
                cin >> a;
                cout << "Tal nr. 2" << endl;
                cin >> b;
                cout << a << '-' << b << '=' << (a-b) << endl;
            }
            else { // I alla andra fall, varken + eller -
                if ( val != 'a' ) { // Om a görs ingen utskrift. Användaren har valt att avsluta
                    cout << "Felaktigt val, välj +, - eller a" << endl;
                }
            }
    }
    while ( val != 'a' );
    return 0;
}
