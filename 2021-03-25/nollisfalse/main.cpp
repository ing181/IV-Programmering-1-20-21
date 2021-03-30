#include <iostream>
#include <string>
using namespace std;
int antalTecken(string s);
int main()
{

    string g;
    cin >> g;
    cout << g << " innehaller " << antalTecken(g) << " tecken" << endl;
    cout << g << " innehaller " << g.size() << " tecken" << endl;


    return 0;
}
int antalTecken(string s)
{
    int i=0;
    while (s[i] != '\0'){
        i++;
    }
   return i;
}
