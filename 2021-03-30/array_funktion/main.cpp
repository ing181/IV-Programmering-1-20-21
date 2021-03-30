#include <iostream>
using namespace std;
// Arryer och funktioner
// Arryer skickas alltid som referens
// till en funktion
void forandra(int falt[]);
// På samma sätt som när vi anger med & tecknet
// att en variabel ska skickas som refrerens (samma variabel)
// void forandra2(int &tal);
int main()
{
    // Bokat plats för 3 st int, varje int använder 4 byte (32 bitar)
    // 3 * (4 byte)
    // Finns på en bestämd plats
    int arr[3] = {5,8,9};

    // Vi talar om för funktionen var
    // arryen arr finns
// En förklaring varför det blir så här
    // "&variabelnamn" adressen till
    cout << &arr << endl;
    // "*arr" Det som finns på adressen &arr
    cout << *arr << endl;
// Slut
    forandra(arr);
    // Skickar vi en array till en funktion
    // ÄR DET SAMMA ARRAY SOM I MAIN


    for (int i=0; i<3; i++)
    {
       cout << arr[i] << " ";
    }

    return 0;
}

void forandra(int falt[])
{
    int tal = 3;
    for (int i=0; i<3; i++)
    {
        falt[i] = tal;
        tal = tal + 3;
    }
}
