#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variabler
    // Heltal
    int heltal; // Finns, värdet odifinierat
    // heltal tilldelas något som vi inte vet + 2
    // Lösning: "int heltal = 0;"
    /*
        int a, b, c=100;
        int a;
        int b;
        int c=100;

    */
    heltal = ( heltal + 2 );
    // Man kan skapa och tilldela på fler sätt
    // int htal = (heltal - 5);
    // Decimaltal, flyttal
    float flyt;
    // Konstanter: "konstanta variabler", variabler
    // som inte kan ändras
    // För att undvika oavsiktlig ändring
    const float PI = 3.14;
    // float pi = PI; // OBS! Stora och små bokstäver betyder olika namn
    // PI = 7.7; Går inte att ändra!
    // En annan heltalsvariabel är
    // char
    // char tecken = 72;
    char tecken = 'H'; // Samma sak som "char tecken = 72;"
    // fast tydligare
    cout << tecken << endl; // 72
    tecken = tecken + 2; // 74
    cout << tecken << endl;
    int test = 65;
    char test2 = 65;
    cout << "Tecknet " << test2 << " har ASCII koden " << test << endl;
    // bool
    // För att spara "sant" och "falskt"
    if ( test > 2 ) {
        cout << "test är större än 2" << endl;
    }
    bool b = ( test > 2 ); // b tilldelas true eller false
    if ( b ) {
        cout << "test är fortfarande större än 2" << endl;
    }
    // Om string
    string s = "Hejsan";
    s = "h";

    return 0;
}
