#include<iostream>
using namespace std;
// C++ och for foreach
void visa(int arr[]);
int main()
{
    int arr[]= {1,2,3,4,5};  //array initialization
    cout<<"The elements are: " << endl;
    // arr är skapad i main
    // här finns informationen om antalet platser
    // "Bäst", minst data behöver kopieras
    for(const auto &i : arr) // Deklarerar en variabel (&i)
                             // som innehåller adressen
                             // till varje index i arr
    {
        cout<<i<<endl;
        cout<<&i<<endl;
    }
    // Fungerar också, mer data behöver kopieras
    for(int i : arr) // Deklarerar en int variabel i
                     // dit värdet på varje index i arr kopieras
    {
        cout<<i<<endl;
        cout<<&i<<endl;
    }
    cout << endl;
    visa(arr);

    return 0;
}
void visa(int arr[])
{

    // "arr" skickas från main
    // "arr" innehåller information om var
    // i minnet första platsen i arryen arr finns
    // utskriften visar
    cout << arr << endl; // En adress
    // Det som finns på adressen
    cout << *arr << endl; // Det som finns på adressen, 1
    // (index = 0)
    // Funktionen har ingen annan information.
    // Därför fungerar inte detta
    /*
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    */

}
