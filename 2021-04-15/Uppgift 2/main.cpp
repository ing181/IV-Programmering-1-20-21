#include <iostream>
using namespace std;
/*
Komplettera programmet nedan med en funktion som ändrar värdena på variablerna.
Efter att funktionen anropats i main har variablerna a och b fått nya värden.
a ska ha värdet 10 och b ska ha värdet 20. Du ska skriva en funktionsdeklaration och
en funktionsdefinition.
*/
void byt(int &x, int &y);
int main()
{
    int a = 1;
    int b = 2;
    cout << a << " " << b << endl;

     byt(a,b); // utan &x och &y är det olika variabler i funktionen
               // och i main
              // Med & är a och x är samma variabel, b och y är samma variabel

    cout << a << " " << b << endl;
    return 0;
}
void byt(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
