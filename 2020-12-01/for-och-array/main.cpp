#include <iostream>
using namespace std;
// Den effektiva kombinationen av for-loop och array
// En array innehåller att antal heltal. Om heltalet är positivt,
// omvandla till motsvarande (med samma absolutbelopp) negativa tal.

int main() {
    int falt[7] = {1,-4,7,-7,5,12,-9};

    for (int i=0; i<7; i++) {
        cout << falt[i] << " ";
    }
    cout << endl;

    for (int i=0; i<7; i++) {

        if (falt[i] > 0 ) {

            falt[i] = falt[i] * (-1);
        }
    }

    for (int i=0; i<7; i++) {
        cout << falt[i] << " ";
    }
    cout << endl;




    return 0;
}
