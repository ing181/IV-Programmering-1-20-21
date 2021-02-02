#include <iostream>
using namespace std;
/* Från Extra uppgifter, uppgift 7
https://drive.google.com/open?id=1qUF_6PyDc9ynOTVSxlR_lFf97Wx0cDh9&authuser=0
Skriv ett program som läser in två tal och därefter skriver ut alla tal mellan de inmatade talen i
stigande eller sjunkande ordning.
*/
void skrivUt(int, int, bool);

int main()
{
    int start;
    int slut;
    char ordning;
    bool stigande;
    cout << "Skriv ut en talserie" << endl;
    cout << "Talserien startar med: ";
    cin >> start;
    cout << "Talserien avslutas med: ";
    cin >> slut;
    cout << "Börja med startvärdet och avsluta med slutvärdet? (stigande, välj \"s\" ";
    cout << "Börja med slutvärdet och avsluta med startvärdet? (fallande, välj \"f\" ";
    cin >> ordning;
    if (ordning == 's')
    {
        stigande = true;
    }
    else
    {
        stigande = false;
    }

    skrivUt(start,slut,stigande);

    return 0;
}
void skrivUt(int start, int slut, bool stigande)
{
    if (stigande)
    {

        for (int i=start; i<=slut; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {

        for (int i=slut; i>=start; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }


}
