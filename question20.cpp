#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,counter=0;
    cout<<"Enter upto which you want sum: ";
    cin>>n;

    for(int i=2;i<=n;i++)
    {
        counter=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                counter++;
            }
        }
        if(counter==0)
        {
            sum=sum+i;
        }
    }
    cout<<"The sum is:"<<sum<<endl;
}