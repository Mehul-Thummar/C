#include <iostream>
using namespace std;

class triangle
{
private:
    int base, height;

public:
    int b = base, h = height;
    void area(int b, int h)
    {
        cout << 0.5 * b*h << endl;
    }
    void circ(int b, int h)
    {
        cout << 3 * b << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter Base:";
    cin>> a;
    cout << "Enter Height:";
    cin>> b;

    triangle r1;
    r1.area(a, b);
    r1.circ(a, b);

    return 0;
}