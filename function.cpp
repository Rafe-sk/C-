#include <iostream>
using namespace std;

inline int add(int x, int y, int r)
{
    int z;
    z=x+y+r;
    return z;
}


int main()
{
    int a,b,r,sum;
    cout<<"Enter value of a:"<<endl;
    cin>>a;

    cout<<"Enter value of b:"<<endl;
    cin>>b;

     cout<<"Enter value of r:"<<endl;
    cin>>r;

    sum=add(a,b,r);
    cout<<"Addition is:" <<sum;
}