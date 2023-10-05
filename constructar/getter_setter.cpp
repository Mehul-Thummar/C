#include <iostream>
using namespace std;

class person
{
private:
    int age;
    string city, name;

    // setter:

public:
    void setname(string n)
    {
        name= n ;
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
        cout <<"PERSON NAME:" << name << endl;
    }
    void getcity()
    {
        cout <<"PERSON CITY:" << city << endl;
    }
    void getage()
    {
        cout <<"PERSON AGE:" << age << endl;
    }
};

int main()
{
    int a[5],i;
    string b[5], c[5];

        for(i=0; i<=1; i++)
    {
        
        cout<< "Name:";
        cin>> b[i];

        cout<< "City:";
        cin>> c[i];

        cout<< "Age:";
        cin>> a[i];

    }
    person p1;

    p1.setage(a[0]);
    p1.setname(b[0]);
    p1.setcity(c[0]);
    
    p1.getage();
    p1.getname();
    p1.getcity();

    person p2;

    p2.setage(a[1]);
    p2.setname(b[1]);
    p2.setcity(c[1]);
    
    p2.getage();
    p2.getname();
    p2.getcity();
    

    return 0;
}
