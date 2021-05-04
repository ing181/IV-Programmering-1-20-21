#include <iostream>

using namespace std;

int main()
{
     bool b = true;
    // Variablerna i och j är dolda, finns bara i
    // for-satsen
    // int a, b, c;
    for (int i=0, j= -2;(b && i<10); i++,j=j-2) {

        cout << i << " ";

        if (i > 10) {
            b = false;
        }

    }
    cout << endl;
    // Variablerna i och j är inte dolda, finns i
    // hela programmet
    bool b1 = true;
    int i=0;
    int j= -2;
    while (b1 && i<10) {
        cout << i << " ";
        i++;
        j=j-2;
    }

    return 0;
}
