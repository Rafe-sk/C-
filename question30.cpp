#include <iostream>
using namespace std;
int main()
{
    int n,fact;
    cout<<"Enter number to find factorial: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Formula:"<<n;
    for(int j=n-1;j>0;)
    {
        cout<<"*"<<j--;
    }
    cout<<"\nFactorial="<<fact<<endl;
}