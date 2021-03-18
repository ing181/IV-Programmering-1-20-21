#include <iostream>
using namespace std;
// Invärde, inget utvärde
void test(int a, int b);
int main()
{

    cout << "Mata in två tal ";
    int a;
    int b;
    cin >> a;
    cin >> b;
    test(a,b);

    return 0;
}


void test(int a, int b)
{
   if ( (a+b) == 4 ) {
    return;
   }
    int temp = a+b;
    cout << temp << endl;

}
