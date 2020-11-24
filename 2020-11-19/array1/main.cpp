#include <iostream>
using namespace std;
// Arrayer (fält)
int main()
{
  // int minArray[1000]; // 1000 platser, fron 0 - 999

   //minArray[1]=4;
   //cout << minArray[1] << endl;

/*
   for (int i=0; i<1000; i++)
   {
      minArray[i] = i+5;
   }

   for (int i=0; i<1000; i++)
   {
      if ( (minArray[i] % 3) == 0 )
      {
          cout << minArray[i] << " ";

      }

   }
*/
   float hojd[100];
   int counter=-1;
   /*
   for (int i=0; i <100; i++)
   {
       cout << "Hur högt hoppade du? Ange höjden ";
       cin >> hojd[i];
       counter++;
       if (hojd[i] < 0) {
        break;
       }

   }
   */

   do {
       cout << "Hur högt hoppade du? Ange höjden ";
       counter++;
       cin >> hojd[counter];


   } while (hojd[counter] > 0);


   for (int i=0; i<counter; i++)
   {
       cout << hojd[i] << endl;
   }



    return 0;
}
