#include <iostream>
using namespace std;
float pluss(float,float); // Deklaration
float minus2(float,float);
void getValues();
int main()
{
    getValues();
    return 0;
}

void getValues() // Definition
{
    cout << "Vill du plussa (p) eller minussa (m) ";
    char mittval;
    cin >> mittval;
    float a, b;
    cout << "Mata in två tal" << endl;
    cout << "Tal 1: ";
    cin >> a;
    cout << "Tal 2: ";
    cin >> b;

    if (mittval == 'p')
    {
        float ut = pluss(a,b); // Anrop
        cout << a << '+' << b << '=' << ut << endl;

    }
    else if (mittval == 'm')
    {
        float ut = minus2(a,b); // Anrop
        cout << a << '-' << b << '=' << ut << endl;

    }

}


float pluss(float x, float y) // Definition
{
    return (x+y);
}

float minus2(float x, float y) // Definition
{
    return (x-y);
}
