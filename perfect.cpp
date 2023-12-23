#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter number to check perfect or not:";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"number entered is perfect"<<endl;
    }
    else{
        cout<<"number entered is not perfect"<<endl;
    }
}