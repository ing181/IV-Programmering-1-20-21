#include <iostream>
using namespace std;
// referenser
int test(int &x);
// & gör att variabel som skickas är SAMMA VARIABEL som i funktionen
int main()
{
    int a = 4;
    cout << "Före funktionen " << a << endl;
    cout << "Detta kommer från funktionen " << test(a) << endl;
    cout << "Efter funktionen " << a << endl;
    return 0;
}
int test(int &x)
{
    if (x < 5) {
        return 1000;
    }
    x = x + 2;
    return x;
}
