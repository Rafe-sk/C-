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
        cout<<"Enter "<<i+1<<" Element of array:";
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int j=1;j<n;j++)
    {
        if(arr[j]<smallest)
        {
            smallest=arr[j];
        }
    }
    cout<<"Smallest element in the array:"<<smallest<<endl;
}