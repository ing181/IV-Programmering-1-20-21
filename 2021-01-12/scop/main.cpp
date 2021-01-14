#include <iostream>
using namespace std;
// Om var variabler finns.
// Finns, där man kommer åt dem, scop
int main()
{
    // En variabel existerar mellan måsvingarna som omger den
    int i;

    cin >> i; // Om vi matar in 11
    if (i > 10) // Detta är då sant
    {
        int i = 1000; // Här skapas en ny variabel
        // i, förväxla inte den med
        // i som finns utanför måsvingarna
    }
    cout << i << endl;
    // Slutsats:
    // En variabel finns mellan sina måsvingar
    // En variabel "föjer med in" i underliggande måsvingar
    // En variabel som deklareras i underliggande måsvingar
    // gäller, då gäller inte variabeln i överordnade måsvingar.
    // Närhetsprincip: Variabel deklarerad i närmast måsvingar
    // gäller alltid framför variabel deklarerad i överordnade.
    return 0;


}
