#include <iostream>
using namespace std;
int main() {

    int falt[] = {9,12,15,0,13};

    int temp = falt[0];
    cout << temp << endl;
    if (falt[1] > temp) {
        temp = falt[1];
        cout << temp << endl;
    }
    if (falt[2] > temp) {
        temp = falt[2];
        cout << temp << endl;
    }
    if (falt[3] > temp) {
        temp = falt[3];
        cout << temp << endl;
    }
    if (falt[4] > temp) {
        temp = falt[4];
        cout << temp << endl;
    }
    cout << "Störst är " << temp << endl;

    temp = falt[0];
    for (int i=1; i<4; i++)
    {
        if (falt[i] > temp)
        {
            temp = falt[i];
        }
    }
    cout << "Störst är " << temp << endl;

    return 0;
}
