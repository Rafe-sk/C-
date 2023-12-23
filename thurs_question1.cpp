#include <iostream>
using namespace std;

int leap(int m)
{
    if((m%4==0 && m%100!=0) || m%400==0)
    {
        return true;
    }
}

int main()
{
    int n;
    cout<<"Enter year to check leap or year or not:";
    cin>>n;
    
    if(leap(n)==true)
    {
        cout<<"Entered year is leap year:"<<n<<endl;
    }
    else
    {
        cout<<"Entered year is not leap year:"<<n<<endl;   
    }
}