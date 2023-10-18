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
    int getdata()
    {
        return a, b;
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

    cout << "Enter a Valu A :";
    cin >> a;

    cout << "Enter a Valu B :";
    cin >> b;

    c.setdata(a, b);
    e = add(c, e);
    cout << e.getdata();
    if (a > b)
    {
        cout << "A is largest."<<endl;
    }
    else
    {
        cout << "B is largest."<<endl;
    }
}