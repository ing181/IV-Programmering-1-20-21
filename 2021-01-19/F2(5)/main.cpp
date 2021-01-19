#include <iostream>
using namespace std;
/*
F2(5). Skriv ett program som räknar ut hur många hela gånger a går i b. Där a och b är heltalsvariabler.
Användaren matar in värdena på a och b och ditt program gör beräkningen. Beräkningen görs i en funktion.
Funktionen ar a och b som invärden och returnerar svaret till huvudprogrammet (main).
*/
int antalGanger(int, int);
int main()
{
    int a, b;
    cout << "Ta reda på hur många gånger talet a går i talet b" << endl;
    cout << "Mata in tal a: ";
    cin >> a;
    cout << "Mata in tal b: ";
    cin >> b;

    int antalganger = antalGanger(a,b);
    cout << a << " rymms " << antalganger << " i " << b << endl;

    return 0;
}

int antalGanger(int a, int b)
{
    int helaganger = (b / a);
    return helaganger;
}
