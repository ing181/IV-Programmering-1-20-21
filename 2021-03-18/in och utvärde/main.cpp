#include <iostream>
using namespace std;
// Invärde och utvärde
float test(int a, int b);
int main()
{

    cout << "Mata in två tal ";
    int a;
    int b;
    cin >> a;
    cin >> b;
   // float f = 8.9;
    float f = test(a,b);
    cout << f << endl;

    return 0;
}


float test(int x, int y)
{

    if ( (x+y) > 10 ) {
         return 8.56;
    }
    int temp = x+y;
    cout << temp << endl;
    return 6.9;

}
