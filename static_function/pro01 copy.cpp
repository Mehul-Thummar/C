#include <iostream>
using namespace std;

class car
{
public:
    static int a;
    car()
    {
        a++;
    }
    void display()
    {
        cout << "display function of car...." << endl;
    }
};

int car ::a = 0;

int main()
{
    car c1;
    c1.display();
    car c2;
    c2.display();
    car c3;
    c3.display();

    cout << "No. of display is : " << car::a << endl;
}