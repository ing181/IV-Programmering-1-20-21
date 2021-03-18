#include <iostream>
using namespace std;
// Returnerar true om heltal är ett jämnt tal
bool isEven(int heltal);
int main()
{
    int heltal;
    cout << "Mata in ett heltal ";
    cin >> heltal;
    cout << isEven(heltal) << endl;




    return 0;
}
bool isEven(int tal)
{

    return (tal % 2);

/*
    if ( (tal % 2) == 0 )
    {

        return true;
    }

        return false;
*/

}
