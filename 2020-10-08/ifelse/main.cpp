#include <iostream>

using namespace std;

int main()
{
     // if och else if
    // val, som grundar sig p� om n�got �r sant eller falskt
    bool b = false;
    if ( b ) {
        cout << "SANT" << endl;
    }
    else
        if ( false ) {
            cout << "Inte sant, s� \"annars\" k�rs" << endl;
        }

    /*       */
    // Nestlad if sats

    b = false;
    if ( b ) {
        cout << "SANT" << endl;
    }
    else {
        if ( false ) {
            cout << "Inte sant, s� \"annars\" k�rs" << endl;
        }
    }
    return 0;
}
