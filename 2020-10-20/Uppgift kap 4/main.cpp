#include <iostream>
using namespace std;
/*
Uppgift från kap. 4
Om du är yngre än 6 år eller äldre än 65 kommer du in gratis på Liseberg. (Man firar att corona-krisen är över!)
Och om du jobbar med corona-sjuka får du också gå in gratis!
Skriv ett program där användaren får skriva in data om ålder och vad man jobbar med och som meddelar om du får gå in gratis.
*/
int main() {
    char sjuk;
    cout << "Jobbar du med coronasjuka? (j/n) ";
    cin >> sjuk;

    if ( sjuk == 'j') {
        cout << "Välkommen in, det är gratis för dig som jobbar i sjukvården!" << endl;
    } else  if ( sjuk == 'n') {

        int alder;
        cout << "Hur gammal är du? ";
        cin >> alder;
        if ( alder < 6 || alder > 65 ) {

            if ( alder < 6) {
                cout << "Gratis för dig som är ung" << endl;
            } else {
                cout << "Gratis för dig som är gammal" << endl;
            }



        } else {
            cout << "Det kostar pengar" << endl;
        }


    } else {

        cout << "Du har anget ett felaktigt svat."<<endl;
        cout << "Endast j eller n är tillåtet"<<endl;
    }




    return 0;
}
