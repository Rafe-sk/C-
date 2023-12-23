#include <iostream>
using namespace std;
int main()
{
    int i=2;
    int n;
    cout<<"Enter number:";
    cin>>n;
    bool isPrime=true;
    while(i<n/2)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
        i++;
    }
    if(isPrime==true)
    {
        cout<<"Number is Prime:"<<n<<endl;
    }
    else{
        cout<<"Number is not Prime:"<<n<<endl;
    }
}