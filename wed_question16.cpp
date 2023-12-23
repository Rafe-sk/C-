#include <iostream>
using namespace std;

int addition(int i, int j)
{
    int sum;
    sum=i+j;
    return sum;
}

int main()
{
    int a, b,c;
    cout << "Enter 1st number:";
    cin >> a;
    cout << "Enter 2nd number:";
    cin >> b;
    cout<<"Sum:"<<addition(a,b)<<endl;
}