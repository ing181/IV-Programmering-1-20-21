#include <iostream>
using namespace std;
// Principen allt som ska användas måste först ha deklarerats
// gäller variabler och funktioner
// Funktionsdeklaration
void test(int x, float f);
void test2(int arr[], int antal);
int main()
{
    int i1 = 7;
    float f1 = 9.0;
    test(i1, f1);
    cout << "Nu är f1 = " << f1 << endl;

    // Vad gäller angående arryer?
    // arrayer är alltd referenser när de skickas till funktioner
    // int falt[] = {3,4,5};
    int falt[3];
    falt[0] = 3;
    falt[1] = 4;
    falt[2] = 5;

    test2(falt,3);

    for (int i=0; i<3; i++)
    {
        cout << falt[i] << " ";
    }



    return 0;
}
// Variabeldefinition
void test2(int arr[], int antal)
{
    for (int i=0; i<antal; i++)
    {
        cout << arr[i] << " ";
        arr[i] = arr[i]+1;
    }
    cout << '\n';

}
void test(int x, float f)
{

    cout << "HEJ från test" << endl;
    f = 100.01;

}
