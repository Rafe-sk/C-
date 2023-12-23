#include <iostream>
using namespace std;

class Student
{
public:
    int percentage;
    string name, dateofbirth,address;
};

class Information : public Student
{
public:
    void getName()
    {
        cout << "Enter Full Name:";
        getline(cin,name);
    }

    void setName()
    {
        cout<<"Name:"<<name<<endl;
    }

    void getDob()
    {
        cout<<"Enter Date of Birth:";
        getline(cin,dateofbirth);
    }

    void setDob()
    {
        cout<<"Date of Birth:"<<dateofbirth<<endl;
    }

    void getAddress()
    {
        cout<<"Enter your Address:";
        getline(cin,address);
    }

    void setAddress()
    {
        cout<<"Address:"<<address;
    }

    int getPercent()
    {
        cout<<"Enter Percentage:";
        cin>>percentage;
    }

    int setPercent()
    {
        cout<<"Percent:"<<percentage;
        if(percentage<60)
        {
            cout<<endl<<"You are not eligible"<<endl;
        }
        else if(percentage>60)
        {
            if(percentage>=60 && percentage<70)
            {
                cout<<"You are eligible for B.Tech Information Technology";
            }
            else if(percentage>=70 && percentage<80)
            {
                cout<<"You are eligible for B.Tech Electronics and Telecommunication";
            }
            else if(percentage>=80 && percentage<90)
            {
                cout<<"You are eligible for B.Tech Computer Science";
            }
            else
            {
                cout<<"You are eligible for B.Tech Artificial Science and Datasience";
            }
        }
    }
};

int main()
{
    Information nm,db,ad,p;
    nm.getName();
    db.getDob();
    ad.getAddress();
    p.getPercent();
    nm.setName();
    db.setDob();
    ad.setAddress();
    cout<<endl;
    p.setPercent();
}