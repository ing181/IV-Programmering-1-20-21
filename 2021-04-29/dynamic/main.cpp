#include <iostream>
using namespace std;
// Var finns en variabel?
// Den finns innom { }
// Om iden med att kapsla in
int main()
{
    // variabeln i deklareras på rad 11
    // i finns och kan användas mellan måsvingarna på rad 14 - 16
    //
    int i = 4;
    // for (i=0; i<3; i++) { I detta fall är det samma i som på rad 11
    for (int i=0; i<3; i++) { // Här deklareras en ny variabel i. Inte samma som i på rad 11

        cout << i << " ";

    }
    cout << endl;
    cout << i << endl; // 4

    system("pause");
    return 0;
}
