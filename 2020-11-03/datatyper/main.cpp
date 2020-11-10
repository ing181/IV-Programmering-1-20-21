#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("chcp 1252");
    int heltal;  // Bokat plats för ett heltal
                 // Alltid en viss storlek. 4 byte
    char tecken; // Heltal, betecknar ett tecken.
                 // se ASCII-tabellen
                 // 2 byte
    float flyttal; // Bokat plats för ett decimaltal;
                   // 4 byte

    string strang; // För textsträngar "hej på dig", "Tack"

    cout << "Mata in ett heltal ";
    cin >> heltal; // Måste vara ett heltal
    // Vad händer om man matar in 88.7 ?
    // Decimaldelen försvinner
    cout << heltal << endl;

    cout << "Mata in ett decimaltal ";
    cin >> flyttal; // Måste vara ett heltal

    cout << "Mata in en strang ";
    cin >> strang; // "idag" 4 tecken
    cout << strang;
    cin >> strang; // "tisdag" 6 tecken
    cout << strang;
    // Innehållet i en "string" kan växa och minska
    // efter behov. Minnet som används växer o. minskar



    return 0;
}
