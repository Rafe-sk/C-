#include <iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Plane Height";
    cin>>height;
    cout<<height;

    if(height>=10000)
    {
        cout<<"Go Around";
    }
    else if(height<=5000 && height>=2000)
    {
        cout<<"open gear for tyres";
    }
    else if(height<=2000 && height>=1000)
    {
        cout<<"open flaps";
    }
    else if (height<=1000)
    {
        cout<<"Land the Plane and apply reverse thrust";
    }

    return 0;

}