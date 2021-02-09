#include <iostream>
using namespace std;
// Arrayer hanterade av funktioner
void minFunktion(int[], int);
int main()
{
    int minArray[] = {1,3,5,-1,-3,-5};

    for (int i=0; i<6; i++)
    {
        cout << minArray[i] << " ";
    }
    cout << endl;
   int antal = 6;
   cout << "(före funktionen) antal = " << antal << endl;
    minFunktion(minArray,antal);

    for (int i=0; i<6; i++)
    {
        cout << minArray[i] << " ";
    }
    cout << endl;
     cout << "(efter funktionen) antal = " << antal << endl;

    return 0;
}
void minFunktion(int falt[], int antal)
{
        for (int i=0; i<antal; i++)
        {
            falt[i] = falt[i] * (-1);
        }
        antal = 0;
}
