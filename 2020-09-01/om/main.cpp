#include <iostream>
#include <string>
using namespace std;

int main()
{
    system ( "chcp 1252" ); // Nu klarar programmet svenska tecken
    /* Lite repetition */
    // Variabler kan endast innehålla en typ av data
    // EX
    cout << "ÅÄÖ åäö" << endl;
    int tal = 1; // för heltal
    float flyt = 4.3; // för flyttal (decimaltal)
    /*
    float flyt;
    flyt = 4.3
    */
    string s; // För text
    cout << tal << flyt << " är ett flyttal" << endl;
    /* if-satser */
    // Relationsoperatorer
    // == "Lika med"
    // > "Större än"
    // >= "Större än eller lika med"
    // < "Mindre än"
    // <= "Mindre än eller lika med"
    // != "Inte lika med"
    if ( 1 != 1 ) {
        cout << "SANT" << endl;
    }
    else {
        cout << "FALSKT" << endl;
    }
    return 0;
}
