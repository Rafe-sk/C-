#include <iostream>
using namespace std;

int relationship(int a, int b)
{
    if (a==b)
    {
        
        cout<<"a=b"<<endl;
        return 0;
    } 
    else if(a>b)
    {
        cout<<"a>b"<<endl;
        return 1;
    }
    else
    {
        cout<<"a<b"<<endl;
        return -1;
    }
    
}


int main()
{
    int a,b;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    relationship(a,b);
}