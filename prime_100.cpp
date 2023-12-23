#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int total = 0;
    int sum = 0;
    bool isPrime = true;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
            }
        }
        if (isPrime == true)
        {
            cout << i << ",";
            total++;
            sum = sum + i;
        }
    }
    cout << endl;
    cout << "Total no:" << total << endl;
    cout << "sum=" << sum << endl;
    return 0;
}