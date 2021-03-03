#include <iostream>
using namespace std;
// Kollar om det som står före ?, "a > b"
// är sant. Om sant returnera (skriv ut)
// det som står före :, annars returnera
// det som står efter :
// a > b ? a : b
// Eftersom det testade uttrycket är sant
// returneras a

int main()
{

    cout << ( 2 > 1 ? 100 : 1000) << endl;
    int ut = 5 < 10 ? 0 : 1;
    cout << ut << endl;





    return 0;
}
