#include <iostream>
using namespace std;
/*
Låt användaren mata in tal i en array.
Skapa ett program med en meny där användaren kan göra de här valen

Summera (s)
Hitta högsta talet (h)
Hitta lägsta talet (l)
Medelvärdet (m)
Avsluta (a)

Menyn visas om och om igen tills användaren väljer 'a'.
Låt användaren mata in maximalt 1000 tal i en array och efter inmatningen görs beräkningen.
*/
int main()
{
    int f[1000]; // Nu har vi deklarerat en array med plats för 1000 heltal (int)
    int antal;
    cout << "Mata in heltal i en array" << endl;
    cout << "Hur många tal vill du mata in? (1 till 1000)" << endl;
    cin >> antal;

    for (int i=0; i<antal; i++)
    {
        cout << "Mata in tal nr " << i+1 << " ";
        cin >> f[i];
    }
    char val;
    do
    {
        cout << "Summera (s)" << endl;
        cout << "Hitta högsta talet (h)" << endl;
        cout << "Hitta lägsta talet (l)" << endl;
        cout << "Medelvärdet (m)" << endl;
        cout << "Avsluta (a)" << endl;
        cin >> val;
        cout << endl;
        if (val == 's')
        {
            int summa=0;
            for (int i=0; i<antal; i++)
            {

                summa = ( summa+f[i] );
            }
            cout << "Summan av de inmatade talen är " << summa << endl;

        }
        else if (val == 'h')
        {
            // 3 4 7 2
            int temp = f[0];
            for (int i=1; i<antal; i++)
            {
                if ( temp < f[i] )
                {
                    temp = f[i];
                }

            }
            cout << "Största talet i arrayen är " << temp << endl;

        }
        else if (val == 'l')
        {
            // 3 4 7 2
            int temp = f[0];
            for (int i=1; i<antal; i++)
            {
                if ( temp > f[i] )
                {
                    temp = f[i];
                }

            }

            cout << "Minsta talet i arrayen är " << temp << endl;


        }
        else if (val == 'm')
        {
            float summa=0;
            for (int i=0; i<antal; i++)
            {

                summa = ( summa+f[i] );
            }

            // division av heltal "tar bort" decimaldelen (trunkerar)
            // För att resultatet skall presenteras som ett flyttal
            // skall antingen täljaren eller nämnaren vara av typen flyttal (float)
            // samt att variabeln som tilldelas också skall vara en flyttalstyp
            float medel = summa / antal;

            cout << "Medeltalet av de inmatade talen är " << medel << endl;

        }

    }
    while ( val != 'a' );
    cout << "Tack för att du använda mitt program" << endl;


    return 0;
}
