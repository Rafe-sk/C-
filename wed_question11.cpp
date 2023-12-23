#include <iostream>
using namespace std;
int main()
{
    int n;
    int i=1;
    int sum=0;
    int count=-1;

    while(n!=0)
    {
        cout<<"Enter number:";
        cin>>n;
        sum=sum+n;
        i++;
        count+=1;
    }
    cout<<"Sum:"<<sum<<endl;
    cout<<"Total number:"<<count<<endl;
    cout<<"Average:"<<sum/count<<endl;
}