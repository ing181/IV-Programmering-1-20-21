#include <iostream>
#include <time.h> // F�r tiden
#include <cstdlib> // F�r slumpen

using namespace std;

int main()
{
    // Funktionen time ska ha adressen till ett st�lle p� RAM-minnet
    // som inv�rde. NULL �r adressen till ingenting.
    int sek = time(NULL);
    int slump, kast;
    // srand(time(NULL)); Samma som rad 11 och rad 15
    cout << "Antalet sekunder sedan 1 januari 1970 " << sek << endl;
    srand ( sek ); //initierar ett startv�rde f�r slumpen.
    // H�gsta m�jliga slumptal
    cout << RAND_MAX << endl;
    int i = 0;
    while (i < 5) {
    slump = rand();
    kast = 1 + rand() % 6;
    cout << "T�rningskast nr " << i << " " << kast << endl;
    cout << "Slumpvarde nr " << i << " " << slump << endl;
     i++;
    }







    return 0;
}
