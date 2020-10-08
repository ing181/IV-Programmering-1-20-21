#include <iostream>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen

using namespace std;

int main()
{
    // Funktionen time ska ha adressen till ett ställe på RAM-minnet
    // som invärde. NULL är adressen till ingenting.
    int sek = time(NULL);
    int slump, kast;
    // srand(time(NULL)); Samma som rad 11 och rad 15
    cout << "Antalet sekunder sedan 1 januari 1970 " << sek << endl;
    srand ( sek ); //initierar ett startvärde för slumpen.
    // Högsta möjliga slumptal
    cout << RAND_MAX << endl;
    int i = 0;
    while (i < 5) {
    slump = rand();
    kast = 1 + rand() % 6;
    cout << "Tärningskast nr " << i << " " << kast << endl;
    cout << "Slumpvarde nr " << i << " " << slump << endl;
     i++;
    }







    return 0;
}
