#include <iostream>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter the sentence:";
    getline(cin,sentence);
    int count=0;
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'||
        sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U')
        {
            count++;
        }
    }
    cout<<"vowel found: "<<count<<endl;
}