#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter length of array:";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1<<" element of array:";
        cin >> array[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+array[i];
    }
    int avg=sum/n;
    cout<<"Average:"<<avg<<endl;
}