#include <iostream>
using namespace std;
/*
I main (huvudprogrammet) tilldelar du arrayen falt värden på alla platser. Du använder
funktionen highest för att hitta det högsta värdet som finns i falt. Funktionen returnerar
det högsta talet som skrivs ut i main.
*/
int hogst(int falt[],int antal);
int main()
{
    int falt[3] = {-1, 55, -2};
    int antal = 3;
    int hogstaVardet = hogst(falt, antal);
    cout << "Högsta talet är " << hogstaVardet << endl;


    return 0;
}
int hogst(int falt[], int antal)
{
    int temp = falt[0];

    /*
    int temp = falt[0];
    for (int i=1; i<antal; i++)
    {
        if (falt[i] > temp) {
            temp = falt[i];
        }
    }
    */





    return temp;
}
