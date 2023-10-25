#include <iostream>
using namespace std;
class Base
{
protected:
    int n;

public:
    void setn()
    {
        cout << "Enter Value: ";
        cin >> n;
    }
};

class Derived1 : public Base
{
protected:
    int i, fact = 1;

public:
    void setfact()
    {

        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        cout << "Factactorial of " << n << " is : " << fact;
    }
};

class Derived2 : public Derived1
{
protected:
    int i, j;

public:
    void table()
    {
        j = n;
        for (i = 1; i <= 10; ++i)
        {
            cout << j << " * " << i << " = " << j * i << endl;
        }
    }
};

int main()
{

    Derived2 d2;
    d2.setn();
    d2.setfact();
    cout << "\n";
    // d2.setj();
    d2.table();

    // Derived1 d1;
    // d1.setn();
    // d1.setfact();
}