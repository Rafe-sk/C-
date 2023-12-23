#include <iostream>
using namespace std;

int power(int base, int power)
{
    int i = 1;
    int cal = 1;
    do
    {
        cal = cal * base;
        i++;
    } while (i <= power);
    // for(int i=1;i<=power;i++)
    // {
    //     cal=cal*base;
    // }
    // return cal;
    return cal;
}

int main()
{
    int n;
    int p;
    cout << "Enter number to calculate it's power:";
    cin >> n;
    cout << "Enter power of the number:";
    cin >> p;
    cout << "Power of number:" << power(n, p) << endl;
}