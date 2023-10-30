#include <iostream>
using namespace std;

class bankaccount
{
public:
    int amt, d, w;
    static int total;

    bankaccount()
    {
        int b = 0;
        amt = b;
        total += amt;
    }
    void withdral()
    {
        int a;

        cout << "Enter withdral Amt : ";
        cin >> a;

        w = a;
        amt -= w;
        total -= w;
        // cout << amt << endl;
    }

    void deposit() 2222
    {
        int c;

        cout << "Enter deposit Amt : ";
        cin >> c;

        d = c;
        amt += d;
        total += d;
        // cout << d << endl;
    }

    static void totalbal()
    {
        cout << "Total Balance is : " << total;
    }
};

int bankaccount ::total = 0;

int main()
{
    bankaccount b1;

    b1.deposit();
    b1.withdral();

    bankaccount::totalbal();
}