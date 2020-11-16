#include <iostream>
using namespace std;
/*
När är du född? => 1942
Aha, 58 år i år!
Fyller 59 år 2008
Fyller 60 år 2009
:::::::::
:::::::::
Fyller 65 år 2014
Sen får du gå hem!
*/
int main()
{
   // const före betyder att värdet på variabeln inte går att ändra
   // variabel som inte går att ändra kallas konstanter
   const int NUAR = 2020;
   int fodd;
   int alder;
   cout << "När är du född? ";
   cin >> fodd;
   alder = NUAR-fodd;
  // cout << "test " << alder << endl;
   cout << "Aha, " << alder << " år i år!" << endl;

   for (int i=alder+1; i<=65; i++ ) {
     cout << "Fyller " << i << " år " << fodd+i << endl;
   }
   cout << "Sen får du gå hem!" << endl;


    return 0;
}
