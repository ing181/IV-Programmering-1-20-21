#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0;
    while ( i < 10 ) {
        while ( j < 10) {  // För varje "varv" i den yttre loopen körs den innre 10 gånger
          cout << "j ";
        j++;
    }
    cout << "yttre loop, den med i" << endl;
    j=0; // Nollställer variabeln i den innre loopen, så att den kan köras 10 gånger igen.
    i++;
}
return 0;
}
