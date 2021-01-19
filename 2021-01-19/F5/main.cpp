#include <iostream>
#include <math.h>
long oppHojtTill(int bas, int exponent);
using namespace std;
// F5 Skapa en funktion som beräknar "x upphöjt till y"
// "int oppHojtTill(int bas, int exponent);"

int main()
{
    int bas, exponent;
    cout << "Mata in basen: ";
    cin >> bas;
    cout << "Mata in exponenten: ";
    cin >> exponent;

    cout << bas << " upphöjt till " << exponent << " blir " << pow(bas,exponent) << endl;
    cout << bas << " upphöjt till " << exponent << " blir " << oppHojtTill(bas,exponent) << endl;

    return 0;
}
long oppHojtTill(int bas, int exponent)
{
    long svar = 1;
    for (int i=1; i<= exponent; i++) {

        svar = svar*bas;
    }
    return svar;
}
