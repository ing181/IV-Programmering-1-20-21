#include <iostream>
using namespace std;
/*
F3(6). Skriv ett program där användaren matar in ett tecken (char) och programmet skriver ut nästa tecken,
i alfabetisk ordning. En funktion tar det inmatade tecknet som invärde
och returnerar bokstaven som är närmast efter i alfabetet till huvudprogrammet (main).
*/
char plussEtt(char);
int main()
{
    char bokstav;
    char nastabokstav;
    cout << "Program för att hitta nästa bokstav i alfabetet." << endl;
    cout << "Mata in valfri bokstav (a-z eller A-Z)" << endl;
    cin >> bokstav;
    nastabokstav = plussEtt(bokstav);
    cout << "Efter " << bokstav << " kommer " << nastabokstav << endl;


    return 0;
}
char plussEtt(char c)
{
  c++;
  return c;
}
