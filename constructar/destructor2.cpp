#include <iostream>
using namespace std;

class person
{
private:
    int age;
    string city, name;

public:
    person()
    {
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the City:";
        cin >> city;
        cout << "Enter the Age:";
        cin >> age;
    }
    ~person()
    {
        cout<< "Person " <<name <<" is destructed"<<"\n";
    }

    // setter:

    void setname(string n)
    {
        name = n;
    }
    void setcity(string c)
    {
        city = c;
    }
    void setage(int a)
    {
        age = a;
    }

    // getter:

    void getname()
    {
        cout << "PERSON NAME:" << name << endl;
    }
    void getcity()
    {
        cout << "PERSON CITY:" << city << endl;
    }
    void getage()
    {
        cout << "PERSON AGE:" << age << endl;
    }
};

int main()
{
    person p1,p2,p3;

    return 0;
}