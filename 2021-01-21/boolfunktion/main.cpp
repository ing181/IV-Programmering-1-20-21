#include <iostream>
using namespace std;
// Boken 12.9 sidan 109
// Funktion som kollar om vattnet kokar.
bool IsBoiling(int);
int main()
{
    int temp;
    cout << "Mata in temperatur ";
    cin >> temp;
     // returnerar true eller false
    if (IsBoiling(temp)) {
        cout << "Vattnet kokar" << endl;
    }
    else {
        cout << "Vattnet är inte tillräckligt varmt" << endl;
    }
    return 0;
}
bool IsBoiling(int temperatur)
{
    if (temperatur < 100) {
        return false;
    }
    return true;
}
