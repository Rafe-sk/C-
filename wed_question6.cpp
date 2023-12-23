#include <iostream>
using namespace std;
int main()
{
    
    int n,fact;
    cout<<"Enter number:";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial:"<<fact<<endl;
}