#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int i=1;
    int first=1,second=1,next;
    while(i<=n)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
        i++;
    }
}