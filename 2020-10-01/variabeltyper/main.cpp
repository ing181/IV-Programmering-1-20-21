#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Tv� v�rden, sant eller falskt
    bool b;
    b = ( ( 1 == 2 ) && ( 2 == 1 ) );
    if ( b ) {
        // cout << "b �r sant" << endl;
        // cout << b << endl;
    }
    // ! icke
    // + - * / %
    int l = 7;
    int m = 3;
    int heltal = l / m;
    int rest = l % m;
    cout << heltal << endl; // 2
    cout << rest << endl; // 1

    int minuter = 124;
    int timmar = minuter / 60;
    int restMinuter = minuter % 60;
    cout << minuter << " minuter=" << timmar << " timmar och " << restMinuter << " minuter" << endl;

    /*
    else
        if ( !b ) {
            cout << "b �r falskt" << endl;
            cout << b << endl;
        }
        */
    // "read only", g�r inte att �ndra
    // vanligen skrivs en konstant
    // med VERSALER.
    // konstant = variabel som inte
    // g�r att �ndra.
    const float PI = 3.141592654;

    return 0;
}
