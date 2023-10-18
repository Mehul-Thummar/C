#include <iostream>
using namespace std;

class larg
{
    friend larg add(larg, larg);
    int a, b;

public:
    void setdata(int c, int d)
    {
        a = c;
        b = d;
    }
};

larg add(larg x, larg y)
{
    larg t;
    t.a = x.a > y.a;
    t.b = x.b < y.b;

    return t;
}

int main()
{
    int a, b;
    larg c, e;

    cout << "Enter value of A : ";
    cin >> a;

    cout << "Enter value of B : ";
    cin >> b;

    c.setdata(a, b);
    e = add(c, e);

    if (a > b)
    {
        cout << "A is largest." << endl;
    }
    else
    {
        cout << "B is largest." << endl;
    }
}