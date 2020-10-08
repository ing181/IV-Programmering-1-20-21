#include <iostream>

using namespace std;

int main()
{
     // if och else if
    // val, som grundar sig på om något är sant eller falskt
    bool b = false;
    if ( b ) {
        cout << "SANT" << endl;
    }
    else
        if ( false ) {
            cout << "Inte sant, så \"annars\" körs" << endl;
        }

    /*       */
    // Nestlad if sats

    b = false;
    if ( b ) {
        cout << "SANT" << endl;
    }
    else {
        if ( false ) {
            cout << "Inte sant, så \"annars\" körs" << endl;
        }
    }
    return 0;
}
