#include <iostream>
#include <math.h>
using namespace std;

// Denna fanktion gör detta och detta....
void faltFunktion(int falt[], int antal);
int main()
{
    int falt[] = {2,4,6,8,10};
    faltFunktion(falt, 5);
    cout << pow(2,3) << endl;


    return 0;
}
void faltFunktion(int falt[], int antal)
{
    for (int i=0; i<antal; i++)
    {
        cout << falt[i] << ' ';
    }
    cout << endl;
}
