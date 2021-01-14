#include <iostream>
using namespace std;
// Deklarera en funktion
// Funktion som multiplicerar två
// tal med varandram och
// returnerar produkten
float kvadrat(float,float);

int main()
{
    float in;
    float in1, in2;
    cout << "Mata in ett tal ";
    cin >> in;

    cout << in << " gånger " << in << " blir " << (in*in)<< endl;
    // Anropa funktionen
    cout << in << " gånger " << in << " blir " << kvadrat(in,in) << endl;
    cout << "Mata in två tal" << endl;
    cout << "Tal 1: ";
    cin >> in1;
    cout << "Tal 2: ";
    cin >> in2;
    cout << in1 << " gånger " << in2 << " blir " << kvadrat(in1,in2) << endl;
    // På samma sätt som
    // float f = 6.9;
    float f = kvadrat(in1,in2);
    cout << in1 << " gånger " << in2 << " blir " << f << endl;

    return 0;
}
// Definierar funktionen
float kvadrat(float a,float b)
{
    return (a*b);
}
