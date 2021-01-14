#include <iostream>
using namespace std;
float kvadrat(float, float);
int main()
{
    float in;
    float in1, in2;
    cout << "Ange ett tal ";
    cin >> in;
    cout << in << " gånger " << in << " blir " << (in*in) << endl;
    cout << in << " gånger " << in << " blir " << kvadrat(in,in) << endl;
    cout << "Ange två tal" << endl;
    cout << "Tal 1: ";
    cin >> in1;
    cout << "Tal 2: ";
    cin >> in2;
    cout << in1 << " gånger " << in2 << " blir " << kvadrat(in1,in2) << endl;
   // float f = 4.5;
    float f = kvadrat(in1,in2);
    cout << in1 << " gånger " << in2 << " blir " << f << endl;

    return 0;
}


float kvadrat(float a, float b)
{
    return a*b;
}
