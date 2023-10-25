#include <iostream>
using namespace std;

class square
{
protected:
    int n;

public:
    void setdata()
    {
        cout << "Enter value : ";
        cin >> n;
    }
};

class derived : public square
{
    int i, sum;

public:
    void getdata()
    {
        for (i = 0; i <= n; i++)
        {
            sum = i * i;
            cout << "Square of number is : "
                 << sum << "\n";
        }
    }
};

int main()
{
    derived d;
    d.setdata();
    d.getdata();
}