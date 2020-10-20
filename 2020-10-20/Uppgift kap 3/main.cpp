#include <iostream>
using namespace std;
/*
Uppgift från kap. 3
Du behöver hitta ASCII-tabellen. Finns på nätet.
Gör ett program som översätter mellan liten och STOR bokstav.
EX:
"Mata in en liten bokstav: " a
"Då blir utmatningen A"
*/
int main()
{
    system("chcp 1252");
    char bokstav; // En char variabel är en
                  // heltalsvariabel. Går att
                  // räkna med den på samma sätt som
                  // med int
    cout << "Mata in en liten bokstav ";
    cin >> bokstav;
    // Omvandling från liten till STOR bokstav
    // liten bokstav har alltid ett heltal
    // som är +32 heltalet för motsvarande
    // STOR bokstav
    bokstav = bokstav - 32;
    cout << "Motsvarande STORA bokstav är " << bokstav << endl;
    return 0;
}
