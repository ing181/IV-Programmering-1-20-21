#include <iostream>
using namespace std;
/*
Det finns 100 råttor månad 0
Råttorna förökarsig så att det sker en
fördubbling varje månad.
Hur många månader tar det innan det finns en miljon råttor?
*/
int main()
{
        int antalRattor = 100;
        int manader = 0;
        while ( antalRattor <= 1000000 ) {

        antalRattor = antalRattor * 2;
        manader++;

    }

    cout << "Nu finns det " << antalRattor << endl;
    cout << manader << " månader har förflutit sedan det fanns 100 råttor" << endl;




    return 0;
}
