#include <iostream>
using namespace std;
// Deklarera här utvärde, namn och invärde
void ett();
void tva();
int main()
{

    ett();

    return 0;

}
// Definitioner (vad som ska göras)
void ett()
{
    cout << "ett" << endl;
    tva();
}
void tva()
{
    cout << "två" << endl;
    ett();
}

