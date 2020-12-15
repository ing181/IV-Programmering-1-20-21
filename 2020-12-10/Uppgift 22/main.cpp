#include <iostream>
using namespace std;
/*
22. Ett företag behöver statistik över medellönen i företaget. Gör ett program med en
meny som visas om och om igen tills att användaren matar in siffran 0.
Väljer man fel, alltså inte 0, 1 eller 2 ska menyn visas igen med ett felmeddelande "Felaktigt val".
Avsluta (0)
Presentera statistik (1)
Mata in nya uppgifter (2)
*/
int main()
{
    int val;
    float sammladlon = 0;
    float lon;
    int antalanstallda = 0;
    do
    {
        cout << "Avsluta (0)" << endl;
        cout << "Presentera statistik (1)" << endl;
        cout << "Mata in nya uppgifter (2)" << endl;
        cin >> val;

        if (val == 1)
        {
            cout << "Medellönen i företaget är " << sammladlon/antalanstallda << " antalet anställda " << antalanstallda << endl;
        }

        else if (val == 2)
        {
            cout << "Ny ansälld, lön: ";
            cin >> lon;
            sammladlon = (sammladlon + lon);
            antalanstallda++;
        }
        else
        {
            if ( val != 0 )
            {
                cout << "Felaktigt val" << endl;
            }
        }
    }
    while (val != 0);

    return 0;
}
