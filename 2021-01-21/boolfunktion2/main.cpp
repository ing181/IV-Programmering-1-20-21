#include <iostream>
#include "kok.h"
#include <math.h>
using namespace std;
// Boken 12.9 sidan 109
// Funktion som kollar om vattnet kokar.

int main()
{
    int temp;
    cout << "Mata in temperatur ";
    cin >> temp;
    cout << pow(2,3) << endl;
     // returnerar true eller false
    if (IsBoiling(temp)) {
        cout << "Vattnet kokar" << endl;
    }
    else {
        cout << "Vattnet är inte tillräckligt varmt" << endl;
    }
    return 0;
}

