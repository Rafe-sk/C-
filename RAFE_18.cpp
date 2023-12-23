// Problem Statement: Create a C++ program for a flight booking system. Define a base class
//  Flight with attributes like flight number, destination, and ticket price. Derive classes like 
// EconomyClass and BusinessClass from Flight. Implement functions to book flights, 
// calculate ticket costs, and display booking information.

#include <iostream>
using namespace std;

class Flight
{
public:
    int flightnumber;
    string departure, destination;
    int price;
    int n;
};

class Economy : public Flight
{
public:
    void setData()
    {
        cout << "Enter Flight Number:";
        cin >> flightnumber;
        cout << "Enter Departure:";
        cin >> departure;
        cout << "Enter Destination:";
        cin >> destination;
        cout << "Number of tickets:";
        cin >> n;
    }

    void setPrice()
    {
        price = 5000 * n;
    }

    void getData()
    {
        cout << "Ticket Information" << endl;
        cout << "Flight number:" << flightnumber << endl;
        cout << "Departure:" << departure << endl;
        cout << "Destination:" << destination << endl;
        cout << "Total Price:" << price << endl;
        cout << "Price per Ticket:" << price / n << endl;
    }
};

class Buisness : public Flight
{
public:
    void setData()
    {
        cout << "Enter Flight Number:";
        cin >> flightnumber;
        cout << "Enter Departure:";
        cin >> departure;
        cout << "Enter Destination:";
        cin >> destination;
        cout << "Number of tickets:";
        cin >> n;
    }

    void setPrice()
    {
        price = 15000 * n;
    }

    void getData()
    {
        cout << "Ticket Information" << endl;
        cout << "Flight number:" << flightnumber << endl;
        cout << "Departure:" << departure << endl;
        cout << "Destination:" << destination << endl;
        cout << "Total Price:" << price << endl;
        cout << "Price per Ticket:" << price / n << endl;
    }
};

int main()
{
    int var;
    cout << "Welcome To Flight booking Apllication\nFor Economy Enter 1\nFor Buisness Enter 2" << endl;
    cout << "Enter:";
    cin >> var;

    if (var == 1)
    {
        Economy book;
        book.setData();
        book.setPrice();
        cout << endl;
        cout << endl;
        book.getData();
    }
    else if (var == 2)
    {
        Buisness book;
        book.setData();
        book.setPrice();
        cout << endl;
        cout << endl;
        book.getData();
    }
    else
    {
        cout << "Invalid  Choice";
    }
}