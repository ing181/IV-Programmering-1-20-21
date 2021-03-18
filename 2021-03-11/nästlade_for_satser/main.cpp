#include <iostream>
using namespace std;
bool ritTecken(int rad, int col);
int main()
{

   if ( ritTecken(6,4) ) {
      cout << "Lyckades rita" << endl;
   }

    return 0;
}
bool ritTecken(int rad, int col)
{
    for (int i=0; i<rad; i++)
    {

        for (i=0; i<col; i++)
        {

            cout << '*';
        }

        cout << endl;

    }

    return true;
}
