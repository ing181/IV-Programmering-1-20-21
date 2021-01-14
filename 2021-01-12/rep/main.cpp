#include <iostream>
using namespace std;
int main()
{
    // Heltalsvariabeln "i" skapas och ges värdet "0"
    int i = 0;

    // Användaren kan mata in ett heltal från tngentbordet
    cin >> i;

    // Om värdet på "i" är mindre än "6"
    if (i < 6)
    {
        cout << "Bara en gång" << endl;
    }

    // Så länge som värdet på "i" är mindre än "6"
    while (i < 6)
    {
        cout << "Hej 1" << endl;
        cout << "Hej 2" << endl;
        cout << "Hej 3" << endl;

        i = i + 1;  // "i" tilldelas sitt eget värde + 1
        cout << i << endl;
    }

    return 0;
}
