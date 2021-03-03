#include <iostream>
using namespace std;
// foreach
int main()
{
    float falt[]={3.4, 8.4, 5.2, 7.5};

    for (int i=0; i<4; i++) {
       cout << falt[i] << " ";
    }
    cout << endl;

    // Från och med Revision 11
    for( float f : falt)
    {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}
