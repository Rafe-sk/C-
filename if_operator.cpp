#include <iostream>
using namespace std;
int main()
{
    int a = 50;
    int b = 2;
    int c;
    {
        cout << "1 - Condition is true" << endl;
    }

    if (a || b)
    {
        cout << "2 - Condition is true" << endl;
    }
    /* After changing the values of a and b variable */
    a = 4;
    b = 60;
    if (a && b)
    {
        cout << "3 - Condition is true" << endl;
    }
    else
    {
        cout << "4 - Condition is not true" << endl;
    }
    if (!(a && b))
    {
        cout << "5 - Condition is true" << endl;
    }
    return 0;
}