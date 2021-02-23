#include <iostream>
#define PI 3.1415
#define FAKTOR 4
#define PROGRAMMERARE "Kalle Persson"
// Varning
// Kompilatorn kan inte kolla om du gjort rätt
//const float PI = 3.1415;
using namespace std;

int main()
{


   // Förkompilatorn byter ut PI mot flyttalet 3.1415
   // innan kompileringen
    cout << (PI * FAKTOR) << endl;
   // så när kompileringen startar står det
   // cout << (3.1415 * 4) << endl;
   // i koden.
   cout << "Programmet är skapat av "PROGRAMMERARE;

    return 0;
}
