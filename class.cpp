#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;

public:
    void setData(int r, string n = " Areeb king")
    {
        roll = r;
        name = n;
    }

    void getData()
    {
        cout << roll << " ";
        cout << name;
    }

    void setDetails()
    {
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }
};

int main()
{
    Student s1, s2, s3;
    s1.setData(1);
    s1.getData();
    cout << endl;
    s2.setData(2, " Faheem Don");
    s2.getData();
    cout << endl;
    s3.setDetails();
    s3.getData();
    cout << endl;
    return 0;
}