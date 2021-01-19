#include <iostream>
#include <string>
using namespace std;
/*
F1 (7). Skriv ett program som låter användaren mata in sitt förnamn och vilket år hen är född.
Utskriften från programmet ska se ut som på bilden uppgift7.png Utskriften sker i en funktion.
*/
void halsning(string, int); // Funktionsdeklaration
int main()
{
    string namn;
    int fodelsear;
    cout << "Vad heter du? ";
    cin >> namn;
    cout << "Vilket år är du född? ";
    cin >> fodelsear;
    halsning(namn,fodelsear);



    return 0;
}
void halsning(string namn, int fodelsear)
{
    cout << " Hej! " << namn << "! då är du " << (2021-fodelsear) << " år gammal. " << endl;
}
