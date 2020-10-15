#include <iostream>
using namespace std;
/* Loop, iteration */
/* "do-while" */
int main()
{

    char avbryt;
    cout << "Mata in en bokstav, du får inte"  << endl;
    cout << "mata in a eller A" << endl;
    cin >> avbryt;
    do {
            cout << "Om du matade in a eller A" << endl;
            cout << "ser du detta endast en gång" << endl;
            cout << "Annars måste du titta på detta hela ditt liv"<<endl;

        } while ( avbryt != 'a' && avbryt != 'A' );







    return 0;
}
