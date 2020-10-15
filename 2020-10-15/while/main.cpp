#include <iostream>
using namespace std;
/* Loop, iteration */
/* "while" och "do-while" */
int main()
{

    float summa = 0; // Vi måste veta att summa
                     // har värdet 0 när vi börjar.
    float in;
    int i = 0;
    cout << "Det är förbjudet att mata intalet 14" << endl;
    while (i < 5)
        {
           cout << "Mata in tal " << i+1 << " ";
           cin >> in;
           if ( in == 14) {
               cout << "Du matade in det förbjudna talet" << endl;
              // break; // Hoppar ur loopen direkt
              continue; // Avbryter här. Går till
                        // rad 13 och fortsätter
           }
           summa = (summa + in);
            i = i+1;
        }

        cout << "Summan av de inmatade talen: " << summa << endl;






    return 0;
}
