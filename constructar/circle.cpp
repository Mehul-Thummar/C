#include <iostream>
using namespace std;

class circle
{
private:
    int red;

public:
    circle(int r)
    {
        red = r;
    }

    void area(int r)
    {
        cout << 3.14 * r * r << endl;
    }
    void cum(int r)
    {
        cout << 3.14 * 2 * r << endl;
    }
};

int main()
{
    int a;
    cout << "Enter Cricle Area: ";
    cin >> a;
    circle r1(a);

    r1.area(a);
    r1.cum(a);

    return 0;
}