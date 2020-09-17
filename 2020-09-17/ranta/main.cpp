#include <iostream>

using namespace std;

int main()

{
    float kapital = 1000;
    float arligInsattning = 100;
    float ranta = 1.05;// 1050
    int i = 1;
    while ( i < 10 ) {
        i++;
        kapital = kapital * ranta;
        kapital = kapital + arligInsattning;
    }
    cout << kapital << endl;
    return 0;
}
