#include <iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cout<<"Enter number upto which you want Fibonacci series:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
}