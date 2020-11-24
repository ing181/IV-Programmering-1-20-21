#include <iostream>
#include <iomanip>
using namespace std;
/* Uppgift 19. Skriv ett program som skriver ut gångertabellen. Lättast är om du använder nästlade for-loopar.
Fungerar som nästlade if-satser. */
int main() {

    for (int i=1; i<11; i++) {


        for (int j=1; j<11; j++) {
            // setw() är en inbygd funktion i biblioteket iomanip. Som vi har med i programmet. Gör så att
            // alla utskrifter med cout får widden x om x är ett positivt heltal. setw(x)
            // setw(2) (eller 3) passar bra för gångertabellen. Pröva med olika värden
            cout << setw(2) << i*j << " ";

        }

        cout << endl;

    }




    return 0;
}
