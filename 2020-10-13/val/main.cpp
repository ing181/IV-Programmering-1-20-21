#include <iostream>

using namespace std;

int main()
{
    bool b = true;
    int varde = 6;
    int inmatning;
    cin >> inmatning;
    if ( inmatning > varde )
        {

            cout << "Sant" << endl;
        }
    else if ( 3<2 ) // Denna if-sats prövas endast om if-satsen 
					// på rad 11 är falsk.
	              
        {

            cout << "Falskt" << endl;
        }
    else
        {
		    cout << "( 3<2 ) är inte sant" << endl; // Utförs om if-satsen
			                                        // på rad 16 är falsk
        }

    // Kolar heltal
    // Funkar bara med heltal
    // Till ex. int och char
	// EX med char
	// case 'a': OBS Enkla citattecken! 
    switch(inmatning)
        {

        case 7:
            cout << "Du valde 7" << endl;
            break;
        case 8:
            cout << "Du valde 8" << endl;
            break;
        default:
            cout<< "Du valde fel" << endl;

        }





    return 0;
}
