#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 number:-";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Number 1 is greater: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Number 2 is greater: " << b << endl;
    }
    else
    {
        cout << "Number 3 is greater: " << c << endl;
    }
} 