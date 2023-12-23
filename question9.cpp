#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "Enter an alphabet to check vowel or not:";
    cin >> alpha;

    if (isalpha(alpha))
    {
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' 
        || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
        {
            cout << "Entered alphabet is vowel: " << alpha << endl;
        }
        else
        {
            cout << "Entered alphabet is consonant: " << alpha << endl;
        }
    }
    else
    {
        cout << "Please enter alphabet "<<endl;
    }
}