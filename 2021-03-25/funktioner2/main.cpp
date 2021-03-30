#include <iostream>
using namespace std;
void test(int a, int b);
int test2(int a, int b);
bool test3(int a, int b);
int main()
{
    test(7,5);
    cout << "Minsta talet är " << test2(7,5) << endl;
    cout << "Är första talet mindre än det andra? " << test3(3,5) << endl;
     if ( test3(3,5) ) {
        cout << "Första minst" << endl;
     }
     else {
        cout << "Andra minst eller lika stort" << endl;
     }


    return 0;
}
bool test3(int a, int b)
{
    if (a < b)
    {
       return true; // Återvänder till main
    }

    return false;
}
int test2(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
void test(int a, int b)
{
    if (a < b)
    {

        cout <<  a << " är mindre än " << b << endl;
        return; // Återvänder till main
    }

    cout <<  a << " är INTE mindre än " << b << endl;


}
