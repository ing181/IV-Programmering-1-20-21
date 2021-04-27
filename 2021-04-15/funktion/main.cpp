#include <iostream>
using namespace std;
/*
I main (huvudprogrammet) tilldelar du arrayen falt värden på alla platser. Du använder
funktionen highest för att hitta det högsta värdet som finns i falt. Funktionen returnerar
det högsta talet som skrivs ut i main.
*/
int highest(int falt[]);
int main()
{
    int falt[] = {6,4,47,1,9};
    int storst = highest(falt);
    cout  << "Högsta värdet: " << storst << endl;
    return 0;
}
// Funktionsdefinition
int highest(int falt[])
{
    int temp = falt[0];
    for (int i=1; i<5; i++)
    {
        if (falt[i] > temp)
        {
            temp = falt[i];
           // cout << temp << " ";
        }
    }

    return temp;
}



