#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    void seta()
    {
        cout << "Enter A: ";
        cin >> a;
    }
};

class derived1 : public Base
{
protected:
    int b;

public:
    void setb()
    {

        cout << "Enter B: ";
        cin >> b;
    }
};

class Derived2
{
protected:
    int c;

public:
    void setc()
    {

        cout << "Enter C: ";
        cin >> c;
    }
};

class test : public derived1, public Derived2
{
public:
    void Product()
    {
        cout << "product of A,B & C is: " << a * b * c << endl;
    }
};

int main()
{
    test t;
    t.seta();
    t.setb();
    t.setc();
    t.Product();
}
