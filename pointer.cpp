#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *ptr = &x;
    cout << *ptr << endl;
    cout << ptr << endl;
    *ptr = 4;
    cout << *ptr<<endl;
    cout << x << endl;
    cout << &x<<endl;
}