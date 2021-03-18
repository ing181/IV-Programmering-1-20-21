#include <iostream>
using namespace std;
// Rekursiv funktion
// Funktion som anropar sig själv
// Detta är lite skumt
// Och skolverket har tagit bort kravet på att ha med rekursiva funktioner...

int talserie(int n);
int talserie2(int n);
int talserieKompakt(int n);
int talserieLoop(int n);
int main ()
{
    int n;
    cout << "Beräkna 1 + 2 + 3 + ... + n" << endl;
    cout << "Välj värdet på n: ";

    cin >> n;

    cout << "Uträkningen blir: " << talserie(n) << endl;
    cout << "Det enda som kommer hit till main är: " << talserie2(n) << endl;
    cout << "Uträknat med en loop blir det: " <<  talserieLoop(n) << endl;
    cout << "Kompakt: " << talserieKompakt(n) << endl;
}
int talserie(int n)
{
    if ( n != 1 )
    {
        cout << n << " + ";
        int summa = 0;
        summa = summa + n + talserie( n - 1 ); //
        return summa;

    }

    cout << n << " = ";
    return 1;
}
// Inga utskrifter från funktionen
int talserie2(int n)
{
    if ( n != 1 )
    {
        // 5, 4, 3, 2
        return n + talserie2( n - 1 );
    }
   // cout << "HIT ";
   // 1
    return 1;

}
// Tydligast?
int talserieLoop(int n)
{
    int summa = 0;
    for (int i=1; i<=n; i++)
    {
        summa = summa + i;
        // Kontroll av vad som sker
        // cout << summa << " ";
    }
    return summa;
}

int talserieKompakt(int n)
{
    // För den som gillar kompakt kod
    return ( (n != 1) ? n + talserieKompakt( n - 1 ) : 1);
}


