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

    // Increment
    box operator++(int)
    {
        box t;

        t.l = l++;
        t.w = w++;
        t.h = h++;
    }

    // Decrement
    box operator--(int)
    {
        box t;

        t.l = l--;
        t.w = w--;
        t.h = h--;
    }
};

int main()
{
    box b1;
    b1.setdata(8, 8, 8);
    cout << "volume of box b1: " << b1.getdata() << endl;

    b1++;
    cout << "After Increment volume of box b1: " << b1.getdata() << endl;
    b1--;
    cout << "After Decrement volume of box b1: " << b1.getdata() << endl;
}