#include <iostream>
using namespace std;
// Referensparametrar
// &-tecken mellan datatypen och variabelnamnet
// arrayer är alltid referensparametrar
int minAndraFunktion(int x,int &y);
int main()
{
    int x = 1;
    int y = 2;
    cout << "Före funktionen " << x << " " << y << endl;
    int ut = minAndraFunktion(x,y);
    cout << "Efter funktionen " << ut << " " << y << endl;
    return 0;
}
int minAndraFunktion(int a, int &b) // Parametrar, invärden a och b
{
    a = 100;
    b = 200;
    cout << "Från funktionen " << a << " " << b << endl;
    return a;
}
