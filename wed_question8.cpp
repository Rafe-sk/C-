#include <iostream>
using namespace std;
int main()
{
    string input,reversed;
    cout<<"Enter string:";
    cin>>input;
    int i=input.length()-1;

    while(i>=0)
    {
        reversed=reversed+input[i];
        i--;
    }
    cout<<"Reversed string:"<<reversed<<endl;
}