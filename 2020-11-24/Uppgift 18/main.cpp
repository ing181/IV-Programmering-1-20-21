#include <iostream>
/* 18. Gör ett program som beräknar 1+2+3+4+5+ ... +n där n bestämms av användaren.
Låt programmet skriva ut
1+2+3+4+5=15 (Där värdet på n är 5)
*/
using namespace std;
int main()
{
    int n;
    int summa; // skapas och får värdet 0
    cout << "Välj n ";
    cin >> n;
    // i:et som fnns i hela main
    int i=1;
    for (i=1; i<n; i++){
        // i:et som fnns i hela main
        // Alla variabler måste ha ett definierat värde när de används
        summa = (summa + i);  // Steg 1: summa adderas med i, steg 2: summa tilldelas summa + i;
        cout << i << '+';
    }
    // i:et som fnns i hela main
    cout << i;  // har värdet 1 från rad 14
    // i:et som fnns i hela main
    summa = summa + i;
    cout << '=' << summa;

    return 0;
}
