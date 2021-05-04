#include <iostream>
using namespace std;
// Uppg2
/*
Komplettera programmet nedan med en funktion som ändrar värdena på variablerna.
Efter att funktionen anropats i main har variablerna a och b fått nya värden.
a ska ha värdet 10 och b ska ha värdet 20. Du ska skriva en funktionsdeklaration och
en funktionsdefinition.
*/
void andra(int &x, int y);
// int andra(int x, &y);
int main()
{

    int a = 1;
    int b = 2;
    cout << a << ' ' << b << endl;
    andra(a,b);
    cout << a << ' ' << b << endl;

    return 0;
}
void andra(int &x, int y)
{
    x = 10;
    y = 20;
}
