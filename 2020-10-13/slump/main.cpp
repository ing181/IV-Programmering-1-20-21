
/* Om slumpen */
#include <iostream>
#include <time.h> // F�r tiden
#include <cstdlib> // F�r slumpen
using namespace std;
int main()
{
    int tid = time(NULL); // Antalet sekunder sedan
                                // tidens b�rjan
                                // 1 januari 1970
    srand(tid); // Startar slumpen

    cout << RAND_MAX << endl; // 32767 St�rsta m�jliga slumptal
    for (int i=0; i<5; i++) {
    cout << "T�rning " << 1 + rand() % 6 << endl;
    cout << "0 eller 1 " << rand() % 2 << endl; // genererar ett slumptal
    }
    return 0;
}
