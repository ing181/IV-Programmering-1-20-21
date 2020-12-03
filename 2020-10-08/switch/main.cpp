#include <iostream>

using namespace std;

int main()
{
    // En switch kan alltid bytas mot ells och ellse if
    // Fungerar bara med heltal (int eller char)
    int varde = 0;
    switch ( varde ) {

    case 0:
        cout << "Noll" << endl;
        break;
    case 1:
        cout << "Ett" << endl;
        break;
    case 2:
        cout << "Tva" << endl;
        break;
    default:
        cout << "Varken noll, ett eller tva" << endl;
    }
    return 0;
}
