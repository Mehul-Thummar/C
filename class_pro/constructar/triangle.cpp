#include <iostream>
using namespace std;

class triangle
{
private:
    int base, height;

public:
    triangle(int b, int h)
    {
        base =b;
        height = h;

    }

    void area(int b, int h)
    {
        cout << 0.5 * b * h << endl;
    }
    void circ(int b)
    {
        cout << 3 * b << endl;
    }
};

int main()
{
    int a,b;
    cout << "Enter base value:";
    cin >> a;
    cout << "Enter height value:";
    cin >> b;
    triangle r1(a,b);
    r1.area(a,b);
    r1.circ(a);

    return 0;
}