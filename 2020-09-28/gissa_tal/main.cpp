#include <iostream>

using namespace std;

int main()
{
    int hemligtTal = 790;
    int gissa;
    cout << "Gissa p� ett tal mellan 0 och 1000 ";
    cin >> gissa;
    while ( gissa != hemligtTal ) {
        if ( gissa < hemligtTal ) {
            cout << "Tyv�rr, f�r litet" << endl;
        }
        else {
            cout << "Tyv�rr, f�r stort " << endl;
        }
        cin >> gissa;
    }

        cout << "Du gissade r�tt!" << endl;

    return 0;
}
