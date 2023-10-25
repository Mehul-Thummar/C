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

class Derived1 : public Base
{
protected:
    int b;

public:
    void setb()
    {

        cout << "Enter B: ";
        cin >> b;
    }

    void addition()
    {
        cout << "Addition of A & B is : " << a + b << endl;
    }
};

class Derived2 : public Base
{
protected:
    int c;

public:
    void setc()
    {

        cout << "Enter C: ";
        cin >> c;
    }

    void Product()
    {
        cout << "product of A and B is: " << a * c << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.seta();
    d1.setb();
    d1.addition();

    Derived2 d2;
    d2.seta();
    d2.setc();
    d2.Product();
}

// Factorial No & Table