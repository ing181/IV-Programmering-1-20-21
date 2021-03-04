#include <iostream>
#include <string>
using namespace std;
// Inmatninar, utmatningar och tangentbordsbuffert
int main()
{
    string n;
    getline(cin,n);
    cout << n << endl;
    char val;
   // cin >> val;
    char tecken = 'G';
    float f[] = {2, 4.55, 9.0};
    char namn[] = "Hejsan";

    for (int i=0; i<6; i++) {

        if (namn[i] == 'j')
        {
            cout << i << endl;
        }
    }



    // char namn[] = "Kalle\0";
    // cout skriver ut tills att ett
    // blanktecken hittas "space", "mellanslag",
    cout << namn << endl;
    char namn2[] = {'F', 'a', 'l', 'l', 'e','r','\0'};
    cout << namn2 << endl;
    string s = "Hejsan";
    // Returnerar positionen av sökt tecken, heltal
    // hittas inte tecknet returneras -1
    // find('j',0);
    // objekt.metod (funktion)
    int hittat = s.find('j',0);

    cout << hittat << endl;
    cout << s.size() << endl;
    s = "Hej";
    cout << s.size() << endl;

    string name;
    cout << "Skriv vad du heter ";
    cin >> name;
    cout << name << endl;
    // Här har innehållet i tangentbordsbufferten
    // skickats till datorn
    // MEN '\n' ligger kvar
    cin.ignore(1000,'\n');
    getline(cin,name); // Läser in tills den stöter på '\n'
    // och getline stötepå '\n' direkt!

    cout << name << endl;

    return 0;
}
