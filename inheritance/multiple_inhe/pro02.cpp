#include <iostream>
using namespace std;

class cube1
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

class cube2
{
protected:
    int j;

public:
    void setdatb()
    {
        cout << "Enter value : ";
        cin >> j;
    }
};

class derived : public cube1
{
    int i, sum;

public:
    void getdata()
    {
        for (i = 0; i <= n; i++)
        {
            sum = i * i * i;
            cout << "cube of number is : "
                 << sum << "\n";
        }
    }
};

int main()
{
    derived d;
    d.setdata();
   // d.setdatb();
    d.getdata();
}