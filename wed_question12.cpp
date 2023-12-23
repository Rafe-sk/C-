#include <iostream>
using namespace std;
int main()

{
    int i;
    cout << "Guess the Secret number:";
    cin >> i;
    int number = 1234;
    while (i != number)
    {
        cout << "Wrong Number:";
        cin >> i;
    }
    cout << "Correct Number" << endl;
}