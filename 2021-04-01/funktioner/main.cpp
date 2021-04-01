#include <iostream>
using namespace std;
void funk0();
void funk1();
int main()
{
    funk1();
    return 0;
}
void funk1(){
    funk0();
}
void funk0(){
    cout << "funk0" << endl;
    funk1();
}
