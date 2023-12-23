#include <iostream>
using namespace std;

bool Prime(int a)
{
    bool isPrime;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            isPrime=false;
            break;
        }
        else
        {
            isPrime=true;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;

    if(Prime(n)==true)
    {
        cout<<"Number is Prime:"<<n<<endl;
    }
    else
    {
        cout<<"Number is not Prime:"<<n<<endl;
    }
}