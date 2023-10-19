// unary operator overloading pre increment
#include <iostream>
using namespace std;
class Box
{
    int l, w, h;

public:
    void setData(int a, int b, int c)
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

    Box operator++()
    {
        Box j;
        j.l = ++l;
        j.w = ++w;
        j.h = ++h;
        return j;
    }

    // Decriment

    Box operator--()
    {
        Box j;
        j.l = --l;
        j.w = --w;
        j.h = --h;
        return j;
    }
};

int main()
{
    Box b1;
    b1.setData(5, 5, 5);
    cout << "Volume of B1 is: " << b1.getdata() << endl;

    ++b1;
    cout << "After Increment volume of box b1: " << b1.getdata() << endl;
    
    --b1;
    cout << "After Decrement volume of box b1: " << b1.getdata() << endl;
    
}