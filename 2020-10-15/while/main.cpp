#include <iostream>
using namespace std;
/* Loop, iteration */
/* "while" och "do-while" */
int main()
{

    float summa = 0; // Vi m�ste veta att summa
                     // har v�rdet 0 n�r vi b�rjar.
    float in;
    int i = 0;
    cout << "Det �r f�rbjudet att mata intalet 14" << endl;
    while (i < 5)
        {
           cout << "Mata in tal " << i+1 << " ";
           cin >> in;
           if ( in == 14) {
               cout << "Du matade in det f�rbjudna talet" << endl;
              // break; // Hoppar ur loopen direkt
              continue; // Avbryter h�r. G�r till
                        // rad 13 och forts�tter
           }
           summa = (summa + in);
            i = i+1;
        }

        cout << "Summan av de inmatade talen: " << summa << endl;






    return 0;
}
