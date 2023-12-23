#include <iostream>
using namespace std;
int main()
{
    int shop, price;
    cout << "Enter shopping worth: ";
    cin >> shop;

    if (shop < 10000)
    {
        cout << "No discount" << endl;
        price = shop;
        cout << "Price to be collected after discount: " << price;
    }
    else if (shop >= 10000 && shop < 25000)
    {
        cout << "5% discount" << endl;
        price = shop - (0.05 * shop);
        cout << "Price to be collected after discount: " << price;
    }
    else if (shop >= 25000 && shop < 50000)
    {
        cout << "14% discount" << endl;
        price = shop - (0.14 * shop);
        cout << "Price to be collected after discount: " << price;
    }
    else if (shop >= 50000 && shop < 100000)
    {
        cout << "16% discount" << endl;
        price = shop - (0.16 * shop);
        cout << "Price to be collected after discount: " << price;
    }
    else if (shop >= 100000)
    {
        cout << "20% discount" << endl;
        price = shop - (0.20 * shop);
        cout << "Price to be collected after discount: " << price;
    }
}