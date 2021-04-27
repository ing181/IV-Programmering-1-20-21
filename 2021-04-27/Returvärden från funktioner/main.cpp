#include <iostream>
using namespace std;
// Returvärden (tillbaka från funktionen till huvudprogrammet, main)
// Möjliga returvärden: Inget alls, void. En datatyp. Ex. int, float, string
float test();
int main()
{
    // På samma sätt
    // float f = 6.8;
       float f = test();
    cout << f << endl;

    return 0;
}
float test()
{
    // måste finnas "return" i funktionen
    // följt av rätt datatyp
    // "return 6.8"
    // float f = 4.5;
    // return f;
       return 6.8; // Åter till main
}
