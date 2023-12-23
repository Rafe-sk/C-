#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter number to check number is prime or not:";
    cin >> num;

    if (num < 0)
    {
        cout << "Please enter greater than 0" << endl;
    }
    else if (num == 1)
    {
        cout << "1 is neither prime nor composite";
    }
    else if (num>1)
    {
        for(int i=2;i<=(num/2);i++)
        {
            if(num%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime==false)
    {
        cout<<"number is not prime:"<<num<<endl;
    }
    else{
        cout<<"number is  prime:"<<num<<endl;
    }
}