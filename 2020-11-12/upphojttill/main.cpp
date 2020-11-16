#include <iostream>
#include <math.h> // för "pow()" funktionen
/*
Beräkna "x upphöjt till y", x^y
*/
using namespace std;
int main() {
    int bas;
    int exponent;
    cout << "Ange basen ";
    cin >> bas;
    cout << "Ange exponenten ";
    cin >> exponent;
    int tal=bas;
    for ( int i=1,j=0; i<exponent; i++,j++) { // "mindre än" samma som...

        tal = tal * bas;
        cout << "Loop nr " << j << endl;
    }

    cout << tal << endl;
    tal=bas;
    for ( int i=1,j=0; i != exponent; i++,j++) { // ..."mindre än eller lika med" (Loopar lika många ggr.)

        tal = tal * bas;
        cout << "Loop nr " << j << endl;
    }

    cout << tal << endl;
    // Är en lite sämmre lösning.
    // Behövs ett varv till på loopen
    tal=1; // tal börjar med 1
    for ( int i=1,j=0; i <= exponent; i++,j++) {
        // För att tal ska bli lika med bas behövs ett varv till i loopen.
        // Första varvet blir tal lika med bas (bas * 1)
        tal = tal * bas;
        cout << "Loop nr " << j << endl;
    }

    cout << tal << endl;

    // En funktion som finns i math.h
    // Är det effektivaste och snabbaste sättet.
    cout << "pow() funktionen från math.h " << pow(bas,exponent) << endl;


    return 0;
}
