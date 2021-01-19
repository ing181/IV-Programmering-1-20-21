#include <iostream>
using namespace std;
// F4 Hitta minsta talet. En funktion returnerar det lägsta talet i en array.
int hittaMinst(int[], int);
int main()
{
    int minArray[] = {34,-5,5,6,-3,0};
    cout << hittaMinst(minArray,6) << " är minsta talet i arrayen" << endl;

    return 0;
}
int hittaMinst(int arr[], int antal)
{
    int temp = arr[0];
    for (int i=1; i<antal; i++)
    {
        if ( arr[i] < temp) {
            temp = arr[i];
        }
    }

    return temp;
}
