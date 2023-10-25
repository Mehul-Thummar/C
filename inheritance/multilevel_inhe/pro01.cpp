#include <iostream>
using namespace std;
class Base1
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

class Base2
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

class Derived : public Base1, public Base2
{
public:
    void Product()
    {
        cout << "product of A and B is: " << a * b << endl;
    }
};

int main()
{
    Derived d;
    d.seta();
    d.setb();
    d.Product();
}
