#include <iostream>
using namespace std;

template <class t1, class t2>
t2 sum(t1 a, t2 b)
{
    return a * b;
}

int main()
{
    cout << sum(5, 10) << endl;
    cout << sum(5.4, 10.5) << endl;

    return 0;
}