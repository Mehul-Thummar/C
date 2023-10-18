#include <iostream>
using namespace std;
class test
{
    int m, s;

public:
    void setdata(int, int);
    void getadd()
    {
        cout << "Total is: " << m + s << endl;
    }

    void getsub()
    {
        cout << "Total is: " << m + s << endl;
    }
};

void test ::setdata(int a, int b)
{
    m = a;
    s = b;
}

int main()
{
    test t[5];
    int i, a, b;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter A : ";
        cin >> a;

        cout << "Enter B : ";
        cin >> b;
        t[i].setdata(a, b);
    }

    cout << endl
         << endl;

    for (i = 0; i < 3; i++)
    {
        if (i == 2)
            t[i].getadd();
        else
            t[i].getsub();
    }
}