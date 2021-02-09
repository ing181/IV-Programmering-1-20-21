#include <iostream>
using namespace std;
int funk(const int &tal1, const int &tal2);
int main()
{
    int a, b;
    cout << "Mata in två tal: ";
    cin >> a >> b;
    cout << funk(a,b) << endl;

    return 0;
}
int funk(const int &tal1, const int &tal2)
{
    tal2 = 6; // Vad händer?
    return tal1+tal2;
}
