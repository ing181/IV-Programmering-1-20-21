#include <iostream>
using namespace std;
// Uppg 4 Ränteberäkning
int meny();
int main()
{
    meny();
    return 0;
}
int meny()
{
    int val;
    cout << "Menyval"  << endl;
    cout << "1. Kapitalet när beräkningen börjar (kronor)" << endl;
    cout << "2. Månadssparande (kronor)" << endl;
    cout << "3. Procentsats" << endl;
    cout << "4. Tid (år)" << endl;
    cout << "5. Avsluta " << endl;
    cin >> val;
    return val;
}
