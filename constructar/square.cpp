#include <iostream>
using namespace std;

class square
{
private:
    int length, height;

public:
    square(int l, int h)
    {
        l = length;
        h = height;
    }
    void area(int l, int h)
    {
        cout << l * h << endl;
    }
    void circ(int l, int h)
    {
        cout << l * h << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter length:";
    cin >> a;
    cout << "Enter Height:";
    cin >> b;

    square r1(a,b);
    r1.area(a, b);
    r1.circ(a, b);

    return 0;
}