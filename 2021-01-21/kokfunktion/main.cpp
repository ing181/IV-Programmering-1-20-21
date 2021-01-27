#include <iostream>
#include "kokar.h"
using namespace std;
int main()
{
    int temp;
    cout << "Mata in temperatur ";
    cin >> temp;
     // returnerar true eller false
    if (IsBoiling(temp)) {
        cout << "Vattnet kokar" << endl;
    }
    else {
        cout << "Vattnet är inte tillräckligt varmt" << endl;
    }
    return 0;
}
