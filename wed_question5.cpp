#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter Password:";
    cin>>i;
    int password=1234;
    while(i!=password)
    {
        cout<<"Incorrect password:";
        cin>>i;
    }
    cout<<"Correct password"<<endl;
}