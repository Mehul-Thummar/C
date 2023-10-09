#include <iostream>
using namespace std;

class solid
{
    int base, height, length, weith;

public:
    solid(int b, int h, int l, int w)
    {
        base = b;
        height = h;
        length = l;
        weith = w;
    }
    // triangle
    void area(int b, int h, int l)
    {
        cout << 12 * b * h * l << endl;
    }
    // rectriangle
    void area(int l, int w, int h)
    {
        cout << l * w * h << endl;
    }
    // square
    void area(int l)
    {
        cout << l * l * l << endl;
    }
    
};

int main()
{
    int a, b, c, d;
    cout << "Enter base value:";
    cin >> a;
    cout << "Enter height value:";
    cin >> b;
    cout << "Enter length value:";
    cin >> c;

    solid r1(a, b, c, d);
    r1.area(a, b, c);
    r1.area(c, d, b);
    r1.area(c);

    return 0;
}