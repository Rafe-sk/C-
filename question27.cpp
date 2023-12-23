#include <iostream>
using namespace std;
int main()
{
    string input,reversed;
    cout<<"Enter number:";
    cin>>input;

    for(int i=input.length()-1;i>=0;i--)
    {
        reversed=reversed+input[i];
    }
    cout<<"Reversed number="<<reversed<<endl;
}