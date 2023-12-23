#include <iostream>
using namespace std;
int main()
{
    int n,multiple;
    cout<<"enter number: ";
    cin>>n;


    for(int i=1;i<=10;i++)
    {
        multiple=n*i;
        cout<<n<<"*"<<i<<"="<<multiple<<endl;
    }

}