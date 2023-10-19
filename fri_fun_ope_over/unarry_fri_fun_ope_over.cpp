#include <iostream>
using namespace std;

class box
{

    int l, w, h;

public:
    void setdata(int a, int b, int c)
    {
        l = a;
        w = b;
        h = c;
    }
    int getdata()
    {
        return l * w * h;
    }

    friend box operator+(box m, box n)
    {
        box t;

        t.l = m.l + n.l;
        t.w = m.w + n.w;
        t.h = m.h + n.h;

        return t;
    }

    // Increment

    friend box operator++(box m)
    {
        box t;

        t.l = ++m.l;
        t.w = ++m.w;
        t.h = ++m.h;

        return t;
    }

    // Decriment

    friend box operator--(box m)
    {
        box t;

        t.l = --m.l;
        t.w = --m.w;
        t.h = --m.h;

        return t;
    }
};

int main()
{
    box b1, b2, b3, b4, b5;
    b1.setdata(2, 2, 2);
    cout << "volume of box b1: " << b1.getdata() << endl;

    b2.setdata(3, 3, 3);
    cout << "volume of box b2: " << b2.getdata() << endl;

    b3 = b1 + b2;
    cout << "volume of box b3: " << b3.getdata() << endl;

    b4 = ++b3;
    cout << "After Increment volume of box b4: " << b4.getdata() << endl;

    b5 = --b3;
    cout << "After Decrement volume of box b4: " << b5.getdata() << endl;
}