#include <iostream>
using namespace std;
/*
Program som l�ter anv�ndaren v�lja mellan att
addera eller subtrahera tv� tal.
*/
int main()
{
    char val;
    do {  // K�rs alltid
        cout << "Addera, v�lj (+)" << endl;
        cout << "Subtrahera, v�lj (-)" << endl;
        cout << "Avsluta, v�lj (a)" << endl;
        cin >> val;
        if ( val == '+' ) {  // Om +, g�rs ingen mer koll
                float a, b;
                cout << "Tal nr. 1" << endl;
                cin >> a;
                cout << "Tal nr. 2" << endl;
                cin >> b;
                cout << a << '+' << b << '=' << (a+b) << endl;
        }
        else // Om inte +, forts�tter kollen
            if ( val == '-' ) {  // Om - g�rs ingen mer koll
                float a, b;
                cout << "Tal nr. 1" << endl;
                cin >> a;
                cout << "Tal nr. 2" << endl;
                cin >> b;
                cout << a << '-' << b << '=' << (a-b) << endl;
            }
            else { // I alla andra fall, varken + eller -
                if ( val != 'a' ) { // Om a g�rs ingen utskrift. Anv�ndaren har valt att avsluta
                    cout << "Felaktigt val, v�lj +, - eller a" << endl;
                }
            }
    }
    while ( val != 'a' );
    return 0;
}
