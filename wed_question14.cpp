#include <iostream>
using namespace std;
int main()
{
    int n1 = 1, n2, flag;
    cout << "Enter the Ending number :- ";
    cin >> n2;
    int i = 1;
    do
    {
        flag = 0;
        i = 1;
        do
        {
            if (n1 % i == 0)
            {
                flag++;
            }
            i++;

        } while (i <= n1);

        if (flag == 2)
        {
            cout << n1 << " ";
        }
        n1++;

    } while (n1 <= n2);
    cout<<endl;
}