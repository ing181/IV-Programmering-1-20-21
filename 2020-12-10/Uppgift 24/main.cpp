#include <iostream>
using namespace std;
// 24. Hitta det högsta talet i en array
int main()
{
    int ar[10000];
    int antal;
    cout << "Mata in heltal, 1 till 10000" << endl;
    cin >> antal;

    for (int i=0; i<antal; i++)
    {
        cout << "Mata in tal " << i+1 << " ";
        cin >> ar[i];
    }

    int tmp = ar[0];
    for (int i=1; i<antal; i++)
    {
        if (ar[i] > tmp) {
            tmp = ar[i];
        }
    }

    cout << "Det högsta inmatade värdet är " << tmp << endl;


    return 0;
}
