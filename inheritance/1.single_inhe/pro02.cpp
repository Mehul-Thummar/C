#include <iostream>
using namespace std;

class square
{
protected:
    int mat, sci, eng;

public:
    void setdata()
    {
        cout << "Enter Math marks : ";
        cin >> mat;
        cout << "Enter Science marks : ";
        cin >> sci;
        cout << "Enter English marks : ";
        cin >> eng;
    }
};

class derived : public square
{
    int total, per;

public:
    void getdata()
    {
        if (mat < 35 || sci < 35 || eng < 35)
        {
            cout << "Student is fail";
        }
        else if (per < 95)
        {
            cout << "Grade is : A";
        }
        else if (per < 80)
        {
            cout << "Grade is : B";
        }
        else if (per < 60)
        {
            cout << "Grade is : C";
        }
        else if (per < 40)
        {
            cout << "Grade is : D";
        }
        else
        {
            total = mat + sci + eng;
            cout << "Total Marks : " << total << "\n";
            per = total * 100 / 300;
            cout << "Percentage is : " << per;
        }
    }
};

int main()
{
    derived d;
    d.setdata();
    d.getdata();
}