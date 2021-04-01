#include <iostream>
using namespace std;
int funkInt(int tal0, int tal1);
int funkArrayInt(int arr[], int antal);
int main()
{
    int falt0[] = {2,89,-4,6,7};
    int falt1[] = {88,-9,-1,0,71};
    int tal0 = funkArrayInt(falt0,5);
    int tal1 = funkArrayInt(falt1,5);
    //cout << "Störst är " << funkInt(funkArrayInt(falt0),funkArrayInt(falt1)) << endl;
    cout << "Störst är " << funkInt(tal0,tal1) << endl;


    return 0;
}
int funkArrayInt(int arr[], int antal)
{
    int temp = arr[0];
    int i;
    for (i=1; i<antal; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}
int funkInt(int tal0, int tal1)
{
    if (tal0 > tal1)
    {
        return tal0;
    }
    return tal1;
}
