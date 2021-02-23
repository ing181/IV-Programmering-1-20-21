#include <iostream>
using namespace std;
// Pre compiler macros
// Ett macro är en snutt cod som körs.
// Så i detta fall byter pre compilatorn ut __DATE__ mot cod som tar reda på datum (då filen kompileras)
// och byter ut __DATE__ mot detta datum.
int main()
{
    // Pre compiler Macro
    // När programmet skapas byter Pre-kompilatorn ut __DATE__ och __TIME__
    // mot datum och tid då programmet kompilerades.

    cout << "Detta program compilerades " << __DATE__ " " __TIME__ << endl;
    // När gjorde jag senaste ändringen?
    cout << "Källkoden ändrad " << __TIMESTAMP__ << endl;
    cout << "Kompilator version: " << __GNUC__ << "." << __GNUC_MINOR__  << "." << __GNUC_PATCHLEVEL__ << endl;


    return 0;
}
