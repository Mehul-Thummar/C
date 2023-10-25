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

class Derived2 : public Base
{
protected:
    int i, j;

public:
    void setj()
    {
        cout << "Enter Value: ";
        cin >> j;
    }
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
    Derived1 d1;
    d1.setn();
    d1.setfact();

    cout << "\n";

    Derived2 d2;
    d2.setj();
    d2.table();
}