#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Length of Array:";
    cin>>n;
    int i=0;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element of array: ";
        cin>>arr[i];
    }

    int  largest=arr[0];

    while(i<n)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];  
        }
        i++;
    }
    cout<<"Largest element:"<<largest<<endl;
}