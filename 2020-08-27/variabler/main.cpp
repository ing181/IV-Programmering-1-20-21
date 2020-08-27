#include <iostream>
using namespace std;

int main()
{
    // Heltalsvariabel (-4, 0, 47, ...)
    int tal;
    // Tilldelas 5
    // Tilldelningsoperatorn "=" används
    tal = 5;
    // Utskrift till skärmen
    // Utmatningsoperatorn "<<" används
    cout << tal << endl;
    cout << "Mata in ett heltal ";
    // Inmatning från tangentbordet
    // Inmatningsoperatorn ">>" används
    cin >> tal;
    // Utskrift
    cout << tal << endl;

    // Flyttalsvariabel (decimaltal)
    float f = 2.12; // -5.789, 6.2, 7.88, ...
    cout << f << endl;
    // Inmatning från tangentbordet
    cin >> f;
    cout << f << endl;

    // sizeof(variabeltyp) visar hur mycket som får plats i variabeln
    // med typen "variabeltyp"
    // skrivs till exempel 4 ut, betyder det att variabeln är
    // 4 byte stor, varje byte innehåller 8 bitar.
    // så variabeln kan innehålla max 4 x 8 ettor och nollor.
    cout << sizeof ( int ) << endl;

    int tal = 2;
    // Vanliga räkneregler används, till exempel gånger går före pluss
    // 6+7 beräknas, 13
    // 13 x 2 beräknas, 26
    // 26 skrivs ut på skärmen.
    cout << ( 6 + 7 ) * 2 << endl;
    // variabeln tal ger ersätter här talet 2
    cout << tal * 2 << endl; // Skriver ut 4
    // tal tilldelas sig själv + 1
    // Först utförs det som finns till höger om utmatningsoperatorn
    // Därefter tilldelas tal det nya värdet.
    tal = ( tal + 1 );
    // Escape tecken "\"
    // Nästa tecken ej specialtecken
    // Om man vill att " ska skrivas ut.

    cout << "\"Jag skriver ut text\"" << endl;
    // Här skrivs 3 stycken \ ut.
    // Varannan \ talar om att nästa \ ska skrivas ut
    cout << "\\\\\\" << endl;
    return 0;
}
