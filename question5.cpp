#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,x,y,z,ans;
    cout<<"Enter 8 numbers:- ";
    cin>>a>>b>>c>>d>>e>>x>>y>>z;
    float q=1/x;
    float u=1/y;
    float o=1/z;
    ans=(a+b+c+d/e*q*u*o);
    cout<<"Answer is:- "<<ans<<endl;
}