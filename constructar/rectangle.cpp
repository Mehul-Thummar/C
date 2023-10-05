#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, height;

public:
    Rectangle(int l, int h)
    {
        length = l, height = h;
    }
    void area(int l, int h)
    {
        cout << l * h << endl;
    }
    void circ(int l, int h)
    {
        cout << 2 * (l + h) << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter length:";
    cin >> a;
    cout << "Enter Height:";
    cin >> b;

    Rectangle r1(a,b);
    r1.area(a, b);
    r1.circ(a, b);

    return 0;
}