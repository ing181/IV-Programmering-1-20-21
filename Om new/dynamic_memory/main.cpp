#include <iostream>
using namespace std;
// Dynamisk minneshantering
int main()
{

    int *talpekare; // kan innehålla adressen till en int
                    // * betyder att datatypen är "adressen till en int"
    talpekare = new int; // Allokeras, bokas, skapas plats på datorns RAM-minne
                         // där vi kan spara en int
    cout << "talpekare (adress till en int) " << talpekare << endl;

    cin >> *talpekare;  // * betyder "Det som finns på adressen som finns i talpekare"

    cout << "innehållet på adressen talpekare " << *talpekare << endl; // Skriver ut "Det som finns på adressen" i talpekare

    int tal = *talpekare;
    cout << "tal " << tal << endl;
    cout << "adressen till tal " << &tal << endl; // & ger oss adressen


    delete talpekare; // Lämnar tillbaka utrymmet på RAM-minnet
                      // till operativsystemet.



    return 0;
}

