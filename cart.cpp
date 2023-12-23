/*Design a program to simulate a simple online shop. Create a class
Product with attributes like name, price, and quantity in stock. Implement
methods for adding products to the shopping cart, calculating the total
cost, and displaying the contents of the cart.*/

#include <iostream>
using namespace std;

class Product
{
private:
    string name;
    int price, quantity;
    int cal;

public:
    void addProduct()
    {
        cout << "Enter Name of The Product:";
        cin >> name;
        cout << "Enter Price of Product:";
        cin >> price;
        cout << "Enter Quantity of Product:";
        cin >> quantity;
    }

    void total()
    {
        cal = price * quantity;
    }

    void displayCart()
    {
        cout << endl
             << endl;
        cout << "Cart" << endl;
        cout << "Name of The Product:" << name << endl;
        cout << "Price of The Product:" << price << endl;
        cout << "Quantity of The Product:" << quantity << endl;
        cout << "Total Price:" << cal << endl;
    }
};

int main()
{
    int n;
    cout << "Enter No. of Product you want to buy:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        Product p1;
        p1.addProduct();
        p1.total();
        p1.displayCart();
        cout<<endl;
    }
}