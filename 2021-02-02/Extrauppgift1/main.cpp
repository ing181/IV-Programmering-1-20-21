#include <iostream>
/*
Från "Extra uppgifter, uppgift 1"
https://drive.google.com/open?id=1qUF_6PyDc9ynOTVSxlR_lFf97Wx0cDh9&authuser=0
Gör ett program som kan beräkna arean och omkretsen av en cirkel om användaren (du) matar in
cirkelns radie.
Skapa en variabel av typen double (decimaltal / flyttal) PI double PI=3.1416 -glöm ej
använda decimalpunkt !!
*/
// Funktionsdeklaration
// Beräknar en cirkels omkrets när vi vet radien
float omkretsen(float);
// Beräknar en cirkels area när vi vet radien
float arean(float);
using namespace std;
// Global variabel
// I stort sätt förbjudet!
// Kan användas om man behöver en konstan. Kan inte ändras.
const float PI = 3.1415; // Konstanter brukar skrivas med stor bokstav
int main()
{

    float radie;
    cout << "Mata in cirkelns radie: " << endl;
    cin >> radie;
    float omkrets;
    omkrets = omkretsen(radie);
    // omkrets = 2*radie*PI; // Utan funktion
    float area;
    area = arean(radie);
    // area = PI*radie*radie; // Utan funktion
    cout << "Cirkelns omkrets vid radien " << radie << " är " << omkrets << " och arean är " << area << endl;

    return 0;
}
// Funktionsdefinition
float omkretsen(float r)
{
    float omkrets = 2*r*PI;
    return omkrets;
}


float arean(float r)
{
    float area = PI*r*r;
    return area;
}
