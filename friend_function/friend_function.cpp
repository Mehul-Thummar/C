#include <iostream>
using namespace std;

class rect
{
    friend rect add(rect, rect, rect, rect);
    int l, w;

public:
    void setdata(int a, int b)
    {
        l = a;
        w = b;
    }
    int getdata()
    {
        return l * w;
    }
};
rect add(rect m, rect n, rect x, rect y)
{
    rect t;

    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;

    return t;
}

int main()
{
    rect a, b, c, d, e;
    a.setdata(4, 5);
    cout << "area of rectrangle a is: " << a.getdata() << endl;
    b.setdata(7, 8);
    cout << "area of rectrangle b is: " << b.getdata() << endl;
    d.setdata(2, 3);
    cout << "area of rectrangle d is: " << d.getdata() << endl;
    e.setdata(6, 9);
    cout << "area of rectrangle e is: " << e.getdata() << endl;

    c = add(a, b, d, e); // 7 7
    cout << "area of rectrangle c is: " << c.getdata() << endl;
}