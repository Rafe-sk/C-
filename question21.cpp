#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum is:"<<sum<<endl;
}