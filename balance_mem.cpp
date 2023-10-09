#include <iostream>
using namespace std;

class bankaccount
{
    int deposite, balance, withdral, total;

public:
    bankaccount(int d, int b, int w, int t)
    {
        deposite = d;
        balance = b;
        withdral = w;
        total = t;
    }
    void bal() // deposit amount
    {
        int d, b;
        cout << "Enter Deposit Amount = ";
        cin >> d;
        b = d;
        cout << "Your Total Amount = " << b;
        
    }

    void with() // withdral amount
    {
        int b, w;
        cout << "\nEnter Withdral Amount = ";
        cin >> w;
        if (b < w)
        {
            cout << "\n==> You Cannot withdral";
        }

        else //(b >= w)
        {
            cout << "\n==> You Can withdral";
        }
    }
};

int main()
{
    int a, b, c, d;
    bankaccount b1(a, b, c, d);
    b1.bal();
    b1.with();

    return 0;
}