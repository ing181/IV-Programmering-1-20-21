#include <iostream>
using namespace std;
/*
Det finns 100 r�ttor m�nad 0
R�ttorna f�r�karsig s� att det sker en
f�rdubbling varje m�nad.
Hur m�nga m�nader tar det innan det finns en miljon r�ttor?
*/
int main()
{
        int antalRattor = 100;
        int manader = 0;
        while ( antalRattor <= 1000000 ) {

        antalRattor = antalRattor * 2;
        manader++;

    }

    cout << "Nu finns det " << antalRattor << endl;
    cout << manader << " m�nader har f�rflutit sedan det fanns 100 r�ttor" << endl;




    return 0;
}
