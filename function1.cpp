#include <iostream>
using namespace std;

int great(int x, int y)
{
    if (x>y)
    {
        cout<<x<<"is greater number";
    }
    else
    {
        cout<<y<<"is greater number";
    }
    return 0;
}


int main()
{
    int a,b;
    cout<<"Enter first  number: "<<endl;
    cin>>a;

    cout<<"Enter second  number: "<<endl;
    cin>>b;
    
    great(a,b);
}