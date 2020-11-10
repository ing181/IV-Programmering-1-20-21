#include <iostream>

using namespace std;

int main()
{
    // Operator
    // EX = tilldelning
    // Har operander till höger och till vänster
    int i = 77;
    // jämförande
    // ==, <, >, <=, >=, !=
    bool b = (6 > 5);
    // if (5 == 5)
    // Logiska
    // if (  (3==2)  &&  (7<9)   ) // och
    // if (  (3==2)  ||  (7<9)   ) // eller
    // if (  ()  ||  ( () && () )  ) // komplicerat
    cout << "Mata in två tal ";
    int x, y;
    cin >> x;
    cin >> y;
    if ( (x > y)  || ( x < y) ) {
        cout << "INTE LIKA" << endl;
    }
    else {

        cout << "LIKA" << endl;
    }

    return 0;
}
