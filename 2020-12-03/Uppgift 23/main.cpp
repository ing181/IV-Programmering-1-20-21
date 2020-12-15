#include <iostream>
using namespace std;
/*
23. Vi har en array "temperatur". Varje timme, året om mäts temperaturen på
Bagges torg i Lerums centrum. Värdena sparas i "temperatur". Medeltemperaturen kan beräknas genom att
float medel = ( temperatur[0] + temperatur[1] + temperatur[2] + ... + temperatur[n] / (n+1)) ;
där n är sist inmatade temperatur. Visa ett enklare sätt att göra samma sak!
*/
int main()
{
    // Uppmätta temperaturer på Bagges torg
    float t[] = {2.2, 3.4, 5.0, 4.1, 3.8};

    float medel = ( (t[0]+t[1]+t[2]+t[3]+t[4]) / 5);
    cout << "Medeltemperaturen i perioden är " << medel << endl;

    float temp = 0;
    for (int i=0; i<4; i++) {
        temp = ( temp+t[i]);
    }

    medel = (temp / 4);
    cout << "Medeltemperaturen i perioden är " << medel << endl;

    return 0;
}
