#include <iostream>
using namespace std;
/*
Uppgift från kap. 5
Skriv ett program som gissar på tal.
Talet man gissar på måste vara ett jämnt tal.
Om användaren gissar på ett udda tal blir utskriften.
"Du får bara gissa på jämna tal, försök igen".
(Om du gissar fel, blir utskriften "Du gissade fel")
Programmet fortsätter så länge användaren gissar fel.
*/
int main() {
    int tal = 98;
    int gissa;
    do {
        cout << "Gissa på ett tal, endast jämna tal";
        cin >> gissa;
        if ( (gissa % 2) == 1 ) {

            cout << "Du får inte gissa på ett udda tal!" << endl;
        } else {

            if ( gissa == tal) {
                cout << "Grattis! Du gissade rätt!" << endl;
            } else {

                cout << "Du gissade fel!" << endl;
            }
        }

    } while (gissa != tal);

    return 0;
}
