#include <iostream>
using namespace std;
// Ett program som översätter från engelska till svenska.
int main()
{
    string s;
    bool hittat = false;
	// En array kan innehålla det mesta. Vi måste bara tala om vad den ska innehålla och hur många
    string engelska[] = {"kitchen", "car", "yellow", "fast", "color", "chair", "house", "lamp", "mailbox"};
    string svenska[] = {"kök", "bil", "gul", "snabb", "färg", "stol", "hus", "lampa", "brevlåda"};

    cout << "Please enter an English word: ";
    cin >> s;
    int i;
    for (i=0; i<9; i++ )
    {
        if ( s == engelska[i]) {
            hittat = true;  // Här blir hittat true
            break;
        }
    }
   
    if (hittat) {
    cout << engelska[i] << " is called " << svenska[i] << " in Swedish" << endl;
    }
    else {
        cout << s << " is not an English word we know" << endl;
    }
    return 0;
}
