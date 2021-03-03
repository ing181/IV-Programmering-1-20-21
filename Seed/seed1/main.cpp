#include <iostream>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
#include <math.h>
using namespace std;

int main()
{
    //  cout << RAND_MAX << endl; // Största möjliga slumptal
    //  srand(time(NULL)); //initierar ett startvärde för slumpen
    const int seed = 3
                     srand(seed); // Seed
    cout << "long long = " << sizeof(unsigned long long) << " Byte" << endl;
    const unsigned long long stor = pow(2,64)-1;
    cout << stor << endl;

    int slumpFalt[15];

    for (int i=0; i<15; i++)
    {
        slumpFalt[i] = rand();
        // slumptalssrien blir alltid densamma
        // vid en viss seed
        // däremot finns ingen garanti att
        // olika seed inte skapar samma
        // talserie. Har du fler tal i talserien
        // blir det förre seed som skapar samma talserie.
        // Denna "reverse engineering" blir bättre med en lång talserie
        cout << slumpFalt[i] << endl;

    }
    cout << endl;
    unsigned long long i=0;
    //  bool intehittat = true; // Om man nöjer sig med den första seeden
    do
    {

        srand(i);
        if (

            slumpFalt[0] == rand() &&
            slumpFalt[1] == rand() &&
            slumpFalt[2] == rand() &&
            slumpFalt[3] == rand() &&
            slumpFalt[4] == rand() &&
            slumpFalt[5] == rand() &&
            slumpFalt[6] == rand() &&
            slumpFalt[7] == rand() &&
            slumpFalt[8] == rand() &&
            slumpFalt[9] == rand() &&
            slumpFalt[10] == rand() &&
            slumpFalt[11] == rand() &&
            slumpFalt[12] == rand() &&
            slumpFalt[13] == rand() &&
            slumpFalt[14] == rand() &&

            //
            // Om du testar färre
            // Blir det fler seed som
            // funkar



            //  slumpFalt[0] == rand()


        )

        {
            // intehittat=false;
            cout << i << endl;  // Fungerande seed
        }
        i++;

    }
    // while (intehittat);
    while (i <= stor);




    return 0;
}

/*
Slumpserie med seed = 3
De 15 första

48
7196
9294
9091
7031
23577
17702
23503
27217
12168
5409
28233
2023
17152
21578

Slumpserie med seed = 2147483651
De 15 första

48
7196
9294
9091
7031
23577
17702
23503
27217
12168
5409
28233
2023
17152
21578

*/
