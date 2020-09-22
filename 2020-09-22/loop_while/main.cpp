#include <iostream>

using namespace std;

int main()
{
    int i = -10;

    // while sats
    while ( i > 0 ) { // Kommer aldrig att köras, i är inte större än 0
        cout << "Hello world! " << i << endl;
        i = i + 1; //i++
    }

    // do-while sats
    do {
          cout << "Hello world! " << i << endl;

    } while ( i > 0 );  // Hinner köras en gång!
	                    // Testet om det är sant kommer först när det körts en gång.

    return 0;
}
