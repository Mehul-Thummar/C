#include <iostream>
using namespace std;

template <class t1, class t2>
t2 sum(t1 a, t2 b)
{
    return a + b;
}

int main()
{
    int a;
    double b;
    cout << "Enter Int Value : ";
    cin >> a;
    cout << "Enter Double Value : ";
    cin >> b;
    sum(a, b);

    a > b ? cout << a << " is big." : cout << b << " is big.";

    return 0;
}