#include <iostream>
#include <string>
using namespace std;

int main()
{
    system ( "chcp 1252" ); // Nu klarar programmet svenska tecken
    /* Lite repetition */
    // Variabler kan endast inneh�lla en typ av data
    // EX
    cout << "��� ���" << endl;
    int tal = 1; // f�r heltal
    float flyt = 4.3; // f�r flyttal (decimaltal)
    /*
    float flyt;
    flyt = 4.3
    */
    string s; // F�r text
    cout << tal << flyt << " �r ett flyttal" << endl;
    /* if-satser */
    // Relationsoperatorer
    // == "Lika med"
    // > "St�rre �n"
    // >= "St�rre �n eller lika med"
    // < "Mindre �n"
    // <= "Mindre �n eller lika med"
    // != "Inte lika med"
    if ( 1 != 1 ) {
        cout << "SANT" << endl;
    }
    else {
        cout << "FALSKT" << endl;
    }
    return 0;
}
