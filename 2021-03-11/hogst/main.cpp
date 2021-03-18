#include <iostream>
using namespace std;
// Hitta högsta talet
int hittaIarray(int arr[], int antal);
int main()
{

    int falt[5] = {3,4,1,67,12};
   // int falt[4];
   int returvarde = hittaIarray(falt,5);
   cout << "I main " << falt[3] << endl;
   cout << returvarde << endl;

    return 0;
}
int hittaIarray(int arr[], int antal)
{
    arr[3] = 99;
    int temp = arr[0];
    for (int i=1; i<5; i++) {

        if (arr[i] > temp) {
            temp = arr[i];
        }

    }

    return temp;

}
