#include <iostream>
using namespace std;

string Str(string a)
{
    string reversed;
    for(int i=a.length()-1;i>=0;i--)
    {
        reversed=reversed+a[i];
    }
    return reversed;
}

int main()
{
    string  input;
    cout<<"Enter Sring:";
    cin>>input;
    cout<<"Reversed:"<<Str(input)<<endl;
}