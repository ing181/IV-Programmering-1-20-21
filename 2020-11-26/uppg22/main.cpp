#include <iostream>
using namespace std;
/*22. Ett företag behöver statistik över medellönen i företaget. Gör ett program med en
meny som visas om och om igen tills att användaren matar in siffran 0.
Väljer man fel, alltså inte 0, 1 eller 2 ska menyn visas
igen med ett felmeddelande "Felaktigt val".
Avsluta (0)
Presentera statistik (1)
Mata in nya uppgifter (2)
*/
int main() {
    float lonesumma = 0;
    float lon;
    int val;
    int antalanstallda = 0;
    do {
        cout << "Avsluta (0)"<< endl;
        cout << "Presentera statistik (1)" <<endl;
        cout << "Mata in nya uppgifter (2)" <<endl;
        cin >> val;

        switch (val) {

        case 0:
            cout << "Hej då!" << endl;
            return 0;
        case 1:
            if (antalanstallda == 0) {
                cout << "Det finns inga anställda" << endl;
            } else {
            cout << "Medellönen för alla anställda är " << (lonesumma/antalanstallda) << " de finna " << antalanstallda << " anstälda" << endl;
            }

            break;
        case 2:
            cout << "Lönen är ";
            cin  >> lon;
            lonesumma = lonesumma + lon;
            antalanstallda++;

            break;
        default:
            cout << "Felaktigt val" << endl;
        }




    } while (val != 0);



    return 0;
}
