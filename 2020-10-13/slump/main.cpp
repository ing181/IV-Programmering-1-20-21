
/* Om slumpen */
#include <iostream>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
using namespace std;
int main()
{
    int tid = time(NULL); // Antalet sekunder sedan
                                // tidens början
                                // 1 januari 1970
    srand(tid); // Startar slumpen

    cout << RAND_MAX << endl; // 32767 Största möjliga slumptal
    for (int i=0; i<5; i++) {
    cout << "Tärning " << 1 + rand() % 6 << endl;
    cout << "0 eller 1 " << rand() % 2 << endl; // genererar ett slumptal
    }
    return 0;
}
