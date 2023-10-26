#include <iostream>
using namespace std;

class area
{
    int w, l, h, t;

public:
    area()
    {
        cout << "Enter Weight : ";
        cin >> w;
        cout << "Enter Lenght : ";
        cin >> l;
        cout << "Enter Height : ";
        cin >> h;
    }
    virtual void print()
    {
        cout << "area of shape";
    }
};

class rectrangle : public area
{
    void print() override
    {
        cout << "Rectrangle area is : ";
    }
};

class triangle : public area
{
    void print() override
    {
        cout << "Triangle area is : ";
    }
};

class square : public area
{
    void print() override
    {
        cout << "Square area is : ";
    }
};

int main()
{
    area *myarea;

    rectrangle r1;
    triangle t1;
    square s1;

    myarea = &r1;
    myarea->print();
    cout << "\n";
    myarea = &t1;
    myarea->print();
    cout << "\n";
    myarea = &s1;
    myarea->print();
}