#include <iostream>
#include <string>
using namespace std;
// Funktioner
// utan utvärde
//void namn(invärde, invärde, ...)
//datatyp namn();
//void namn();
void welcome(string namn);
int main()
{
	string s;
    cin >> s;
	welcome(s);
    return 0;
}
void welcome(string s)
{

	cout << "Välkommen " << s << "!" << endl;

}
