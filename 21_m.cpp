#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << "element of array";
        cin >> array[i];
    }

    int majorityElement = array[0];
    int count = 0;
    int i = 0;
    do
    {
       
        if (array[i] == majorityElement)
        {
            count++;
        }
        else
        {
            count--;
        }
        i++;
    }
    while (i<size);
    
    


    if (count > 1)
    {
        cout << " majority element"<<majorityElement<<endl;
    }
    else
    {
        cout << " no majority element:"  << endl;
    }
} 