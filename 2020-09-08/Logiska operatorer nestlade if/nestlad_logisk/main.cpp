#include <iostream>

using namespace std;

int main()
{
    system ( "chcp 1252" );
    /* För att få åka en attraktion på Liseberg
    måste man vara 110 cm lång eller ålder måste vara
    mer än 6 år gammal */
    int alder;
    int langd;
    cout << "Hur gammal är du?" << endl;
    cin >> alder;
    cout << "Hur lång är du?" << endl;
    cin >> langd;
    // Med logisk operator
    if ( ( alder > 6 ) && ( langd >= 110 ) ) {
        cout << "Du får åka! Gå till kassan och betala!" << endl;
    }
    else {
        cout << "Tyvärr, du får inte åka!" << endl;
        if ( alder <= 6 ) {
            cout << "Du får vänta " << ( 6 - alder ) << " år!" << endl;
        }
        if ( langd < 110 ) {
            cout << "Du måste växa " << ( 110 - langd ) << " cm!" << endl;
        }
    }
        return 0;
    }
