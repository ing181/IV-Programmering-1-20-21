#include <iostream>

using namespace std;

int main()
{
    char val;
    while ( val != 'a' ) {
        cout << "Addition (+) " << endl;
        cout << "Subtraktion (-) " << endl;
        cout << "Avsluta (a) " << endl;
        cin >> val;
    }
    return 0;
}
