#include <iostream>
using namespace std;
class Base1
{
protected:
    int n;

public:
    void setA()
    {
        cout << "enter n :";
        cin >> n;
    }
};
class Base2 : public Base1
{
protected:
    int a = 0, b = 1, c = 0;
};
class Derived : public Base2
{
public:
    int i;
    void product()
    {
        for (i = 0; i <= n; i++)
        {

            cout << c << " ";
            a = b + c;
            c = b;
            b = a;
        }
    }
};

int main()
{
    Derived d;
    d.setA();
    d.product();
}