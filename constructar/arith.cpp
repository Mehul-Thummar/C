#include <iostream>
using namespace std;

class arith
{
    int a, b, t, total;

public:
    arith()
    {

        cout << "Enter A value: ";
        cin >> a;
        cout << "Enter B value: ";
        cin >> b;
    }
    void settotal()
    {
        t = a + b;
        total = t;
    }
    void gettotal()
    {
        cout << "TOTAL: " << t << endl;
    }
};

int main()
{
    arith a1;
    a1.settotal();
    a1.gettotal();

    arith a2;

    return 0;
}