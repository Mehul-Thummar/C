#include <iostream>
using namespace std;

class arith
{
    int a, b, t, m;

public:
    arith()
    {

        cout << "Enter A value: ";
        cin >> a;
        cout << "Enter B value: ";
        cin >> b;
        t = a + b;
        cout << "TOTAL: " << t << endl;
    }
    arith(int a, int b)
    {
        cout << "Enter A value: ";
        cin >> a;
        cout << "Enter B value: ";
        cin >> b;
        m = a * b;
        cout << "MULLTY: " << m << endl;
    }
};

int main()
{
    int a, b;
    arith a1;
    arith a2(a, b);

    return 0;
}