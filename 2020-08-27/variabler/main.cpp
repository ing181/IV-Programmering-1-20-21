#include <iostream>
using namespace std;

int main()
{
    // Heltalsvariabel (-4, 0, 47, ...)
    int tal;
    // Tilldelas 5
    // Tilldelningsoperatorn "=" anv�nds
    tal = 5;
    // Utskrift till sk�rmen
    // Utmatningsoperatorn "<<" anv�nds
    cout << tal << endl;
    cout << "Mata in ett heltal ";
    // Inmatning fr�n tangentbordet
    // Inmatningsoperatorn ">>" anv�nds
    cin >> tal;
    // Utskrift
    cout << tal << endl;

    // Flyttalsvariabel (decimaltal)
    float f = 2.12; // -5.789, 6.2, 7.88, ...
    cout << f << endl;
    // Inmatning fr�n tangentbordet
    cin >> f;
    cout << f << endl;

    // sizeof(variabeltyp) visar hur mycket som f�r plats i variabeln
    // med typen "variabeltyp"
    // skrivs till exempel 4 ut, betyder det att variabeln �r
    // 4 byte stor, varje byte inneh�ller 8 bitar.
    // s� variabeln kan inneh�lla max 4 x 8 ettor och nollor.
    cout << sizeof ( int ) << endl;

    int tal = 2;
    // Vanliga r�kneregler anv�nds, till exempel g�nger g�r f�re pluss
    // 6+7 ber�knas, 13
    // 13 x 2 ber�knas, 26
    // 26 skrivs ut p� sk�rmen.
    cout << ( 6 + 7 ) * 2 << endl;
    // variabeln tal ger ers�tter h�r talet 2
    cout << tal * 2 << endl; // Skriver ut 4
    // tal tilldelas sig sj�lv + 1
    // F�rst utf�rs det som finns till h�ger om utmatningsoperatorn
    // D�refter tilldelas tal det nya v�rdet.
    tal = ( tal + 1 );
    // Escape tecken "\"
    // N�sta tecken ej specialtecken
    // Om man vill att " ska skrivas ut.

    cout << "\"Jag skriver ut text\"" << endl;
    // H�r skrivs 3 stycken \ ut.
    // Varannan \ talar om att n�sta \ ska skrivas ut
    cout << "\\\\\\" << endl;
    return 0;
}
