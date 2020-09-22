#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    while ( 2 == 2 ) {  // Alltid sant

        cout << i << endl;
        i++; // i ökar med 1
        if ( i > 5 ) {  // Om detta är sant, hoppar programmet ur while-satsen
            break; // reserverat ord (som "if", "else", "return" 
			       // och flera andra. Går inte att använda som namn på variabler
				   // blir blåa här i Code::Blocks
        }
    }
    return 0;
}
