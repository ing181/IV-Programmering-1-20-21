#include <iostream>
using namespace std;
// Nestlad if-sats
// if-sats i if-sats
int main() {

    bool b; // Kan ha två värden, sant eller falskt
    b = false;
    if (b)  {

        if (1==1) {

            cout << "SANT B" << endl;
        }


        cout << "SANT A" << endl;

    } else {
        cout << "INTE SANT A" << endl;
    }

    return 0;
}
