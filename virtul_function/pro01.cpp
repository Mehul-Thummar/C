#include <iostream>
using namespace std;

class pet
{
public:
    virtual void print()
    {
        cout << "Print Pet Voice";
    }
};

class dog : public pet
{
    void print() override
    {
        cout << "Dog sound Barks";
    }
};

class cat : public pet
{
    void print() override
    {
        cout << "cat sound mious";
    }
};

class goat : public pet
{
    void print() override
    {
        cout << "goat sound mehee";
    }
};

int main()
{
    pet *mypet;

    dog mydog;
    cat mycat;
    goat mygoat;

    mypet = &mydog;
    mypet->print();
    cout << "\n";
    mypet = &mycat;
    mypet->print();
    cout << "\n";
    mypet = &mygoat;
    mypet->print();
}