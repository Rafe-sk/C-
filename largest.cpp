#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<"element of array";
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int j=0;j<n;j++)
    {
        if(largest<arr[j])
        {
            largest=arr[j];
        }
    }
    cout<<"largest:"<<largest;
}