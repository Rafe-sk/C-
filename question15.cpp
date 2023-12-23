#include <iostream>
using namespace std;
int main()
{
    char gender;
    cout << "\nFor Male Enter m \nFor Female enter f" << endl;
    cout << "Gender: ";
    cin >> gender;
    if (gender == 'm')
    {
        int age;
        cout << "Enter your age: " << endl;
        cin >> age;
        char season;
        cout << "For Summer Enter s \nFor Winter Enter w \nFor Monsoon Enter m: " << endl;
        cout << "Enter Season: " << endl;
        cin >> season;
        if (season == 's' && (age >= 0 && age <= 50))
        {
            cout << "wear cotton clothes";
        }
        else if (season == 'w' && (age >= 0 && age <= 50))
        {
            cout << "wear jacket";
        }
        else if (season == 'm' && (age >= 0 && age <= 50))
        {
            cout << "wear raincoat";
        }
    }

    else if (gender == 'f')
    {
        int age;
        cout << "Enter your age: " << endl;
        cin >> age;
        char season;
        cout << "For Summer Enter s \nFor Winter Enter w \nFor Monsoon Enter m: " << endl;
        cout << "Enter Season: " << endl;
        cin >> season;
        if (season == 's' && (age >= 0 && age <= 50))
        {
            cout << "wear cotton clothes";
        }
        else if (season == 'w' && (age >= 0 && age <= 50))
        {
            cout << "wear jacket";
        }
        else if (season == 'm' && (age >= 0 && age <= 50))
        {
            cout << "wear raincoat";
        }
    }
    else
    {
        cout << "we don't support LGTV" << endl;
    }
}