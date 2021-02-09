#include <iostream>
using namespace std;
// Exempel 12.9 och 12.10, sidan 108
// Visar att namnet på referensparametern i funktionen
// inte har någon betydelse
//
void MyFunction(int &y)
{
    cout << "MyFunction 1: " << y << endl;
    y = 42;
    cout << "MyFunction 2: " << y << endl;
}

int main()
{
    int x = 100;
    cout << "main 1: " << x << endl;
    MyFunction(x);
    cout << "main 2: " << x << endl;

    return 0;
}
