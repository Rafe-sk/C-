#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter number upto which you want to calculate sum of even number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum of even number from 1 to "<<n<<" is:"<<sum<<endl;
}