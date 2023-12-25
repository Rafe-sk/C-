#include <iostream>
using namespace std;
int main()
{
    int fact=1,n;
    cout<<"enter a number";
    cin>>n;
    for(int i=fact;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}