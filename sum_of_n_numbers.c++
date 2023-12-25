#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0, n;
    cout << "enter a natural number";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
}