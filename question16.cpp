#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    for(int i=0;i<100;i++)
    {
        cout<<name<<endl;
    }
}