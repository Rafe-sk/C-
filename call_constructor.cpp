#include <iostream>
using namespace std;
int add(int a, int b)
{
    int z;
    z=a+b;
    cout<<z;
    return z;
}


int main()
{
    int x=5,y=7,sum;
    sum= add(x,y);
}