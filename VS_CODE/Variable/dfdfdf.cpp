#include <iostream>
using namespace std;

void coin()
{
    int n;
    cout << "Enter The Value of Coin :";
    cin >> n;

    int arry[5] = {20, 10, 5, 2, 1};
    cout <<"The Coins Are \n:";

    while (n >= arry[0])
    {
        cout <<arry[0];
        n = n-20;
    }
    while (n >= arry[1])
    {
        cout << arry[1];
        n = n-10;
    }
    while (n >= arry[2])
    {
        cout << arry[2];
        n = n-5;
    }
    while (n >= arry[3])
    {
        cout << arry[3];
        n = n-2;
    }
    while (n >= arry[4])
    {
        cout << arry[4];
        n = n-1;
    }
}
int main()
{
    coin();
}