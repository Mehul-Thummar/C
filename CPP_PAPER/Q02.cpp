#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    void set()
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }
};

class student : public person
{
protected:
    string id;
    int std;

public:
    void get()
    {
        cout << "Enter ID No. : ";
        cin >> id;
        cout << "Enter Standard : ";
        cin >> std;
    }

    void details()
    {
        cout << "\n-----------------------------\n";
        cout << "ID of Student : " << id << endl;
        cout << "Standard : "<<std<<endl;
        cout << "Name of Student : " << name << endl;
        cout << "Age of Student : " << age << endl;
    }
};

int main()
{
    student s;
    s.set();
    s.get();
    s.details();

    return 0;
}