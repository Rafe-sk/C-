// You are tasked with creating an inventory management system for a
// small store. The system should use object-oriented principles in C++. Your
// program should have the following features:
// Create a Product class that represents a product in the inventory.
// Each Product object should have the following attributes:
// Product ID (an integer)
// Product Name (a string)
// Price (a floating-point number)
// Quantity in stock (an integer)
// Implement a parameterized constructor for the Product class to
//  initialize the attributes when a new product is added to the inventory.
#include <iostream>
using namespace std;

class Product
{
private:
    int ID, quantity;
    string name;
    float price;

public:
    void setId()
    {
        cout << "Enter product id: " << endl;
        cin >> ID;
    }

    void getId()
    {
        cout << "Product Id: " << ID << endl;
    }

    void setName()
    {
        cout << "Enter product name: " << endl;
        cin >> name;
    }

    void getName()
    {
        cout << "Product name: " << name << endl;
    }

    void setQuantity(int n)
    {
        quantity = n;
    }

    void getQuantity()
    {
        cout << "Quantity: " << quantity << endl;
    }

    void setPrice(int rs)
    {
        price = rs;
    }

    void getPrice()
    {
        cout << "Product price: " << price << endl;
    }
};

int main()
{
    Product id, quan, n, p;
    id.setId();
    n.setName();
    quan.setQuantity(5);
    p.setPrice(500);
    id.getId();         // dis
    n.getName();        // dis
    quan.getQuantity(); // dis
    p.getPrice();       //dis
}