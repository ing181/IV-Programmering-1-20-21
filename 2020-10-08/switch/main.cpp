#include <iostream>

using namespace std;

int main()
{
    // En switch kan alltid bytas mot els och else if
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
        cout << "Tv�" << endl;
        break;
    default:
        cout << "Varken noll, ett eller tv�" << endl;
    }
    return 0;
}
