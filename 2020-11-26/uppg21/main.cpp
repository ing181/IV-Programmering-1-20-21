#include <iostream>
using namespace std;
/*
21. Skriv ett program som låter användaren mata in 4 decimaltal i en array.
Låt programmet beräkna summan och medelvärdet av de tre talen och skriva ut det.
*/
int main() {
    float minArray[4];
    cout << "Mata in fyra decimaltal i en array" << endl;
    for (int i=0; i<4; i++) {

        cout << "Mata in tal nummer " << (i+1) << " ";
        cin >> minArray[i];
    }

    float summa=0;
    float medelvarde;
    for (int i=0; i<4; i++) {
        summa = (summa + minArray[i]);
    }

     medelvarde = (summa / 4);
    cout << "Summan av de inmatade talen är " << summa << " medelvärdet är " << medelvarde << endl;

    return 0;
}
