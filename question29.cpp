#include <iostream>
using namespace std;
int main()
{
    // char alpha[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    // for(int i=0;i<26;i++)
    // {
    //     cout<<alpha[i]<<"-"<<(int)alpha[i]<<",";
    // }
    // cout<<endl;
    // return 0;

    char c;
    cout<<"Enter character:";
    cin>>c;
    int asciivalue=(int)c;
    cout<<asciivalue;
}