#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void displayinfo()
    {
        cout << "This is a generic Vehicle." << endl;
    }
};

class Car : public Vehicle // Derived class
{
public:
    void displayinfo() override
    {
        cout << "This is a Car." << endl;
    }
};

class Bicycle : public Vehicle // Derived class
{
public:
    void displayinfo() override
    {
        cout << "This is a Bicycle." << endl;
    }
};

int main()
{

    Vehicle *myvehicle;

    Car mycar;
    Bicycle mybicycle;

    myvehicle = &mycar;
    myvehicle->displayinfo();

    myvehicle = &mybicycle;
    myvehicle->displayinfo();

    return 0;
}
